
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int fullband_channels; int** prediction_mode; int *** quantized; int ** quant; int *** subband; } ;
typedef TYPE_1__ DCAEncContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(DCAEncContext *VAR_1)
{
    int VAR_2, VAR_3, VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_1->fullband_channels; VAR_4++) {
        for (VAR_3 = 0; VAR_3 < 32; VAR_3++) {
            if (VAR_1->prediction_mode[VAR_4][VAR_3] == -1) {
                for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
                    int32_t VAR_5 = FUNC_0(VAR_1->subband[VAR_4][VAR_3][VAR_2],
                                                 VAR_1->quant[VAR_4][VAR_3]);
                    VAR_1->quantized[VAR_4][VAR_3][VAR_2] = VAR_5;
                }
            }
        }
    }
}
