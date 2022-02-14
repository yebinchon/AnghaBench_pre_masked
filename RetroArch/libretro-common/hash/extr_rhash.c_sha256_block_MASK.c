
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ u32; } ;
struct sha256_ctx {int* w; int* h; scalar_t__ inlen; TYPE_1__ in; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int* VAR_0 ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct sha256_ctx *VAR_1)
{
   unsigned VAR_2;
   uint32_t VAR_3, VAR_4;
   uint32_t VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

   for (VAR_2 = 0; VAR_2 < 16; VAR_2++)
      VAR_1->w[VAR_2] = FUNC_2(VAR_1->in.u32 + VAR_2);

   for (VAR_2 = 16; VAR_2 < 64; VAR_2++)
   {
      VAR_3 = FUNC_1(VAR_1->w[VAR_2 - 15], 7) ^ FUNC_1(VAR_1->w[VAR_2 - 15], 18) ^ FUNC_0(VAR_1->w[VAR_2 - 15], 3);
      VAR_4 = FUNC_1(VAR_1->w[VAR_2 - 2], 17) ^ FUNC_1(VAR_1->w[VAR_2 - 2], 19) ^ FUNC_0(VAR_1->w[VAR_2 - 2], 10);
      VAR_1->w[VAR_2] = VAR_1->w[VAR_2 - 16] + VAR_3 + VAR_1->w[VAR_2 - 7] + VAR_4;
   }

   VAR_5 = VAR_1->h[0]; VAR_6 = VAR_1->h[1]; VAR_7 = VAR_1->h[2]; VAR_8 = VAR_1->h[3];
   VAR_9 = VAR_1->h[4]; VAR_10 = VAR_1->h[5]; VAR_11 = VAR_1->h[6]; VAR_12 = VAR_1->h[7];

   for (VAR_2 = 0; VAR_2 < 64; VAR_2++)
   {
      uint32_t VAR_13, VAR_14, VAR_15, VAR_16;

      VAR_3 = FUNC_1(VAR_5, 2) ^ FUNC_1(VAR_5, 13) ^ FUNC_1(VAR_5, 22);
      VAR_15 = (VAR_5 & VAR_6) ^ (VAR_5 & VAR_7) ^ (VAR_6 & VAR_7);
      VAR_14 = VAR_3 + VAR_15;
      VAR_4 = FUNC_1(VAR_9, 6) ^ FUNC_1(VAR_9, 11) ^ FUNC_1(VAR_9, 25);
      VAR_16 = (VAR_9 & VAR_10) ^ (~VAR_9 & VAR_11);
      VAR_13 = VAR_12 + VAR_4 + VAR_16 + VAR_0[VAR_2] + VAR_1->w[VAR_2];

      VAR_12 = VAR_11;
      VAR_11 = VAR_10;
      VAR_10 = VAR_9;
      VAR_9 = VAR_8 + VAR_13;
      VAR_8 = VAR_7;
      VAR_7 = VAR_6;
      VAR_6 = VAR_5;
      VAR_5 = VAR_13 + VAR_14;
   }

   VAR_1->h[0] += VAR_5; VAR_1->h[1] += VAR_6; VAR_1->h[2] += VAR_7; VAR_1->h[3] += VAR_8;
   VAR_1->h[4] += VAR_9; VAR_1->h[5] += VAR_10; VAR_1->h[6] += VAR_11; VAR_1->h[7] += VAR_12;


   VAR_1->inlen = 0;
}
