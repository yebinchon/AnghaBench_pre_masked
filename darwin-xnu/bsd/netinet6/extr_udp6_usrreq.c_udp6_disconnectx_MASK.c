
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
typedef int sae_connid_t ;
typedef scalar_t__ sae_associd_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct socket*) ;

__attribute__((used)) static int
FUNC_1(struct socket *VAR_3, sae_associd_t VAR_4, sae_connid_t VAR_5)
{
#pragma unused(cid)
 if (VAR_4 != VAR_2 && VAR_4 != VAR_1)
  return (VAR_0);

 return (FUNC_0(VAR_3));
}
