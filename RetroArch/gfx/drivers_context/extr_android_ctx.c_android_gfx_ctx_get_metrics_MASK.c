
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum display_metric_types { ____Placeholder_display_metric_types } display_metric_types ;
typedef int density ;






 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static bool FUNC_3(void *VAR_1,
 enum display_metric_types VAR_2, float *VAR_3)
{
   static int VAR_4 = -1;

   switch (VAR_2)
   {
      case 129:
         return 0;
      case 130:
         return 0;
      case 131:
         if (VAR_4 == -1)
         {
            char VAR_5[VAR_0];
            VAR_5[0] = '\0';

            FUNC_1(VAR_5, sizeof(VAR_5));
            if (FUNC_2(VAR_5))
               goto dpi_fallback;
            VAR_4 = FUNC_0(VAR_5);

            if (VAR_4 <= 0)
               goto dpi_fallback;
         }
         *VAR_3 = (float)VAR_4;
         break;
      case 128:
      default:
         *VAR_3 = 0;
         return 0;
   }

   return 1;

dpi_fallback:


   VAR_4 = 90;
   *VAR_3 = (float)VAR_4;
   return 1;
}
