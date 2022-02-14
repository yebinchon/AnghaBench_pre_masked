
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode_attr {int va_gid; } ;
typedef int kauth_cred_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct vnode_attr*,int ) ;
 int FUNC_1 (int ,int ,int*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(struct vnode_attr *VAR_2, kauth_cred_t VAR_3, int *VAR_4, int VAR_5)
{
 int VAR_6;
 int VAR_7;

 VAR_6 = 0;
 VAR_7 = 0;







 if (VAR_2 && FUNC_0(VAR_2, VAR_1)) {
  VAR_6 = FUNC_1(VAR_3, VAR_2->va_gid, &VAR_7);
  if (VAR_6 == VAR_0)
   VAR_6 = VAR_5;
 }
 if (!VAR_6)
  *VAR_4 = VAR_7;
 return(VAR_6);
}
