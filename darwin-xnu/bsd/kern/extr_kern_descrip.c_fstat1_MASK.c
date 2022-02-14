
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vnode_t ;
typedef int vfs_context_t ;
typedef int user_size_t ;
typedef int user_addr_t ;
struct vnode {int dummy; } ;
struct user64_stat64 {int dummy; } ;
struct user64_stat {int dummy; } ;
struct user32_stat64 {int dummy; } ;
struct user32_stat {int dummy; } ;
struct stat64 {long long* st_qspare; scalar_t__ st_lspare; } ;
struct stat {long long* st_qspare; scalar_t__ st_lspare; } ;
struct socket {int dummy; } ;
struct fileproc {int f_type; scalar_t__ f_data; TYPE_1__* f_fglob; } ;
typedef int proc_t ;
typedef scalar_t__ kauth_filesec_t ;
typedef int file_type_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {int fg_cred; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,...) ;





 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__,int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int,struct fileproc*,int ) ;
 int FUNC_6 (int ,int,struct fileproc**,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (void*,void*,int,int ) ;
 int FUNC_10 (struct stat*,struct user32_stat*) ;
 int FUNC_11 (struct stat64*,struct user32_stat64*) ;
 int FUNC_12 (struct stat*,struct user64_stat*) ;
 int FUNC_13 (struct stat64*,struct user64_stat64*) ;
 int FUNC_14 (void*,void*,int) ;
 int FUNC_15 (void*,void*,int) ;
 int FUNC_16 (struct socket*,void*,int) ;
 scalar_t__ FUNC_17 (int ,int) ;
 int FUNC_18 () ;
 int FUNC_19 (int ,void*,scalar_t__*,int,int ) ;
 int FUNC_20 (int ,void*,int *,int,int ,int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_23(proc_t VAR_6, int VAR_7, user_addr_t VAR_8, user_addr_t VAR_9, user_addr_t VAR_10, int VAR_11)
{
 struct fileproc *VAR_12;
 union {
  struct stat sb;
  struct stat64 sb64;
 } VAR_13;
 union {
  struct user64_stat user64_sb;
  struct user32_stat user32_sb;
  struct user64_stat64 user64_sb64;
  struct user32_stat64 user32_sb64;
 } VAR_14;
 int VAR_15, VAR_16;
 file_type_t VAR_17;
 caddr_t VAR_18;
 kauth_filesec_t VAR_19;
 user_size_t VAR_20;
 vfs_context_t VAR_21 = FUNC_18();
 void * VAR_22;


 FUNC_0(VAR_7, VAR_7);

 if ((VAR_15 = FUNC_6(VAR_6, VAR_7, &VAR_12, 0)) != 0) {
  return(VAR_15);
 }
 VAR_17 = VAR_12->f_type;
 VAR_18 = VAR_12->f_data;
 VAR_19 = VAR_3;

 VAR_22 = (void *)&VAR_13;

 switch (VAR_17) {

 case 128:
  if ((VAR_15 = FUNC_21((vnode_t)VAR_18)) == 0) {





   if (VAR_9 == VAR_4) {
    VAR_15 = FUNC_20((vnode_t)VAR_18, VAR_22, ((void*)0), VAR_11, VAR_21,
             VAR_12->f_fglob->fg_cred);
   } else {
    VAR_15 = FUNC_19((vnode_t)VAR_18, VAR_22, &VAR_19, VAR_11, VAR_21);
   }

   FUNC_0(VAR_5, (struct vnode *)VAR_18, VAR_0);
   (void)FUNC_22((vnode_t)VAR_18);
  }
  break;







 case 131:
  VAR_15 = FUNC_14((void *)VAR_18, VAR_22, VAR_11);
  break;

 case 130:
  VAR_15 = FUNC_15((void *)VAR_18, VAR_22, VAR_11);
  break;

 case 132:
  VAR_15 = FUNC_9((void *)VAR_18, VAR_22, VAR_11, VAR_6);
  break;

 default:
  VAR_15 = VAR_1;
  goto out;
 }
 if (VAR_15 == 0) {
  caddr_t VAR_23;

  if (VAR_11 != 0) {
   VAR_13.sb64.st_lspare = 0;
   VAR_13.sb64.st_qspare[0] = 0LL;
   VAR_13.sb64.st_qspare[1] = 0LL;

   if (FUNC_1(FUNC_4())) {
    FUNC_13(&VAR_13.sb64, &VAR_14.user64_sb64);
    VAR_16 = sizeof(VAR_14.user64_sb64);
    VAR_23 = (caddr_t)&VAR_14.user64_sb64;
   } else {
    FUNC_11(&VAR_13.sb64, &VAR_14.user32_sb64);
    VAR_16 = sizeof(VAR_14.user32_sb64);
    VAR_23 = (caddr_t)&VAR_14.user32_sb64;
   }
  } else {
   VAR_13.sb.st_lspare = 0;
   VAR_13.sb.st_qspare[0] = 0LL;
   VAR_13.sb.st_qspare[1] = 0LL;
   if (FUNC_1(FUNC_4())) {
    FUNC_12(&VAR_13.sb, &VAR_14.user64_sb);
    VAR_16 = sizeof(VAR_14.user64_sb);
    VAR_23 = (caddr_t)&VAR_14.user64_sb;
   } else {
    FUNC_10(&VAR_13.sb, &VAR_14.user32_sb);
    VAR_16 = sizeof(VAR_14.user32_sb);
    VAR_23 = (caddr_t)&VAR_14.user32_sb;
   }
  }

  VAR_15 = FUNC_3(VAR_23, VAR_8, VAR_16);
 }


 if (VAR_9 != VAR_4) {


   if (VAR_19 == VAR_3) {
   if (FUNC_17(VAR_10, 0) != 0) {
    VAR_15 = VAR_2;
    goto out;
   }
  } else {

   VAR_20 = FUNC_7(VAR_10);


   if (FUNC_17(VAR_10, FUNC_2(VAR_19)) != 0) {
    VAR_15 = VAR_2;
    goto out;
   }


   if (VAR_20 >= FUNC_2(VAR_19))
    VAR_15 = FUNC_3(VAR_19, VAR_9, FUNC_2(VAR_19));
  }
 }
out:
 FUNC_5(VAR_6, VAR_7, VAR_12, 0);
 if (VAR_19 != ((void*)0))
  FUNC_8(VAR_19);
 return (VAR_15);
}
