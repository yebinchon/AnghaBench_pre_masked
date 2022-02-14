
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef int kauth_cred_t ;
typedef int errno_t ;
typedef int daddr64_t ;
typedef int buf_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int ,int ,int ) ;
 int FUNC_1 (int ) ;

errno_t
FUNC_2(vnode_t VAR_1, daddr64_t VAR_2, int VAR_3, kauth_cred_t VAR_4, buf_t *VAR_5)
{
 buf_t VAR_6;


 VAR_6 = *VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, 0, VAR_0);


 return (FUNC_1(VAR_6));
}
