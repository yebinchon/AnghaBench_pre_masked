
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
typedef scalar_t__ sae_connid_t ;
typedef scalar_t__ sae_associd_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct socket*) ;

__attribute__((used)) static int
FUNC_1(struct socket *VAR_5, sae_associd_t VAR_6, sae_connid_t VAR_7)
{
 if (VAR_6 != VAR_2 && VAR_6 != VAR_1)
  return (VAR_0);

 if (VAR_7 != VAR_4 && VAR_7 != VAR_3)
  return (VAR_0);

 return (FUNC_0(VAR_5));
}
