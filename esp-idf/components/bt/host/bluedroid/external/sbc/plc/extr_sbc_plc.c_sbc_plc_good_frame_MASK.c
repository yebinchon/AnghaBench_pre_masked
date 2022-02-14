
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nbf; int* hist; } ;
typedef TYPE_1__ sbc_plc_state_t ;
typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;

void FUNC_0(sbc_plc_state_t *VAR_5, int16_t *VAR_6, int16_t *VAR_7){
    int VAR_8 = 0;

    if (VAR_5->nbf > 0){
        for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++){
            VAR_7[VAR_8] = VAR_5->hist[VAR_1 + VAR_8];
        }

        for (VAR_8 = VAR_3; VAR_8 < VAR_3 + VAR_2; VAR_8++){
            VAR_7[VAR_8] = (int16_t)(VAR_5->hist[VAR_1 + VAR_8] * VAR_4[VAR_8 - VAR_3] + VAR_6[VAR_8] * VAR_4[VAR_2 - 1 - VAR_8 + VAR_3]);
        }
    }

    for (; VAR_8 < VAR_0; VAR_8++){
        VAR_7[VAR_8] = VAR_6[VAR_8];
    }

    for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++){
        VAR_5->hist[VAR_1 + VAR_8] = VAR_7[VAR_8];
    }

    for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++){
        VAR_5->hist[VAR_8] = VAR_5->hist[VAR_8 + VAR_0];
    }

    VAR_5->nbf = 0;
}
