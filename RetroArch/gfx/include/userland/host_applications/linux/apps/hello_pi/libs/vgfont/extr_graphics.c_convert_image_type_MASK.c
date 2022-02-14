
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VGImageFormat ;
typedef int VCOS_STATUS_T ;
typedef int GRAPHICS_RESOURCE_TYPE_T ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static VCOS_STATUS_T FUNC_1(GRAPHICS_RESOURCE_TYPE_T VAR_5,
                                        VGImageFormat *VAR_6,
                                        int *VAR_7)
{
   int VAR_8;

   switch (VAR_5)
   {
   case 130:
      *VAR_6 = VAR_4;
      VAR_8 = 2;
      break;
   case 129:
      *VAR_6 = VAR_3;
      VAR_8 = 3;
      break;
   case 128:
      *VAR_6 = VAR_2;
      VAR_8 = 4;
      break;
   default:
      FUNC_0(0);
      *VAR_6 = 0;
      return VAR_0;
   }
   if (VAR_7)
      *VAR_7 = VAR_8;

   return VAR_1;
}
