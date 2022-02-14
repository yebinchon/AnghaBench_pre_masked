
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ cothread_t ;
typedef int SceFiber ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ,int ,void*,unsigned int,int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ) ;

cothread_t FUNC_3(unsigned int VAR_3, void (*VAR_4)(void))
{
   SceFiber* VAR_5 = FUNC_1(sizeof(SceFiber));
  char * VAR_6 = FUNC_1(sizeof(char)*VAR_3);
  if(!VAR_1)
   {
      FUNC_2(VAR_0);
      VAR_1 = (cothread_t)1;
   }


   int VAR_7 = FUNC_0(VAR_5, "tailFiber", VAR_2, (uint32_t)VAR_4, (void*) VAR_6, VAR_3, ((void*)0));
   if(VAR_7==0){
     return (cothread_t)VAR_5;
   }else{
     return (cothread_t)VAR_7;
   }

}
