
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vnode_attr {int * va_base_acl; int * va_acl; } ;
typedef int * kauth_acl_t ;


 int FUNC_0 (struct vnode_attr*,int ) ;
 scalar_t__ FUNC_1 (struct vnode_attr*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct vnode_attr*,int ,int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_4(struct vnode_attr *VAR_7, uint32_t VAR_8)
{





 kauth_acl_t VAR_9, VAR_10;

 if (FUNC_1(VAR_7, VAR_3)) {
  VAR_9 = VAR_7->va_acl;
  VAR_10 = VAR_7->va_base_acl;

  if (VAR_10) {
   FUNC_2(VAR_7, VAR_3, VAR_10);
   VAR_7->va_base_acl = ((void*)0);
  } else {
   FUNC_0(VAR_7, VAR_3);
  }

  if (VAR_9 != ((void*)0)) {
   FUNC_3(VAR_9);
  }
 }

 if ((VAR_8 & VAR_1) != 0) {
  FUNC_0(VAR_7, VAR_5);
 }
 if ((VAR_8 & VAR_0) != 0) {
  FUNC_0(VAR_7, VAR_4);
 }
 if ((VAR_8 & VAR_2) != 0) {
  FUNC_0(VAR_7, VAR_6);
 }

 return;
}
