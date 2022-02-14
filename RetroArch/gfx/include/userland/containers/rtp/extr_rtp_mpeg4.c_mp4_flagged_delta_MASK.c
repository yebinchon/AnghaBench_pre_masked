
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int int32_t ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_BITS_T ;


 int FUNC_0 (int *,int *,int,char*) ;

__attribute__((used)) static int32_t FUNC_1(VC_CONTAINER_T *VAR_0,
      VC_CONTAINER_BITS_T *VAR_1,
      uint32_t VAR_2)
{
   uint32_t VAR_3 = 0;


   if (VAR_2 && FUNC_0(VAR_0, VAR_1, 1, "CTS/DTS delta present"))
   {
      VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2, "CTS/DTS delta");


      if (VAR_3 & (1 << (VAR_2 - 1)))
         VAR_3 |= ~((1 << VAR_2) - 1);
   }

   return (int32_t)VAR_3;
}
