
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void** val; } ;
typedef TYPE_1__ uint8x8x2_t ;
typedef int uint8x8_t ;
typedef int stbi_uc ;
typedef int int16x8_t ;
typedef int __m128i ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,int ,int) ;
 int FUNC_20 (int*) ;
 void* FUNC_21 (int ,int) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int,int ,int) ;
 int FUNC_24 (int ,int) ;
 int FUNC_25 (int ,int) ;
 int FUNC_26 (int*,TYPE_1__) ;
 int FUNC_27 (int ,int ) ;
 int FUNC_28 (int ,int ) ;

__attribute__((used)) static stbi_uc *FUNC_29(stbi_uc *VAR_0, stbi_uc *VAR_1, stbi_uc *VAR_2, int VAR_3, int VAR_4)
{

   int VAR_5=0,VAR_6,VAR_7;

   if (VAR_3 == 1) {
      VAR_0[0] = VAR_0[1] = FUNC_17(3*VAR_1[0] + VAR_2[0] + 2);
      return VAR_0;
   }

   VAR_7 = 3*VAR_1[0] + VAR_2[0];



   for (; VAR_5 < ((VAR_3-1) & ~7); VAR_5 += 8) {
      VAR_7 = 3*VAR_1[VAR_5+7] + VAR_2[VAR_5+7];
   }

   VAR_6 = VAR_7;
   VAR_7 = 3*VAR_1[VAR_5] + VAR_2[VAR_5];
   VAR_0[VAR_5*2] = FUNC_16(3*VAR_7 + VAR_6 + 8);

   for (++VAR_5; VAR_5 < VAR_3; ++VAR_5) {
      VAR_6 = VAR_7;
      VAR_7 = 3*VAR_1[VAR_5]+VAR_2[VAR_5];
      VAR_0[VAR_5*2-1] = FUNC_16(3*VAR_6 + VAR_7 + 8);
      VAR_0[VAR_5*2 ] = FUNC_16(3*VAR_7 + VAR_6 + 8);
   }
   VAR_0[VAR_3*2-1] = FUNC_17(VAR_7+2);

   FUNC_0(VAR_4);

   return VAR_0;
}
