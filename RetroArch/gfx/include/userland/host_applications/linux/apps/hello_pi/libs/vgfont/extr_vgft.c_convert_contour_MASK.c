
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef float VGfloat ;
struct TYPE_3__ {int y; int x; } ;
typedef TYPE_1__ FT_Vector ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 float* VAR_5 ;
 int VAR_6 ;
 float FUNC_1 (int ) ;
 int * VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_2(const FT_Vector *VAR_9, const char *VAR_10, short VAR_11)
{
   int VAR_12 = VAR_6;

   int VAR_13 = 1;
   char VAR_14 = 0;
   int VAR_15 = 0;

   for (; VAR_11 != 0; ++VAR_9, ++VAR_10, --VAR_11) {
      ++VAR_15;

      char VAR_16 = *VAR_10;
      if (VAR_13) {
         FUNC_0(VAR_16 & 0x1);
         FUNC_0(VAR_15==1); VAR_15=0;
         VAR_7[VAR_8++] = VAR_3;
         VAR_13 = 0;
      } else if (VAR_16 & 0x1) {


         if (VAR_14 & 0x1) {

            FUNC_0(VAR_15==1); VAR_15=0;
            VAR_7[VAR_8++] = VAR_2;
         } else {

            if (VAR_14 & 0x2) {

               FUNC_0(VAR_15==3); VAR_15=0;
               VAR_7[VAR_8++] = VAR_1;
            } else {

               FUNC_0(VAR_15==2); VAR_15=0;
               VAR_7[VAR_8++] = VAR_4;
            }
         }
      } else {


         if (VAR_16 & 0x2) {


            FUNC_0((VAR_14 & 0x1) || (VAR_14 & 0x2));
         } else {


            if (!(VAR_14 & 0x1)) {


               FUNC_0(!(VAR_14 & 0x2));


               FUNC_0(VAR_15==2); VAR_15=1;
               VAR_7[VAR_8++] = VAR_4;
               VGfloat VAR_17 = (VAR_5[VAR_6 - 2] + FUNC_1(VAR_9->x)) * 0.5f;
               VGfloat VAR_18 = (VAR_5[VAR_6 - 1] + FUNC_1(VAR_9->y)) * 0.5f;
               VAR_5[VAR_6++] = VAR_17;
               VAR_5[VAR_6++] = VAR_18;
            }
         }
      }
      VAR_14 = VAR_16;

      VAR_5[VAR_6++] = FUNC_1(VAR_9->x);
      VAR_5[VAR_6++] = FUNC_1(VAR_9->y);
   }

   if (VAR_14 & 0x1) {

      FUNC_0(VAR_15==0);
   } else {
      ++VAR_15;


      if (VAR_14 & 0x2) {

         FUNC_0(VAR_15==3); VAR_15=0;
         VAR_7[VAR_8++] = VAR_1;
      } else {

         FUNC_0(VAR_15==2); VAR_15=0;
         VAR_7[VAR_8++] = VAR_4;
      }

      VAR_5[VAR_6++] = VAR_5[VAR_12 + 0];
      VAR_5[VAR_6++] = VAR_5[VAR_12 + 1];
   }

   VAR_7[VAR_8++] = VAR_0;
}
