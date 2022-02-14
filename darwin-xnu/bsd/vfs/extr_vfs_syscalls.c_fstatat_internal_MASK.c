
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vfs_context_t ;
typedef int user_addr_t ;
struct user64_stat64 {int dummy; } ;
struct user64_stat {int dummy; } ;
struct user32_stat64 {int dummy; } ;
struct user32_stat {int dummy; } ;
struct stat64 {long long* st_qspare; int st_nlink; int st_mode; scalar_t__ st_lspare; } ;
struct stat {long long* st_qspare; int st_nlink; int st_mode; scalar_t__ st_lspare; } ;
struct TYPE_8__ {int cn_flags; } ;
struct nameidata {TYPE_2__* ni_vp; TYPE_1__ ni_cnd; } ;
typedef scalar_t__ kauth_filesec_t ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;
typedef scalar_t__ caddr_t ;
struct TYPE_9__ {scalar_t__ v_parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct nameidata*,int ,int ,int,int,int ,int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_10 ;
 int FUNC_4 (scalar_t__,int ,size_t) ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct stat*,struct user32_stat*) ;
 int FUNC_8 (struct stat64*,struct user32_stat64*) ;
 int FUNC_9 (struct stat*,struct user64_stat*) ;
 int FUNC_10 (struct stat64*,struct user64_stat64*) ;
 int FUNC_11 (struct nameidata*,int) ;
 int FUNC_12 (struct nameidata*) ;
 scalar_t__ FUNC_13 (int ,size_t) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_2__*,void*,scalar_t__*,int,int ) ;
 scalar_t__ FUNC_16 (TYPE_2__*) ;
 scalar_t__ FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_21(vfs_context_t VAR_11, user_addr_t VAR_12, user_addr_t VAR_13,
    user_addr_t VAR_14, user_addr_t VAR_15, int VAR_16,
    enum uio_seg VAR_17, int VAR_18, int VAR_19)
{
 struct nameidata VAR_20;
 int VAR_21;
 union {
  struct stat sb;
  struct stat64 sb64;
 } VAR_22 = {};
 union {
  struct user64_stat user64_sb;
  struct user32_stat user32_sb;
  struct user64_stat64 user64_sb64;
  struct user32_stat64 user32_sb64;
 } VAR_23 = {};
 caddr_t VAR_24;
 int VAR_25, VAR_26;
 kauth_filesec_t VAR_27;
 size_t VAR_28;
 void * VAR_29;

 VAR_21 = (VAR_19 & VAR_0) ? VAR_7 : VAR_4;
 FUNC_2(&VAR_20, VAR_6, VAR_9, VAR_21 | VAR_1,
     VAR_17, VAR_12, VAR_11);






 VAR_25 = FUNC_11(&VAR_20, VAR_18);
 if (VAR_25)
  return (VAR_25);
 VAR_27 = VAR_5;

 VAR_29 = (void *)&VAR_22;
 VAR_25 = FUNC_15(VAR_20.ni_vp, VAR_29, (VAR_14 != VAR_10 ? &VAR_27 : ((void*)0)), VAR_16, VAR_11);






 FUNC_18(VAR_20.ni_vp);
 FUNC_12(&VAR_20);

 if (VAR_25)
  return (VAR_25);

 if (VAR_16 != 0) {
  VAR_22.sb64.st_lspare = 0;
  VAR_22.sb64.st_qspare[0] = 0LL;
  VAR_22.sb64.st_qspare[1] = 0LL;
  if (FUNC_0(FUNC_14(VAR_11))) {
   FUNC_10(&VAR_22.sb64, &VAR_23.user64_sb64);
   VAR_26 = sizeof(VAR_23.user64_sb64);
   VAR_24 = (caddr_t)&VAR_23.user64_sb64;
  } else {
   FUNC_8(&VAR_22.sb64, &VAR_23.user32_sb64);
   VAR_26 = sizeof(VAR_23.user32_sb64);
   VAR_24 = (caddr_t)&VAR_23.user32_sb64;
  }



  if ((VAR_22.sb64.st_nlink == 0) && FUNC_3(VAR_22.sb64.st_mode)) {
   VAR_22.sb64.st_nlink = 1;
  }
 } else {
  VAR_22.sb.st_lspare = 0;
  VAR_22.sb.st_qspare[0] = 0LL;
  VAR_22.sb.st_qspare[1] = 0LL;
  if (FUNC_0(FUNC_14(VAR_11))) {
   FUNC_9(&VAR_22.sb, &VAR_23.user64_sb);
   VAR_26 = sizeof(VAR_23.user64_sb);
   VAR_24 = (caddr_t)&VAR_23.user64_sb;
  } else {
   FUNC_7(&VAR_22.sb, &VAR_23.user32_sb);
   VAR_26 = sizeof(VAR_23.user32_sb);
   VAR_24 = (caddr_t)&VAR_23.user32_sb;
  }




  if ((VAR_22.sb.st_nlink == 0) && FUNC_3(VAR_22.sb.st_mode)) {
   VAR_22.sb.st_nlink = 1;
  }
 }
 if ((VAR_25 = FUNC_4(VAR_24, VAR_13, VAR_26)) != 0)
  goto out;


 if (VAR_14 != VAR_10) {


  if (VAR_27 == VAR_5) {
   if (FUNC_13(VAR_15, 0) != 0) {
    VAR_25 = VAR_3;
    goto out;
   }
  } else {

   VAR_28 = FUNC_5(VAR_15);


   if (FUNC_13(VAR_15, FUNC_1(VAR_27)) != 0) {
    VAR_25 = VAR_3;
    goto out;
   }


   if (VAR_28 >= FUNC_1(VAR_27))
    VAR_25 = FUNC_4(VAR_27, VAR_14, FUNC_1(VAR_27));
  }
 }
out:
 if (VAR_27 != VAR_5)
  FUNC_6(VAR_27);
 return (VAR_25);
}
