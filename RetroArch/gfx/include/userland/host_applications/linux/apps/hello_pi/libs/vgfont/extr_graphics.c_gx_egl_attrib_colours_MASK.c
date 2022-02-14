
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int GRAPHICS_RESOURCE_TYPE_T ;
typedef int EGLint ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(EGLint *VAR_0, GRAPHICS_RESOURCE_TYPE_T VAR_1)
{
   int VAR_2, VAR_3;
   static EGLint VAR_4[] = {131, 132, 133, 134};
   static uint8_t VAR_5[] = {5,6,5,0};
   static uint8_t VAR_6[] = {8,8,8,0};
   static uint8_t VAR_7[] = {8,8,8,8};

   uint8_t *VAR_8 = ((void*)0);

   switch (VAR_1)
   {
      case 130:
         VAR_8 = VAR_5;
         break;
      case 129:
         VAR_8 = VAR_6;
         break;
      case 128:
         VAR_8 = VAR_7;
         break;
      default:
         FUNC_1(0);
         return -1;
   }
   for (VAR_3=0, VAR_2=0; VAR_2<FUNC_0(VAR_4); VAR_2++)
   {
      VAR_0[VAR_3++] = VAR_4[VAR_2];
      VAR_0[VAR_3++] = VAR_8[VAR_2];
   }
   return VAR_3;
}
