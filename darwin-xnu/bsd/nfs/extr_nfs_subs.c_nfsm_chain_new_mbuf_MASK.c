
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsm_chain {int nmc_flags; int nmc_left; scalar_t__ nmc_ptr; int * nmc_mcur; } ;
typedef int * mbuf_t ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 size_t VAR_1 ;
 int FUNC_5 (int,int **,size_t) ;
 int FUNC_6 (char*) ;

int
FUNC_7(struct nfsm_chain *VAR_2, size_t VAR_3)
{
 mbuf_t VAR_4;
 int VAR_5 = 0;

 if (VAR_2->nmc_flags & VAR_0)
  VAR_3 = VAR_1;


 FUNC_5(VAR_5, &VAR_4, VAR_3);
 if (VAR_5)
  return (VAR_5);
 if (VAR_4 == ((void*)0))
  FUNC_6("got NULL mbuf?");


 if (VAR_2->nmc_mcur) {

  FUNC_2(VAR_2->nmc_mcur, VAR_2->nmc_ptr - (caddr_t)FUNC_0(VAR_2->nmc_mcur));

  VAR_5 = FUNC_3(VAR_2->nmc_mcur, VAR_4);
  if (VAR_5) {
   FUNC_1(VAR_4);
   return (VAR_5);
  }
 }


 VAR_2->nmc_mcur = VAR_4;
 VAR_2->nmc_ptr = FUNC_0(VAR_4);
 VAR_2->nmc_left = FUNC_4(VAR_4);

 return (0);
}
