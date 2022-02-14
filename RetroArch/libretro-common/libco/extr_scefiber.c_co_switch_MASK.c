
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ cothread_t ;
typedef int SceFiber ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int ,int *) ;

void FUNC_3(cothread_t VAR_1)
{

   uint32_t VAR_2 = 0;
   if(VAR_1 == (cothread_t)1){
     VAR_0 = VAR_1;
     FUNC_0(0, ((void*)0));
   }else{
   SceFiber* VAR_3 = (SceFiber*)VAR_1;
   if(VAR_0 == (cothread_t)1){
    VAR_0 = VAR_1;
    FUNC_1(VAR_3, 0, &VAR_2);
   }else{
    VAR_0 = VAR_1;
    FUNC_2(VAR_3, 0, &VAR_2);
   }
   }
}
