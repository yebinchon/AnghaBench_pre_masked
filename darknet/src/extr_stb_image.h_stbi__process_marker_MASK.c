
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned char stbi_uc ;
typedef int stbi__uint16 ;
struct TYPE_7__ {int restart_interval; int jfif; unsigned char app14_color_transform; int s; TYPE_2__* huff_ac; int * fast_ac; TYPE_1__* huff_dc; int ** dequant; } ;
typedef TYPE_3__ stbi__jpeg ;
struct TYPE_6__ {unsigned char* values; } ;
struct TYPE_5__ {unsigned char* values; } ;



 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 unsigned char const FUNC_4 (int ) ;
 size_t* VAR_0 ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(stbi__jpeg *VAR_1, int VAR_2)
{
   int VAR_3;
   switch (VAR_2) {
      case 128:
         return FUNC_2("expected marker","Corrupt JPEG");

      case 0xDD:
         if (FUNC_3(VAR_1->s) != 4) return FUNC_2("bad DRI len","Corrupt JPEG");
         VAR_1->restart_interval = FUNC_3(VAR_1->s);
         return 1;

      case 0xDB:
         VAR_3 = FUNC_3(VAR_1->s)-2;
         while (VAR_3 > 0) {
            int VAR_4 = FUNC_4(VAR_1->s);
            int VAR_5 = VAR_4 >> 4, VAR_6 = (VAR_5 != 0);
            int VAR_7 = VAR_4 & 15,VAR_8;
            if (VAR_5 != 0 && VAR_5 != 1) return FUNC_2("bad DQT type","Corrupt JPEG");
            if (VAR_7 > 3) return FUNC_2("bad DQT table","Corrupt JPEG");

            for (VAR_8=0; VAR_8 < 64; ++VAR_8)
               VAR_1->dequant[VAR_7][VAR_0[VAR_8]] = (stbi__uint16)(VAR_6 ? FUNC_3(VAR_1->s) : FUNC_4(VAR_1->s));
            VAR_3 -= (VAR_6 ? 129 : 65);
         }
         return VAR_3==0;

      case 0xC4:
         VAR_3 = FUNC_3(VAR_1->s)-2;
         while (VAR_3 > 0) {
            stbi_uc *VAR_9;
            int VAR_10[16],VAR_11,VAR_12=0;
            int VAR_13 = FUNC_4(VAR_1->s);
            int VAR_14 = VAR_13 >> 4;
            int VAR_15 = VAR_13 & 15;
            if (VAR_14 > 1 || VAR_15 > 3) return FUNC_2("bad DHT header","Corrupt JPEG");
            for (VAR_11=0; VAR_11 < 16; ++VAR_11) {
               VAR_10[VAR_11] = FUNC_4(VAR_1->s);
               VAR_12 += VAR_10[VAR_11];
            }
            VAR_3 -= 17;
            if (VAR_14 == 0) {
               if (!FUNC_1(VAR_1->huff_dc+VAR_15, VAR_10)) return 0;
               VAR_9 = VAR_1->huff_dc[VAR_15].values;
            } else {
               if (!FUNC_1(VAR_1->huff_ac+VAR_15, VAR_10)) return 0;
               VAR_9 = VAR_1->huff_ac[VAR_15].values;
            }
            for (VAR_11=0; VAR_11 < VAR_12; ++VAR_11)
               VAR_9[VAR_11] = FUNC_4(VAR_1->s);
            if (VAR_14 != 0)
               FUNC_0(VAR_1->fast_ac[VAR_15], VAR_1->huff_ac + VAR_15);
            VAR_3 -= VAR_12;
         }
         return VAR_3==0;
   }


   if ((VAR_2 >= 0xE0 && VAR_2 <= 0xEF) || VAR_2 == 0xFE) {
      VAR_3 = FUNC_3(VAR_1->s);
      if (VAR_3 < 2) {
         if (VAR_2 == 0xFE)
            return FUNC_2("bad COM len","Corrupt JPEG");
         else
            return FUNC_2("bad APP len","Corrupt JPEG");
      }
      VAR_3 -= 2;

      if (VAR_2 == 0xE0 && VAR_3 >= 5) {
         static const unsigned char VAR_16[5] = {'J','F','I','F','\0'};
         int VAR_17 = 1;
         int VAR_18;
         for (VAR_18=0; VAR_18 < 5; ++VAR_18)
            if (FUNC_4(VAR_1->s) != VAR_16[VAR_18])
               VAR_17 = 0;
         VAR_3 -= 5;
         if (VAR_17)
            VAR_1->jfif = 1;
      } else if (VAR_2 == 0xEE && VAR_3 >= 12) {
         static const unsigned char VAR_19[6] = {'A','d','o','b','e','\0'};
         int VAR_20 = 1;
         int VAR_21;
         for (VAR_21=0; VAR_21 < 6; ++VAR_21)
            if (FUNC_4(VAR_1->s) != VAR_19[VAR_21])
               VAR_20 = 0;
         VAR_3 -= 6;
         if (VAR_20) {
            FUNC_4(VAR_1->s);
            FUNC_3(VAR_1->s);
            FUNC_3(VAR_1->s);
            VAR_1->app14_color_transform = FUNC_4(VAR_1->s);
            VAR_3 -= 6;
         }
      }

      FUNC_5(VAR_1->s, VAR_3);
      return 1;
   }

   return FUNC_2("unknown marker","Corrupt JPEG");
}
