
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_4__ {int* frame; int stride; } ;
struct TYPE_3__ {int* filter; int* filter_pos; int filter_len; int filter_stride; } ;
struct scaler_ctx {int out_height; int out_width; TYPE_2__ scaled; TYPE_1__ vert; } ;
typedef int int16_t ;
typedef int __m128i ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int const,int const) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int) ;

void FUNC_9(const struct scaler_ctx *VAR_0, void *VAR_1, int VAR_2)
{
   int VAR_3, VAR_4, VAR_5;
   const uint64_t *VAR_6 = VAR_0->scaled.frame;
   uint32_t *VAR_7 = (uint32_t*)VAR_1;

   const int16_t *VAR_8 = VAR_0->vert.filter;

   for (VAR_3 = 0; VAR_3 < VAR_0->out_height; VAR_3++,
         VAR_8 += VAR_0->vert.filter_stride, VAR_7 += VAR_2 >> 2)
   {
      const uint64_t *VAR_9 = VAR_6 + VAR_0->vert.filter_pos[VAR_3]
         * (VAR_0->scaled.stride >> 3);

      for (VAR_4 = 0; VAR_4 < VAR_0->out_width; VAR_4++)
      {
         const uint64_t *VAR_10 = VAR_9 + VAR_4;

         __m128i VAR_11;
         __m128i VAR_12 = FUNC_5();

         for (VAR_5 = 0; (VAR_5 + 1) < VAR_0->vert.filter_len; VAR_5 += 2,
               VAR_10 += (VAR_0->scaled.stride >> 2))
         {
            __m128i VAR_13 = FUNC_4(VAR_8[VAR_5 + 1] * 0x0001000100010001ll, VAR_8[VAR_5 + 0] * 0x0001000100010001ll);
            __m128i VAR_14 = FUNC_4(VAR_10[VAR_0->scaled.stride >> 3], VAR_10[0]);

            VAR_12 = FUNC_0(FUNC_2(VAR_14, VAR_13), VAR_12);
         }

         for (; VAR_5 < VAR_0->vert.filter_len; VAR_5++, VAR_10 += (VAR_0->scaled.stride >> 3))
         {
            __m128i VAR_15 = FUNC_4(0, VAR_8[VAR_5] * 0x0001000100010001ll);
            __m128i VAR_16 = FUNC_4(0, VAR_10[0]);

            VAR_12 = FUNC_0(FUNC_2(VAR_16, VAR_15), VAR_12);
         }

         VAR_12 = FUNC_0(FUNC_7(VAR_12, 8), VAR_12);
         VAR_12 = FUNC_6(VAR_12, (7 - 2 - 2));

         VAR_11 = FUNC_3(VAR_12, VAR_12);

         VAR_7[VAR_4] = FUNC_1(VAR_11);
      }
   }
}
