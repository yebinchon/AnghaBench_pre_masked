
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int u_char ;
struct nfsm_chain {void* nmc_mcur; scalar_t__ nmc_left; int * nmc_ptr; } ;
typedef void* mbuf_t ;
typedef int * caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int *,int *,scalar_t__) ;
 void* FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (void*) ;
 scalar_t__ FUNC_5 (void*) ;
 void* FUNC_6 (void*) ;
 int FUNC_7 (void*,int *,scalar_t__) ;
 int FUNC_8 (void*,scalar_t__) ;
 int FUNC_9 (void*,void*) ;
 scalar_t__ FUNC_10 (void*) ;
 int FUNC_11 (struct nfsm_chain*,scalar_t__) ;
 int FUNC_12 (int,void**,scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;

int
FUNC_14(struct nfsm_chain *VAR_2, uint32_t VAR_3, u_char **VAR_4)
{
 mbuf_t VAR_5, VAR_6;
 uint32_t VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 u_char *VAR_12;
 int VAR_13 = 0;


 while (VAR_2->nmc_mcur && (VAR_2->nmc_left == 0)) {
  VAR_6 = FUNC_6(VAR_2->nmc_mcur);
  VAR_2->nmc_mcur = VAR_6;
  if (!VAR_6)
   break;
  VAR_2->nmc_ptr = FUNC_2(VAR_6);
  VAR_2->nmc_left = FUNC_4(VAR_6);
 }

 if (!VAR_2->nmc_mcur)
  return (VAR_0);


 if (VAR_2->nmc_left >= VAR_3) {

  *VAR_4 = (u_char*)VAR_2->nmc_ptr;
  VAR_13 = FUNC_11(VAR_2, FUNC_13(VAR_3));
  return (VAR_13);
 }

 VAR_11 = FUNC_13(VAR_3) - VAR_3;


 VAR_5 = VAR_2->nmc_mcur;
 VAR_7 = VAR_2->nmc_left;
 VAR_8 = VAR_3 - VAR_7;

 if (VAR_8 > FUNC_10(VAR_5)) {




  FUNC_12(VAR_13, &VAR_6, VAR_3);
  if (VAR_13)
   return (VAR_13);

  if (FUNC_5(VAR_6) < VAR_3) {
   FUNC_3(VAR_6);
   return (VAR_1);
  }


  *VAR_4 = VAR_12 = FUNC_2(VAR_6);


  FUNC_1(VAR_2->nmc_ptr, VAR_12, VAR_7);
  VAR_12 += VAR_7;
  FUNC_8(VAR_6, VAR_7);


  VAR_13 = FUNC_9(VAR_6, FUNC_6(VAR_5));
  if (!VAR_13)
   VAR_13 = FUNC_9(VAR_5, VAR_6);
  if (VAR_13) {
   FUNC_3(VAR_6);
   return (VAR_13);
  }


  FUNC_8(VAR_5, FUNC_4(VAR_5) - VAR_7);





  VAR_2->nmc_mcur = VAR_5 = VAR_6;
  VAR_2->nmc_left = 0;
  VAR_2->nmc_ptr = (caddr_t)VAR_12;
 } else {



  *VAR_4 = (u_char*)VAR_2->nmc_ptr;





  VAR_2->nmc_ptr += VAR_7;
  VAR_2->nmc_left = 0;
 }







 FUNC_8(VAR_5, FUNC_4(VAR_5) + VAR_8);


 VAR_6 = FUNC_6(VAR_5);

 while (VAR_8 && VAR_6) {

  VAR_12 = FUNC_2(VAR_6);
  VAR_9 = FUNC_4(VAR_6);
  VAR_10 = FUNC_0(VAR_9, VAR_8);
  if (VAR_10) {
   FUNC_1(VAR_12, VAR_2->nmc_ptr, VAR_10);




   VAR_13 = FUNC_7(VAR_6, VAR_12 + VAR_10, VAR_9 - VAR_10);
   if (VAR_13) {
    FUNC_8(VAR_5, FUNC_4(VAR_5) - VAR_8);
    return (VAR_13);
   }

   VAR_2->nmc_ptr += VAR_10;
   VAR_8 -= VAR_10;
  }

  if (VAR_8)
   VAR_6 = FUNC_6(VAR_6);
 }


 if (VAR_8) {
  FUNC_8(VAR_5, FUNC_4(VAR_5) - VAR_8);
  return (VAR_0);
 }







 VAR_2->nmc_mcur = VAR_6;
 VAR_2->nmc_ptr = FUNC_2(VAR_6);
 VAR_2->nmc_left = FUNC_4(VAR_6);


 if (VAR_11)
  VAR_13 = FUNC_11(VAR_2, VAR_11);

 return (VAR_13);
}
