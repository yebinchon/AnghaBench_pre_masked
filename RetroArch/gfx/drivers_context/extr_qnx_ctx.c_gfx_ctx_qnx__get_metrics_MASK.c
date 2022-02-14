
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qnx_ctx_data_t ;
typedef enum display_metric_types { ____Placeholder_display_metric_types } display_metric_types ;






 int FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(void *VAR_0,
    enum display_metric_types VAR_1, float *VAR_2)
{
   static int VAR_3 = -1;
   qnx_ctx_data_t *VAR_4 = (qnx_ctx_data_t*)VAR_0;

   switch (VAR_1)
   {
      case 129:
         return 0;
      case 130:
         return 0;
      case 131:
         if (VAR_3 == -1)
         {
            VAR_3 = FUNC_0(VAR_4);
            if (VAR_3 <= 0)
               goto dpi_fallback;
         }
         *VAR_2 = (float)VAR_3;
         break;
      case 128:
      default:
         *VAR_2 = 0;
         return 0;
   }

   return 1;

dpi_fallback:


   VAR_3 = 345;
   *VAR_2 = (float)VAR_3;
   return 1;
}
