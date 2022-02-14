
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsm_chain {scalar_t__ nmc_flags; int nmc_left; scalar_t__ nmc_ptr; int * nmc_mcur; int * nmc_mhead; } ;
typedef int * mbuf_t ;
typedef scalar_t__ caddr_t ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct nfsm_chain *VAR_0, mbuf_t VAR_1)
{
 mbuf_t VAR_2, VAR_3;


 VAR_3 = ((void*)0);
 for (VAR_2 = VAR_1; VAR_2; VAR_2 = FUNC_2(VAR_2))
  VAR_3 = VAR_2;

 VAR_0->nmc_mhead = VAR_1;
 VAR_0->nmc_mcur = VAR_3;
 VAR_0->nmc_ptr = (caddr_t) FUNC_0(VAR_3) + FUNC_1(VAR_3);
 VAR_0->nmc_left = FUNC_3(VAR_3);
 VAR_0->nmc_flags = 0;
}
