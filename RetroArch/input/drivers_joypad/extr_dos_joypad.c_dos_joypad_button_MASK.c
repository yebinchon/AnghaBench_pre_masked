
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 unsigned int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int* FUNC_0 (unsigned int) ;

__attribute__((used)) static bool FUNC_1(unsigned VAR_11, uint16_t VAR_12)
{
   uint16_t *VAR_13 = FUNC_0(VAR_11);

   if (VAR_11 >= VAR_0)
      return 0;

   switch (VAR_12)
   {
      case 137:
         return VAR_13[VAR_9];
      case 136:
         return VAR_13[VAR_10];
      case 129:
         return VAR_13[VAR_8];
      case 128:
         return VAR_13[VAR_7];
      case 132:
         return VAR_13[VAR_5];
      case 131:
         return VAR_13[VAR_3];
      case 130:
         return VAR_13[VAR_6];
      case 135:
         return VAR_13[VAR_1];
      case 134:
         return VAR_13[VAR_2];
      case 133:
         return VAR_13[VAR_4];
   }

   return 0;
}
