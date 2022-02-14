
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_4__ {int* filter; int* filter_pos; int filter_len; int filter_stride; } ;
struct TYPE_3__ {int* frame; int height; int stride; int width; } ;
struct scaler_ctx {TYPE_2__ horiz; TYPE_1__ scaled; } ;
typedef int int16_t ;
typedef int __m128i ;


 int FUNC_0 (int ,int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ,int const) ;
 int FUNC_5 (int const,int const) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int ) ;

void FUNC_10(const struct scaler_ctx *VAR_0, const void *VAR_1, int VAR_2)
{
   int VAR_3, VAR_4, VAR_5;
   const uint32_t *VAR_6 = (uint32_t*)VAR_1;
   uint64_t *VAR_7 = VAR_0->scaled.frame;

   for (VAR_3 = 0; VAR_3 < VAR_0->scaled.height; VAR_3++, VAR_6 += VAR_2 >> 2,
         VAR_7 += VAR_0->scaled.stride >> 3)
   {
      const int16_t *VAR_8 = VAR_0->horiz.filter;

      for (VAR_4 = 0; VAR_4 < VAR_0->scaled.width; VAR_4++,
            VAR_8 += VAR_0->horiz.filter_stride)
      {
         const uint32_t *VAR_9 = VAR_6 + VAR_0->horiz.filter_pos[VAR_4];

         __m128i VAR_10 = FUNC_6();







         for (VAR_5 = 0; (VAR_5 + 1) < VAR_0->horiz.filter_len; VAR_5 += 2)
         {
            __m128i VAR_11 = FUNC_5(VAR_8[VAR_5 + 1] * 0x0001000100010001ll, VAR_8[VAR_5 + 0] * 0x0001000100010001ll);

            __m128i VAR_12 = FUNC_9(FUNC_5(0,
                     ((uint64_t)VAR_9[VAR_5 + 1] << 32) | VAR_9[VAR_5 + 0]), FUNC_6());

            VAR_12 = FUNC_7(VAR_12, 7);
            VAR_10 = FUNC_0(FUNC_3(VAR_12, VAR_11), VAR_10);
         }

         for (; VAR_5 < VAR_0->horiz.filter_len; VAR_5++)
         {
            __m128i VAR_13 = FUNC_5(0, VAR_8[VAR_5] * 0x0001000100010001ll);
            __m128i VAR_14 = FUNC_9(FUNC_4(0, 0, 0, VAR_9[VAR_5]), FUNC_6());

            VAR_14 = FUNC_7(VAR_14, 7);
            VAR_10 = FUNC_0(FUNC_3(VAR_14, VAR_13), VAR_10);
         }

         VAR_10 = FUNC_0(FUNC_8(VAR_10, 8), VAR_10);


         VAR_7[VAR_4] = FUNC_2(VAR_10);
      }
   }
}
