
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_3__ {size_t** data; int* linesize; } ;
typedef TYPE_1__ AVFrame ;


 size_t* VAR_0 ;
 size_t* VAR_1 ;

__attribute__((used)) static void FUNC_0(AVFrame *VAR_2, int VAR_3, int VAR_4,
                             uint8_t *VAR_5,int VAR_6)
{
    uint8_t *VAR_7, *VAR_8, *VAR_9;
    int VAR_10;

    VAR_7 = VAR_2->data[0] + VAR_3 + VAR_4 * VAR_2->linesize[0];
    VAR_8 = VAR_2->data[1] + (VAR_3 / 4) + (VAR_4 / 4) * VAR_2->linesize[1];
    VAR_9 = VAR_2->data[2] + (VAR_3 / 4) + (VAR_4 / 4) * VAR_2->linesize[2];

    VAR_8[0] = VAR_0[VAR_6 >> 4];

    VAR_9[0] = VAR_0[VAR_6 & 0xF];


    for(VAR_10 = 0; VAR_10 < 16; VAR_10++){
        VAR_7[VAR_10 & 3] = VAR_1[VAR_5[VAR_10]];
        if((VAR_10 & 3) == 3) {
            VAR_7 += VAR_2->linesize[0];
        }
    }
}
