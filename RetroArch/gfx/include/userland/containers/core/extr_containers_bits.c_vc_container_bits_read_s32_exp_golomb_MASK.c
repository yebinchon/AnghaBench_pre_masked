
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int int32_t ;
typedef int VC_CONTAINER_BITS_T ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int32_t FUNC_2(VC_CONTAINER_BITS_T *VAR_0)
{
   uint32_t VAR_1;

   VAR_1 = FUNC_1(VAR_0);



   if (VAR_1 == 0xFFFFFFFF)
      return FUNC_0(VAR_0);




   return ((int32_t)((VAR_1 & 1) << 1) - 1) * (int32_t)((VAR_1 >> 1) + (VAR_1 & 1));
}
