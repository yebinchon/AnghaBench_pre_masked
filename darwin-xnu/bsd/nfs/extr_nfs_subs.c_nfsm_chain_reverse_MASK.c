
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct nfsm_chain {scalar_t__ nmc_ptr; int nmc_mhead; int nmc_left; int nmc_mcur; } ;
typedef scalar_t__ caddr_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct nfsm_chain*,scalar_t__) ;
 int FUNC_2 (int,struct nfsm_chain*,int ) ;
 scalar_t__ FUNC_3 (struct nfsm_chain*) ;

int
FUNC_4(struct nfsm_chain *VAR_0, uint32_t VAR_1)
{
 uint32_t VAR_2, VAR_3;
 int VAR_4 = 0;

 VAR_2 = VAR_0->nmc_ptr - (caddr_t) FUNC_0(VAR_0->nmc_mcur);
 if (VAR_1 <= VAR_2) {
  VAR_0->nmc_ptr -= VAR_1;
  VAR_0->nmc_left += VAR_1;
  return (0);
 }

 VAR_3 = FUNC_3(VAR_0) - VAR_1;
 FUNC_2(VAR_4, VAR_0, VAR_0->nmc_mhead);
 if (VAR_4)
  return (VAR_4);

 return (FUNC_1(VAR_0, VAR_3));
}
