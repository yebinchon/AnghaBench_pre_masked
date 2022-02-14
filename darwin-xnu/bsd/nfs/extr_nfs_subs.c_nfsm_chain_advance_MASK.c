
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct nfsm_chain {scalar_t__ nmc_left; int nmc_ptr; int nmc_mcur; } ;
typedef int mbuf_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int
FUNC_3(struct nfsm_chain *VAR_1, uint32_t VAR_2)
{
 mbuf_t VAR_3;

 while (VAR_2) {
  if (VAR_1->nmc_left >= VAR_2) {
   VAR_1->nmc_left -= VAR_2;
   VAR_1->nmc_ptr += VAR_2;
   return (0);
  }
  VAR_2 -= VAR_1->nmc_left;
  VAR_1->nmc_mcur = VAR_3 = FUNC_2(VAR_1->nmc_mcur);
  if (!VAR_3)
   return (VAR_0);
  VAR_1->nmc_ptr = FUNC_0(VAR_3);
  VAR_1->nmc_left = FUNC_1(VAR_3);
 }

 return (0);
}
