
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_3__ {int* pulseval; int* pulseoff; int* pulsepos; } ;
typedef TYPE_1__ TSContext ;


 int FUNC_0 (int *,int ,int) ;
 int * VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_1(TSContext *VAR_2, int16_t *VAR_3, int VAR_4)
{
    int16_t VAR_5[7];
    int VAR_6, VAR_7, VAR_8;
    const int16_t *VAR_9;
    int16_t *VAR_10;
    int VAR_11;

    FUNC_0(VAR_3, 0, 60 * sizeof(*VAR_3));
    for(VAR_6 = 0; VAR_6 < 7; VAR_6++) {
        VAR_8 = VAR_2->pulseval[VAR_4] & 3;
        VAR_2->pulseval[VAR_4] >>= 2;
        VAR_5[6 - VAR_6] = VAR_0[VAR_2->pulseoff[VAR_4] * 4 + VAR_8];
    }

    VAR_11 = VAR_2->pulsepos[VAR_4] >> 15;
    VAR_9 = VAR_1 + 30;
    VAR_10 = VAR_5;
    for(VAR_6 = 0, VAR_7 = 3; (VAR_6 < 30) && (VAR_7 > 0); VAR_6++){
        VAR_8 = *VAR_9++;
        if(VAR_11 >= VAR_8)
            VAR_11 -= VAR_8;
        else{
            VAR_3[VAR_6] = *VAR_10++;
            VAR_9 += 30;
            VAR_7--;
        }
    }
    VAR_11 = VAR_2->pulsepos[VAR_4] & 0x7FFF;
    VAR_9 = VAR_1;
    for(VAR_6 = 30, VAR_7 = 4; (VAR_6 < 60) && (VAR_7 > 0); VAR_6++){
        VAR_8 = *VAR_9++;
        if(VAR_11 >= VAR_8)
            VAR_11 -= VAR_8;
        else{
            VAR_3[VAR_6] = *VAR_10++;
            VAR_9 += 30;
            VAR_7--;
        }
    }

}
