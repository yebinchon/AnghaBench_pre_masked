
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int int16_t ;
struct TYPE_4__ {int* raster_end; } ;
struct TYPE_5__ {size_t* block_last_index; TYPE_1__ inter_scantable; scalar_t__ ac_pred; int c_dc_scale; int y_dc_scale; int h263_aic; } ;
typedef TYPE_2__ MpegEncContext ;


 int FUNC_0 (int *,int,int,int) ;

__attribute__((used)) static void FUNC_1(MpegEncContext *VAR_0, int16_t *VAR_1,
                                    int VAR_2, int VAR_3)
{
    int VAR_4;
    uint64_t VAR_5;
    int16_t VAR_6 = VAR_1[0];

    if (!VAR_0->h263_aic) {
        if (VAR_2 < 4)
            VAR_6 *= VAR_0->y_dc_scale;
        else
            VAR_6 *= VAR_0->c_dc_scale;
        VAR_5 = (VAR_3 - 1) | 1;
    } else {
        VAR_5 = 0;
    }

    if(VAR_0->ac_pred)
        VAR_4 = 63;
    else
        VAR_4 = VAR_0->inter_scantable.raster_end[VAR_0->block_last_index[VAR_2]];

    FUNC_0(VAR_1, VAR_4, VAR_3, VAR_5);

    VAR_1[0] = VAR_6;
}
