
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsm_chain {int nmc_left; scalar_t__ nmc_ptr; int * nmc_mcur; } ;
typedef int * mbuf_t ;
typedef scalar_t__ caddr_t ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct nfsm_chain *VAR_0, mbuf_t VAR_1)
{
 int VAR_2 = 0;
 mbuf_t VAR_3, VAR_4;


 VAR_2 = FUNC_3(VAR_0->nmc_mcur, VAR_1);
 if (VAR_2)
  return (VAR_2);


 VAR_4 = ((void*)0);
 for (VAR_3 = VAR_1; VAR_3; VAR_3 = FUNC_2(VAR_3))
  VAR_4 = VAR_3;

 VAR_0->nmc_mcur = VAR_4;
 VAR_0->nmc_ptr = (caddr_t) FUNC_0(VAR_4) + FUNC_1(VAR_4);
 VAR_0->nmc_left = FUNC_4(VAR_4);

 return (0);
}
