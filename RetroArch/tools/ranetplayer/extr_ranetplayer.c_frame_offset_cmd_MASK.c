
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_2 ;

uint32_t FUNC_2(bool VAR_3)
{
   uint32_t VAR_4 = 0;

   switch (VAR_0)
   {
      case 132:
      case 129:
      case 130:
      case 133:
      case 131:
      case 128:
         VAR_4 = FUNC_1(VAR_2[0]);
         if (VAR_3)
            VAR_4 -= VAR_1;
         else
            VAR_4 += VAR_1;
         VAR_2[0] = FUNC_0(VAR_4);
         break;
   }

   return VAR_4;
}
