
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef int vfs_context_t ;
typedef int uint32_t ;
struct vnode_attr {int va_vaflags; scalar_t__ va_type; int * va_base_acl; int * va_acl; } ;
typedef int * kauth_acl_t ;
struct TYPE_6__ {int v_mount; } ;


 int FUNC_0 (char*,TYPE_1__*,int) ;
 int FUNC_1 (struct vnode_attr*,int ) ;
 scalar_t__ FUNC_2 (struct vnode_attr*,int ) ;
 int FUNC_3 (struct vnode_attr*,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (TYPE_1__*,int *,int **,int,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct vnode_attr*,int ) ;
 int FUNC_7 (TYPE_1__*,struct vnode_attr*,int,int *,int ) ;

int
FUNC_8(vnode_t VAR_4, struct vnode_attr *VAR_5, uint32_t *VAR_6, vfs_context_t VAR_7)
{
 kauth_acl_t VAR_8 = ((void*)0), VAR_9 = ((void*)0);
 int VAR_10;




 if (!(VAR_5->va_vaflags & VAR_1) && FUNC_5(VAR_4->v_mount)) {

  if (FUNC_2(VAR_5, VAR_3)) {
   VAR_9 = VAR_5->va_acl;
  }

  VAR_5->va_acl = ((void*)0);
  if ((VAR_10 = FUNC_4(VAR_4,
    VAR_9,
    &VAR_8,
    VAR_5->va_type == VAR_2,
    VAR_7)) != 0) {
   FUNC_0("%p    CREATE - error %d processing inheritance", VAR_4, VAR_10);
   return(VAR_10);
  }





  if (VAR_8 == ((void*)0)) {
   FUNC_1(VAR_5, VAR_3);
  } else {
   VAR_5->va_base_acl = VAR_9;
   FUNC_3(VAR_5, VAR_3, VAR_8);
  }
 }

 VAR_10 = FUNC_7(VAR_4, VAR_5, (VAR_5->va_vaflags & VAR_0), VAR_6, VAR_7);
 if (VAR_10) {
  FUNC_6(VAR_5, *VAR_6);
 }

 return VAR_10;
}
