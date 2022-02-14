
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_4__ {int channels; int** prediction_mode; int*** adpcm_history; size_t** scale_factor; scalar_t__** quantized; int ** subband; } ;
typedef TYPE_1__ DCAEncContext ;


 int FUNC_0 (int*,int*) ;
 int VAR_0 ;
 int FUNC_1 (int*,scalar_t__,int,int ,int ,int) ;
 int * VAR_1 ;
 int FUNC_2 (TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_3(DCAEncContext *VAR_2)
{
     int VAR_3, VAR_4;
     int32_t VAR_5;




     for (VAR_3 = 0; VAR_3 < VAR_2->channels; VAR_3++) {
        for (VAR_4 = 0; VAR_4 < 32; VAR_4++) {
            int32_t *VAR_6 = VAR_2->subband[VAR_3][VAR_4] - VAR_0;
            if (VAR_2->prediction_mode[VAR_3][VAR_4] == -1) {
                VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4);

                FUNC_1(VAR_2->adpcm_history[VAR_3][VAR_4],
                                       VAR_2->quantized[VAR_3][VAR_4]+12, VAR_5,
                                       VAR_1[VAR_2->scale_factor[VAR_3][VAR_4]], 0, 4);
            } else {
                FUNC_0(VAR_2->adpcm_history[VAR_3][VAR_4], VAR_2->adpcm_history[VAR_3][VAR_4]+4);
            }
            VAR_6[0] = VAR_2->adpcm_history[VAR_3][VAR_4][0] << 7;
            VAR_6[1] = VAR_2->adpcm_history[VAR_3][VAR_4][1] << 7;
            VAR_6[2] = VAR_2->adpcm_history[VAR_3][VAR_4][2] << 7;
            VAR_6[3] = VAR_2->adpcm_history[VAR_3][VAR_4][3] << 7;
        }
     }
}
