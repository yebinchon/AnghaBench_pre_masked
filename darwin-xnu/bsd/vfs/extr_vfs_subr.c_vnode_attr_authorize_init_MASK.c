
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_context_t ;
struct vnode_attr {int dummy; } ;
typedef int kauth_action_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vnode_attr*) ;
 int FUNC_1 (struct vnode_attr*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;

int
FUNC_3(struct vnode_attr *VAR_8, struct vnode_attr *VAR_9,
    kauth_action_t VAR_10, vfs_context_t VAR_11)
{
 FUNC_0(VAR_8);
 FUNC_1(VAR_8, VAR_6);
 FUNC_1(VAR_8, VAR_5);
 FUNC_1(VAR_8, VAR_3);
 if (VAR_9) {
  FUNC_0(VAR_9);
  if (VAR_10 & VAR_1) {
   FUNC_1(VAR_9, VAR_6);
   FUNC_1(VAR_9, VAR_5);
   FUNC_1(VAR_9, VAR_3);
  }
 } else if (VAR_10 & VAR_1) {
  return (VAR_0);
 }

 if (!FUNC_2(VAR_11)) {
  FUNC_1(VAR_8, VAR_7);
  FUNC_1(VAR_8, VAR_4);
  FUNC_1(VAR_8, VAR_2);
  if (VAR_9 && (VAR_10 & VAR_1)) {
   FUNC_1(VAR_9, VAR_7);
   FUNC_1(VAR_9, VAR_4);
   FUNC_1(VAR_9, VAR_2);
  }
 }

 return (0);
}
