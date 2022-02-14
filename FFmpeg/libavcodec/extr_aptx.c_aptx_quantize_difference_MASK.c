
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
typedef int int32_t ;
struct TYPE_6__ {int* quantize_intervals; int* quantize_dither_factors; int tables_size; } ;
struct TYPE_5__ {int quantized_sample; int quantized_sample_parity_change; void* error; } ;
typedef TYPE_1__ Quantize ;
typedef TYPE_2__ ConstTables ;


 void* FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int,int const*,int ) ;
 scalar_t__ FUNC_5 (int,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static void FUNC_9(Quantize *VAR_0,
                                     int32_t VAR_1,
                                     int32_t VAR_2,
                                     int32_t VAR_3,
                                     ConstTables *VAR_4)
{
    const int32_t *VAR_5 = VAR_4->quantize_intervals;
    int32_t VAR_6, VAR_7, VAR_8;
    int32_t VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    int64_t VAR_14;

    VAR_13 = FUNC_0(VAR_1);
    VAR_13 = FUNC_1(VAR_13, (1 << 23) - 1);

    VAR_6 = FUNC_4(VAR_13 >> 4,
                                       VAR_3,
                                       VAR_5, VAR_4->tables_size);

    VAR_9 = FUNC_6(FUNC_3(VAR_2, VAR_2), 7) - (1 << 23);
    VAR_9 = FUNC_7(FUNC_2(VAR_9, VAR_4->quantize_dither_factors[VAR_6]), 23);

    VAR_5 += VAR_6;
    VAR_10 = (VAR_5[1] + VAR_5[0]) / 2;
    VAR_11 = (VAR_5[1] - VAR_5[0]) * (-(VAR_1 < 0) | 1);

    VAR_7 = FUNC_8(FUNC_2(VAR_2, VAR_11) + ((int64_t)FUNC_5(VAR_10 + VAR_9, 23) << 32), 32);
    VAR_14 = ((int64_t)VAR_13 << 20) - FUNC_2(VAR_7, VAR_3);
    VAR_0->error = FUNC_0(FUNC_7(VAR_14, 23));

    VAR_8 = VAR_6;
    if (VAR_14 < 0)
        VAR_6--;
    else
        VAR_8--;

    VAR_12 = -(VAR_1 < 0);
    VAR_0->quantized_sample = VAR_6 ^ VAR_12;
    VAR_0->quantized_sample_parity_change = VAR_8 ^ VAR_12;
}
