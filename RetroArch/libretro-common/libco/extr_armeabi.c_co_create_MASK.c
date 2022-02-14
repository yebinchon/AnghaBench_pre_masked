
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef uintptr_t uint32_t ;
typedef scalar_t__ cothread_t ;


 scalar_t__ FUNC_0 (int,unsigned int) ;
 scalar_t__ FUNC_1 (scalar_t__*,int,unsigned int) ;

cothread_t FUNC_2(unsigned int VAR_0, void (*VAR_1)(void))
{
   VAR_0 = (VAR_0 + 1023) & ~1023;
   cothread_t VAR_2 = 0;




   VAR_2 = FUNC_0(1024, VAR_0 + 256);


   if (!VAR_2)
      return VAR_2;

   uint32_t *VAR_3 = (uint32_t*)VAR_2;

   VAR_3[0] = 0;
   VAR_3[1] = 0;
   VAR_3[2] = 0;
   VAR_3[3] = 0;
   VAR_3[4] = 0;
   VAR_3[5] = 0;
   VAR_3[6] = 0;
   VAR_3[7] = 0;

   VAR_3[8] = (uintptr_t)VAR_3 + VAR_0 + 256 - 8;
   VAR_3[9] = (uintptr_t)VAR_1;
   return VAR_2;
}
