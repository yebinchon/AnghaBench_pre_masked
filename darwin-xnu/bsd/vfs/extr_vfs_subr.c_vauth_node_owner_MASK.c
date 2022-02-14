
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode_attr {scalar_t__ va_uid; } ;
typedef int kauth_cred_t ;


 scalar_t__ FUNC_0 (struct vnode_attr*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_2(struct vnode_attr *VAR_1, kauth_cred_t VAR_2)
{
 int VAR_3;


 VAR_3 = 0;




 if (VAR_1 && FUNC_0(VAR_1, VAR_0)) {
  VAR_3 = (VAR_1->va_uid == FUNC_1(VAR_2)) ? 1 : 0;
 }


 return(VAR_3);
}
