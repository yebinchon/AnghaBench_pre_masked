
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum display_metric_types { ____Placeholder_display_metric_types } display_metric_types ;
typedef int Display ;
 int FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (int *,unsigned int) ;
 int FUNC_3 (int *,unsigned int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

bool FUNC_6(void *VAR_0,
      enum display_metric_types VAR_1, float *VAR_2)
{
   unsigned VAR_3 = 0;
   Display *VAR_4 = (Display*)FUNC_5(((void*)0));
   int VAR_5 = FUNC_2(VAR_4, VAR_3);
   int VAR_6 = FUNC_0(VAR_4, VAR_3);
   int VAR_7 = FUNC_3(VAR_4, VAR_3);
   int VAR_8 = FUNC_1(VAR_4, VAR_3);

   (void)VAR_6;

   FUNC_4(VAR_4);

   switch (VAR_1)
   {
      case 128:
         *VAR_2 = (float)VAR_5;
         break;
      case 129:
         *VAR_2 = (float)VAR_6;
         break;
      case 131:
         *VAR_2 = (float)VAR_7;
         break;
      case 132:
         *VAR_2 = (float)VAR_8;
         break;
      case 133:
         *VAR_2 = ((((float)VAR_5) * 25.4) / ((float)VAR_7));
         break;
      case 130:
      default:
         *VAR_2 = 0;
         return 0;
   }

   return 1;
}
