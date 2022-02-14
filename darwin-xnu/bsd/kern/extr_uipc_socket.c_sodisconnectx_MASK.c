
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
typedef int sae_connid_t ;
typedef int sae_associd_t ;


 int FUNC_0 (struct socket*,int) ;
 int FUNC_1 (struct socket*,int) ;
 int FUNC_2 (struct socket*,int ,int ) ;

int
FUNC_3(struct socket *VAR_0, sae_associd_t VAR_1, sae_connid_t VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_0, 1);
 VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
 FUNC_1(VAR_0, 1);
 return (VAR_3);
}
