
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int int16_t ;
struct TYPE_4__ {int* permutated; } ;
struct TYPE_5__ {int* block_last_index; TYPE_1__ intra_scantable; scalar_t__* inter_matrix; } ;
typedef TYPE_2__ MpegEncContext ;



__attribute__((used)) static void FUNC_0(MpegEncContext *VAR_0,
                                   int16_t *VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4, VAR_5, VAR_6;
    const uint16_t *VAR_7;

    VAR_6= VAR_0->block_last_index[VAR_2];

    VAR_7 = VAR_0->inter_matrix;
    for(VAR_4=0; VAR_4<=VAR_6; VAR_4++) {
        int VAR_8= VAR_0->intra_scantable.permutated[VAR_4];
        VAR_5 = VAR_1[VAR_8];
        if (VAR_5) {
            if (VAR_5 < 0) {
                VAR_5 = -VAR_5;
                VAR_5 = (((VAR_5 << 1) + 1) * VAR_3 *
                         ((int) (VAR_7[VAR_8]))) >> 4;
                VAR_5 = (VAR_5 - 1) | 1;
                VAR_5 = -VAR_5;
            } else {
                VAR_5 = (((VAR_5 << 1) + 1) * VAR_3 *
                         ((int) (VAR_7[VAR_8]))) >> 4;
                VAR_5 = (VAR_5 - 1) | 1;
            }
            VAR_1[VAR_8] = VAR_5;
        }
    }
}
