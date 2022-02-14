
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_3__ {scalar_t__* eff_masking_curve_cb; scalar_t__* band_masking_cb; } ;
typedef TYPE_1__ DCAEncContext ;



__attribute__((used)) static void FUNC_0(DCAEncContext *VAR_0, int VAR_1, int VAR_2,
                                int VAR_3, int32_t VAR_4, int32_t VAR_5,
                                int VAR_6, int32_t * VAR_7)
{
    int32_t VAR_8 = VAR_0->eff_masking_curve_cb[VAR_3] - VAR_4;

    if (VAR_8 < VAR_0->band_masking_cb[VAR_1])
        VAR_0->band_masking_cb[VAR_1] = VAR_8;
}
