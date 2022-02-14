
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_6__ {int* quantize_intervals; int* invert_quantize_dither_factors; int* quantize_factor_select_offset; int factor_max; } ;
struct TYPE_5__ {int reconstructed_difference; int quantization_factor; int factor_select; } ;
typedef TYPE_1__ InvertQuantize ;
typedef TYPE_2__ ConstTables ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int ,int ) ;
 int* VAR_0 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(InvertQuantize *VAR_1,
                                     int32_t VAR_2, int32_t VAR_3,
                                     ConstTables *VAR_4)
{
    int32_t VAR_5, VAR_6, VAR_7, VAR_8;

    VAR_6 = (VAR_2 ^ -(VAR_2 < 0)) + 1;
    VAR_5 = VAR_4->quantize_intervals[VAR_6] / 2;
    if (VAR_2 < 0)
        VAR_5 = -VAR_5;

    VAR_5 = FUNC_3((VAR_5 * (1LL<<32)) + FUNC_0(VAR_3, VAR_4->invert_quantize_dither_factors[VAR_6]), 32);
    VAR_1->reconstructed_difference = FUNC_0(VAR_1->quantization_factor, VAR_5) >> 19;


    VAR_8 = 32620 * VAR_1->factor_select;
    VAR_8 = FUNC_2(VAR_8 + (VAR_4->quantize_factor_select_offset[VAR_6] * (1 << 15)), 15);
    VAR_1->factor_select = FUNC_1(VAR_8, 0, VAR_4->factor_max);


    VAR_6 = (VAR_1->factor_select & 0xFF) >> 3;
    VAR_7 = (VAR_4->factor_max - VAR_1->factor_select) >> 8;
    VAR_1->quantization_factor = (VAR_0[VAR_6] << 11) >> VAR_7;
}
