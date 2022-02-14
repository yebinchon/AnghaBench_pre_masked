
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int context; int (* func ) (int ,unsigned char*,int) ;} ;
typedef TYPE_1__ stbi__write_context ;


 int FUNC_0 (unsigned char*,float*) ;
 int FUNC_1 (TYPE_1__*,int,unsigned char*) ;
 int FUNC_2 (TYPE_1__*,int,unsigned char) ;
 int FUNC_3 (int ,unsigned char*,int) ;
 int FUNC_4 (int ,unsigned char*,int) ;

void FUNC_5(stbi__write_context *VAR_0, int VAR_1, int VAR_2, unsigned char *VAR_3, float *VAR_4)
{
   unsigned char VAR_5[4] = { 2, 2, 0, 0 };
   unsigned char VAR_6[4];
   float VAR_7[3];
   int VAR_8;

   VAR_5[2] = (VAR_1&0xff00)>>8;
   VAR_5[3] = (VAR_1&0x00ff);


   if (VAR_1 < 8 || VAR_1 >= 32768) {
      for (VAR_8=0; VAR_8 < VAR_1; VAR_8++) {
         switch (VAR_2) {
            case 4:
            case 3: VAR_7[2] = VAR_4[VAR_8*VAR_2 + 2];
                    VAR_7[1] = VAR_4[VAR_8*VAR_2 + 1];
                    VAR_7[0] = VAR_4[VAR_8*VAR_2 + 0];
                    break;
            default:
                    VAR_7[0] = VAR_7[1] = VAR_7[2] = VAR_4[VAR_8*VAR_2 + 0];
                    break;
         }
         FUNC_0(VAR_6, VAR_7);
         VAR_0->func(VAR_0->context, VAR_6, 4);
      }
   } else {
      int VAR_9,VAR_10;

      for (VAR_8=0; VAR_8 < VAR_1; VAR_8++) {
         switch(VAR_2) {
            case 4:
            case 3: VAR_7[2] = VAR_4[VAR_8*VAR_2 + 2];
                    VAR_7[1] = VAR_4[VAR_8*VAR_2 + 1];
                    VAR_7[0] = VAR_4[VAR_8*VAR_2 + 0];
                    break;
            default:
                    VAR_7[0] = VAR_7[1] = VAR_7[2] = VAR_4[VAR_8*VAR_2 + 0];
                    break;
         }
         FUNC_0(VAR_6, VAR_7);
         VAR_3[VAR_8 + VAR_1*0] = VAR_6[0];
         VAR_3[VAR_8 + VAR_1*1] = VAR_6[1];
         VAR_3[VAR_8 + VAR_1*2] = VAR_6[2];
         VAR_3[VAR_8 + VAR_1*3] = VAR_6[3];
      }

      VAR_0->func(VAR_0->context, VAR_5, 4);


      for (VAR_9=0; VAR_9 < 4; VAR_9++) {
         unsigned char *VAR_11 = &VAR_3[VAR_1*VAR_9];

         VAR_8 = 0;
         while (VAR_8 < VAR_1) {

            VAR_10 = VAR_8;
            while (VAR_10+2 < VAR_1) {
               if (VAR_11[VAR_10] == VAR_11[VAR_10+1] && VAR_11[VAR_10] == VAR_11[VAR_10+2])
                  break;
               ++VAR_10;
            }
            if (VAR_10+2 >= VAR_1)
               VAR_10 = VAR_1;

            while (VAR_8 < VAR_10) {
               int VAR_12 = VAR_10-VAR_8;
               if (VAR_12 > 128) VAR_12 = 128;
               FUNC_1(VAR_0, VAR_12, &VAR_11[VAR_8]);
               VAR_8 += VAR_12;
            }

            if (VAR_10+2 < VAR_1) {

               while (VAR_10 < VAR_1 && VAR_11[VAR_10] == VAR_11[VAR_8])
                  ++VAR_10;

               while (VAR_8 < VAR_10) {
                  int VAR_13 = VAR_10-VAR_8;
                  if (VAR_13 > 127) VAR_13 = 127;
                  FUNC_2(VAR_0, VAR_13, VAR_11[VAR_8]);
                  VAR_8 += VAR_13;
               }
            }
         }
      }
   }
}
