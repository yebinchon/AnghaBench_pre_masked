
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsm_chain {scalar_t__ nmc_mhead; scalar_t__ nmc_mcur; int nmc_ptr; } ;
typedef scalar_t__ mbuf_t ;
typedef int caddr_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

int
FUNC_3(struct nfsm_chain *VAR_0)
{
 mbuf_t VAR_1;
 int VAR_2 = 0;

 for (VAR_1 = VAR_0->nmc_mhead; VAR_1; VAR_1 = FUNC_2(VAR_1)) {
  if (VAR_1 == VAR_0->nmc_mcur)
   return (VAR_2 + (VAR_0->nmc_ptr - (caddr_t) FUNC_0(VAR_1)));
  VAR_2 += FUNC_1(VAR_1);
 }

 return (VAR_2);
}
