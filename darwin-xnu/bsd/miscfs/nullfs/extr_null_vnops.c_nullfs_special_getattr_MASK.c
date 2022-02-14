
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int * vnode_t ;
struct vnop_getattr_args {scalar_t__ a_vp; TYPE_8__* a_vap; int a_context; } ;
struct TYPE_16__ {int tv_nsec; int tv_sec; } ;
struct TYPE_14__ {int tv_nsec; int tv_sec; } ;
struct TYPE_13__ {int tv_nsec; int tv_sec; } ;
struct vnode_attr {int va_uid; int va_gid; TYPE_6__ va_access_time; TYPE_4__ va_modify_time; TYPE_3__ va_create_time; } ;
struct null_mount {scalar_t__ nullm_secondvp; int nullm_lowerrootvid; int * nullm_lowerrootvp; } ;
typedef int mount_t ;
typedef int ino_t ;
struct TYPE_15__ {int tv_nsec; int tv_sec; } ;
struct TYPE_12__ {int tv_nsec; int tv_sec; } ;
struct TYPE_18__ {TYPE_5__ va_modify_time; TYPE_2__ va_create_time; } ;
struct TYPE_11__ {int* val; } ;
struct TYPE_17__ {int f_iosize; TYPE_1__ f_fsid; } ;


 int VAR_0 ;
 struct null_mount* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct vnode_attr*) ;
 scalar_t__ FUNC_2 (TYPE_8__*,int ) ;
 int FUNC_3 (TYPE_8__*,int ,int) ;
 int FUNC_4 (TYPE_8__*,int ) ;
 int FUNC_5 (struct vnode_attr*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 TYPE_7__* FUNC_6 (int ) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int *,struct vnode_attr*,int ) ;
 scalar_t__ FUNC_9 (int *,int ) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (scalar_t__) ;

__attribute__((used)) static int
FUNC_13(struct vnop_getattr_args * VAR_31)
{
 mount_t VAR_32 = FUNC_10(VAR_31->a_vp);
 struct null_mount * VAR_33 = FUNC_0(VAR_32);

 ino_t VAR_34 = VAR_1;
 struct vnode_attr VAR_35;
 vnode_t VAR_36 = VAR_33->nullm_lowerrootvp;

 FUNC_1(&VAR_35);
 FUNC_5(&VAR_35, VAR_30);
 FUNC_5(&VAR_35, VAR_20);
 FUNC_5(&VAR_35, VAR_12);
 FUNC_5(&VAR_35, VAR_24);
 FUNC_5(&VAR_35, VAR_11);



 if (FUNC_9(VAR_36, VAR_33->nullm_lowerrootvid)) {
  VAR_36 = FUNC_7(VAR_32);
  if (VAR_36 == ((void*)0)) {
   return VAR_0;
  }
 }

 int VAR_37 = FUNC_8(VAR_36, &VAR_35, VAR_31->a_context);

 FUNC_11(VAR_36);
 if (VAR_37) {


  return VAR_37;
 }


 if (VAR_31->a_vp == VAR_33->nullm_secondvp) {
  VAR_34 = VAR_2;
 }

 FUNC_3(VAR_31->a_vap, VAR_29, FUNC_12(VAR_31->a_vp));
 FUNC_3(VAR_31->a_vap, VAR_27, 0);
 FUNC_3(VAR_31->a_vap, VAR_25, 3);
 FUNC_3(VAR_31->a_vap, VAR_28, 0);

 FUNC_3(VAR_31->a_vap, VAR_14, 0);
 FUNC_3(VAR_31->a_vap, VAR_13, 0);
 FUNC_3(VAR_31->a_vap, VAR_21, FUNC_6(VAR_32)->f_iosize);
 FUNC_3(VAR_31->a_vap, VAR_15, VAR_34);
 FUNC_3(VAR_31->a_vap, VAR_22, VAR_34);
 FUNC_3(VAR_31->a_vap, VAR_18, FUNC_6(VAR_32)->f_fsid.val[0]);
 FUNC_3(VAR_31->a_vap, VAR_16, 0);
 FUNC_3(VAR_31->a_vap, VAR_19, 0);
 FUNC_3(VAR_31->a_vap, VAR_17, VAR_10);


 if (VAR_34 == VAR_2) {
  FUNC_3(VAR_31->a_vap, VAR_26, VAR_1);




 }

 if (FUNC_2(VAR_31->a_vap, VAR_23)) {

  FUNC_3(VAR_31->a_vap, VAR_23, VAR_3 | VAR_6 | VAR_9 | VAR_4 | VAR_7 | VAR_5 | VAR_8);
 }
 if (FUNC_2(VAR_31->a_vap, VAR_30)) {
  FUNC_3(VAR_31->a_vap, VAR_30, VAR_35.va_uid);
 }
 if (FUNC_2(VAR_31->a_vap, VAR_20)) {
  FUNC_3(VAR_31->a_vap, VAR_20, VAR_35.va_gid);
 }

 if (FUNC_2(VAR_31->a_vap, VAR_12)) {
  FUNC_4(VAR_31->a_vap, VAR_12);
  VAR_31->a_vap->va_create_time.tv_sec = VAR_35.va_create_time.tv_sec;
  VAR_31->a_vap->va_create_time.tv_nsec = VAR_35.va_create_time.tv_nsec;
 }
 if (FUNC_2(VAR_31->a_vap, VAR_24)) {
  FUNC_4(VAR_31->a_vap, VAR_24);
  VAR_31->a_vap->va_modify_time.tv_sec = VAR_35.va_modify_time.tv_sec;
  VAR_31->a_vap->va_modify_time.tv_nsec = VAR_35.va_modify_time.tv_nsec;
 }
 if (FUNC_2(VAR_31->a_vap, VAR_11)) {
  FUNC_4(VAR_31->a_vap, VAR_11);
  VAR_31->a_vap->va_modify_time.tv_sec = VAR_35.va_access_time.tv_sec;
  VAR_31->a_vap->va_modify_time.tv_nsec = VAR_35.va_access_time.tv_nsec;
 }

 return 0;
}
