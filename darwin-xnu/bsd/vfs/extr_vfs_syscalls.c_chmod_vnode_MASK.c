
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef int vfs_context_t ;
struct vnode_attr {int va_uid; int va_gid; int va_acl; scalar_t__ va_mode; } ;
typedef int mode_t ;
typedef int kauth_action_t ;
struct TYPE_12__ {int v_flag; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct vnode_attr*,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,TYPE_1__*,int ) ;
 int FUNC_3 (int ,TYPE_1__*,int ) ;
 int FUNC_4 (int ,TYPE_1__*,int,int) ;
 int FUNC_5 (int ,TYPE_1__*,int ) ;
 int FUNC_6 (int ,TYPE_1__*,int ) ;
 int FUNC_7 (int ,TYPE_1__*,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (TYPE_1__*,struct vnode_attr*,int *,int ) ;
 int FUNC_9 (TYPE_1__*,int *,int ,int ) ;
 int FUNC_10 (TYPE_1__*,struct vnode_attr*,int ) ;

__attribute__((used)) static int
FUNC_11(vfs_context_t VAR_8, vnode_t VAR_9, struct vnode_attr *VAR_10)
{
 kauth_action_t VAR_11;
 int VAR_12;

 FUNC_0(VAR_3, VAR_10->va_mode);
 if (((VAR_12 = FUNC_8(VAR_9, VAR_10, &VAR_11, VAR_8)) != 0) ||
     ((VAR_12 = FUNC_9(VAR_9, ((void*)0), VAR_11, VAR_8)) != 0)) {
  if (VAR_12 == VAR_0)
   VAR_12 = VAR_1;
  return(VAR_12);
 }

 if ((VAR_12 = FUNC_10(VAR_9, VAR_10, VAR_8)) != 0)
  return (VAR_12);
 return (VAR_12);
}
