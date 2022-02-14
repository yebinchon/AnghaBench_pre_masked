
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vnop_setattr_args {struct vnode_attr* a_vap; struct vnode* a_vp; } ;
struct TYPE_6__ {int tv_nsec; int tv_sec; } ;
struct TYPE_5__ {int tv_nsec; int tv_sec; } ;
struct vnode_attr {int va_mode; int va_gid; int va_uid; TYPE_2__ va_modify_time; TYPE_1__ va_access_time; } ;
struct vnode {int dummy; } ;
struct timeval {int tv_usec; int tv_sec; } ;
struct TYPE_7__ {int dn_access; int dn_change; int dn_update; int dn_mode; int dn_gid; int dn_uid; } ;
typedef TYPE_3__ devnode_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct vnode_attr*,int ) ;
 int FUNC_3 (struct vnode_attr*,int ) ;
 TYPE_3__* FUNC_4 (struct vnode*) ;
 int FUNC_5 (struct vnode*,struct timeval*,struct timeval*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_6(struct vnop_setattr_args *VAR_6)





{
   struct vnode *VAR_7 = VAR_6->a_vp;
  struct vnode_attr *VAR_8 = VAR_6->a_vap;
   int VAR_9 = 0;
   devnode_t * VAR_10;
   struct timeval VAR_11, VAR_12;

  FUNC_0();

   VAR_10 = FUNC_4(VAR_7);



  if (FUNC_2(VAR_8, VAR_0) || FUNC_2(VAR_8, VAR_4)) {


  if (FUNC_2(VAR_8, VAR_0))
   VAR_10->dn_access = 1;
  if (FUNC_2(VAR_8, VAR_4)) {
   VAR_10->dn_change = 1;
   VAR_10->dn_update = 1;
  }
  VAR_11.tv_sec = VAR_8->va_access_time.tv_sec;
  VAR_11.tv_usec = VAR_8->va_access_time.tv_nsec / 1000;
  VAR_12.tv_sec = VAR_8->va_modify_time.tv_sec;
  VAR_12.tv_usec = VAR_8->va_modify_time.tv_nsec / 1000;

  if ( (VAR_9 = FUNC_5(VAR_7, &VAR_11, &VAR_12)) )
   goto exit;
  }
  FUNC_3(VAR_8, VAR_0);
  FUNC_3(VAR_8, VAR_1);




  if (FUNC_2(VAR_8, VAR_3)) {
    VAR_10->dn_mode &= ~07777;
    VAR_10->dn_mode |= VAR_8->va_mode & 07777;
   }
  FUNC_3(VAR_8, VAR_3);




  if (FUNC_2(VAR_8, VAR_5))
    VAR_10->dn_uid = VAR_8->va_uid;
  FUNC_3(VAR_8, VAR_5);




  if (FUNC_2(VAR_8, VAR_2))
    VAR_10->dn_gid = VAR_8->va_gid;
  FUNC_3(VAR_8, VAR_2);
 exit:
 FUNC_1();

 return VAR_9;
}
