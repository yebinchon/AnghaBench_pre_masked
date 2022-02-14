
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ int32_t ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_BITS_T ;


 scalar_t__ FUNC_0 (int *,int *,char*) ;

__attribute__((used)) static void FUNC_1(VC_CONTAINER_T *VAR_0,
      VC_CONTAINER_BITS_T *VAR_1,
      uint32_t VAR_2)
{
   uint32_t VAR_3 = 8;
   uint32_t VAR_4 = 8;
   int32_t VAR_5;
   uint32_t VAR_6;


   for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
   {
      if (VAR_4)
      {
         VAR_5 = FUNC_0(VAR_0, VAR_1, "delta_scale");
         VAR_4 = (VAR_3 + VAR_5 + 256) & 0xFF;

         if (VAR_4)
            VAR_3 = VAR_4;
      }
   }
}
