
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int u_char ;
struct nfsm_chain {int nmc_left; int * nmc_ptr; scalar_t__ nmc_mcur; } ;
typedef scalar_t__ mbuf_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int *,int *,scalar_t__) ;
 int * FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,struct nfsm_chain*,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;

int
FUNC_7(struct nfsm_chain *VAR_1, uint32_t VAR_2, u_char *VAR_3)
{
 uint32_t VAR_4, VAR_5;
 int VAR_6 = 0;

 VAR_5 = FUNC_6(VAR_2) - VAR_2;


 while (VAR_2 && VAR_1->nmc_mcur) {

  VAR_4 = FUNC_0(VAR_1->nmc_left, VAR_2);
  if (VAR_4) {
   FUNC_1(VAR_1->nmc_ptr, VAR_3, VAR_4);
   VAR_1->nmc_ptr += VAR_4;
   VAR_1->nmc_left -= VAR_4;
   VAR_3 += VAR_4;
   VAR_2 -= VAR_4;
  }

  if (VAR_2) {
   mbuf_t VAR_7 = FUNC_4(VAR_1->nmc_mcur);
   VAR_1->nmc_mcur = VAR_7;
   VAR_1->nmc_ptr = VAR_7 ? FUNC_2(VAR_7) : ((void*)0);
   VAR_1->nmc_left = VAR_7 ? FUNC_3(VAR_7) : 0;
  }
 }


 if (VAR_2)
  return (VAR_0);

 if (VAR_5)
  FUNC_5(VAR_6, VAR_1, VAR_5);

 return (VAR_6);
}
