
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnop_readdir_args {int a_flags; int* a_numdirent; struct uio* a_uio; struct vnode* a_vp; } ;
struct vnode {int dummy; } ;
struct uio {int dummy; } ;
struct null_mount {int nullm_lowerrootvp; int nullm_lowerrootvid; struct vnode* nullm_rootvp; } ;
typedef int off_t ;
typedef scalar_t__ ino_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct null_mount* FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (scalar_t__,char const*,struct uio*) ;
 int FUNC_2 (struct uio*) ;
 int FUNC_3 (struct uio*,int) ;
 char* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (struct vnode*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char const*) ;

__attribute__((used)) static int
FUNC_9(struct vnop_readdir_args * VAR_8)
{
 struct vnode * VAR_9 = VAR_8->a_vp;
 struct uio * VAR_10 = VAR_8->a_uio;
 struct null_mount * VAR_11 = FUNC_0(FUNC_6(VAR_9));
 off_t VAR_12 = FUNC_2(VAR_10);
 int VAR_13 = VAR_2;
 int VAR_14 = 0;
 ino_t VAR_15 = 0;
 const char * VAR_16 = ((void*)0);

 if (VAR_8->a_flags & (VAR_6 | VAR_7))
  return (VAR_0);

 if (VAR_12 == 0) {

  if (VAR_9 == VAR_11->nullm_rootvp) {
   VAR_15 = VAR_3;
  } else
  {
   VAR_15 = VAR_4;
  }
  VAR_13 = FUNC_1(VAR_15, ".", VAR_10);
  if (VAR_13) {
   goto out;
  }
  VAR_12++;
  VAR_14++;
 }
 if (VAR_12 == 1) {


  VAR_15 = VAR_3;

  VAR_13 = FUNC_1(VAR_15, "..", VAR_10);
  if (VAR_13) {
   goto out;
  }
  VAR_12++;
  VAR_14++;
 }
 if (VAR_12 == 2) {

  if (VAR_9 == VAR_11->nullm_rootvp) {
   VAR_15 = VAR_4;
   VAR_16 = "d";
  } else
  {
   VAR_15 = VAR_5;
   if (FUNC_5(VAR_11->nullm_lowerrootvp, VAR_11->nullm_lowerrootvid)) {



    VAR_13 = 0;
    goto out;
   }
   VAR_16 = FUNC_4(VAR_11->nullm_lowerrootvp);
  }
  VAR_13 = FUNC_1(VAR_15, VAR_16, VAR_10);

  if (VAR_15 == VAR_5) {
   FUNC_8(VAR_16);
   FUNC_7(VAR_11->nullm_lowerrootvp);
  }

  if (VAR_13) {
   goto out;
  }
  VAR_12++;
  VAR_14++;
 }

out:
 if (VAR_13 == VAR_1) {
  VAR_13 = 0;

 }
 FUNC_3(VAR_10, VAR_12);
 if (VAR_8->a_numdirent) {
  *VAR_8->a_numdirent = VAR_14;
 }
 return VAR_13;
}
