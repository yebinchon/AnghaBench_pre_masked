
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void** val; } ;
typedef TYPE_1__ uint8x8x4_t ;
typedef void* uint8x8_t ;
typedef int stbi_uc ;
typedef int int8x8_t ;
typedef int int16x8_t ;
typedef int __m128i ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (float) ;
 int FUNC_16 (int ,int ) ;
 void* FUNC_17 (int) ;
 int FUNC_18 (short) ;
 void* FUNC_19 (int const*) ;
 int FUNC_20 (int ,int ) ;
 void* FUNC_21 (int ,int) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ,int) ;
 int FUNC_25 (void*,int) ;
 int FUNC_26 (int*,TYPE_1__) ;
 int FUNC_27 (void*,void*) ;

__attribute__((used)) static void FUNC_28(stbi_uc *VAR_0, stbi_uc const *VAR_1, stbi_uc const *VAR_2, stbi_uc const *VAR_3, int VAR_4, int VAR_5)
{
   int VAR_6 = 0;
   for (; VAR_6 < VAR_4; ++VAR_6) {
      int VAR_7 = (VAR_1[VAR_6] << 20) + (1<<19);
      int VAR_8,VAR_9,VAR_10;
      int VAR_11 = VAR_3[VAR_6] - 128;
      int VAR_12 = VAR_2[VAR_6] - 128;
      VAR_8 = VAR_7 + VAR_11* FUNC_15(1.40200f);
      VAR_9 = VAR_7 + VAR_11*-FUNC_15(0.71414f) + ((VAR_12*-FUNC_15(0.34414f)) & 0xffff0000);
      VAR_10 = VAR_7 + VAR_12* FUNC_15(1.77200f);
      VAR_8 >>= 20;
      VAR_9 >>= 20;
      VAR_10 >>= 20;
      if ((unsigned) VAR_8 > 255) { if (VAR_8 < 0) VAR_8 = 0; else VAR_8 = 255; }
      if ((unsigned) VAR_9 > 255) { if (VAR_9 < 0) VAR_9 = 0; else VAR_9 = 255; }
      if ((unsigned) VAR_10 > 255) { if (VAR_10 < 0) VAR_10 = 0; else VAR_10 = 255; }
      VAR_0[0] = (stbi_uc)VAR_8;
      VAR_0[1] = (stbi_uc)VAR_9;
      VAR_0[2] = (stbi_uc)VAR_10;
      VAR_0[3] = 255;
      VAR_0 += VAR_5;
   }
}
