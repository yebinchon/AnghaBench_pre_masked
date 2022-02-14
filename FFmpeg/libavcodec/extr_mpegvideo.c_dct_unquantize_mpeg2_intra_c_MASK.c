
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
typedef int int16_t ;
struct TYPE_4__ {int* permutated; } ;
struct TYPE_5__ {int* block_last_index; int y_dc_scale; int c_dc_scale; int* intra_matrix; TYPE_1__ intra_scantable; scalar_t__ alternate_scan; scalar_t__ q_scale_type; } ;
typedef TYPE_2__ MpegEncContext ;


 int* VAR_0 ;

__attribute__((used)) static void FUNC_0(MpegEncContext *VAR_1,
                                   int16_t *VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5, VAR_6, VAR_7;
    const uint16_t *VAR_8;

    if (VAR_1->q_scale_type) VAR_4 = VAR_0[VAR_4];
    else VAR_4 <<= 1;

    if(VAR_1->alternate_scan) VAR_7= 63;
    else VAR_7= VAR_1->block_last_index[VAR_3];

    VAR_2[0] *= VAR_3 < 4 ? VAR_1->y_dc_scale : VAR_1->c_dc_scale;
    VAR_8 = VAR_1->intra_matrix;
    for(VAR_5=1;VAR_5<=VAR_7;VAR_5++) {
        int VAR_9= VAR_1->intra_scantable.permutated[VAR_5];
        VAR_6 = VAR_2[VAR_9];
        if (VAR_6) {
            if (VAR_6 < 0) {
                VAR_6 = -VAR_6;
                VAR_6 = (int)(VAR_6 * VAR_4 * VAR_8[VAR_9]) >> 4;
                VAR_6 = -VAR_6;
            } else {
                VAR_6 = (int)(VAR_6 * VAR_4 * VAR_8[VAR_9]) >> 4;
            }
            VAR_2[VAR_9] = VAR_6;
        }
    }
}
