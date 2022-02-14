
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int VC_CONTAINER_BITS_T ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

uint32_t FUNC_3(VC_CONTAINER_BITS_T *VAR_0)
{
   uint32_t VAR_1;
   uint32_t VAR_2;

   VAR_1 = FUNC_0(VAR_0);


   if (VAR_1 > 32)
      return FUNC_1(VAR_0);

   VAR_2 = FUNC_2(VAR_0, VAR_1);

   if (VAR_1 == 32)
   {

      if (VAR_2)
         return FUNC_1(VAR_0);

      return 0xFFFFFFFF;
   }

   return VAR_2 + (1 << VAR_1) - 1;
}
