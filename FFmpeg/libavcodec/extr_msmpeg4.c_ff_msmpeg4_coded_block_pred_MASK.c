
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int* block_index; int b8_stride; int* coded_block; } ;
typedef TYPE_1__ MpegEncContext ;



int FUNC_0(MpegEncContext * VAR_0, int VAR_1, uint8_t **VAR_2)
{
    int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;

    VAR_3 = VAR_0->block_index[VAR_1];
    VAR_4 = VAR_0->b8_stride;




    VAR_6 = VAR_0->coded_block[VAR_3 - 1 ];
    VAR_7 = VAR_0->coded_block[VAR_3 - 1 - VAR_4];
    VAR_8 = VAR_0->coded_block[VAR_3 - VAR_4];

    if (VAR_7 == VAR_8) {
        VAR_5 = VAR_6;
    } else {
        VAR_5 = VAR_8;
    }


    *VAR_2 = &VAR_0->coded_block[VAR_3];

    return VAR_5;
}
