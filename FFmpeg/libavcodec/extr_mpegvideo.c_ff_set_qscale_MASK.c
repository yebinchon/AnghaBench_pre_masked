
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int qscale; size_t chroma_qscale; size_t* chroma_qscale_table; int * c_dc_scale_table; int c_dc_scale; int * y_dc_scale_table; int y_dc_scale; } ;
typedef TYPE_1__ MpegEncContext ;



void FUNC_0(MpegEncContext * VAR_0, int VAR_1)
{
    if (VAR_1 < 1)
        VAR_1 = 1;
    else if (VAR_1 > 31)
        VAR_1 = 31;

    VAR_0->qscale = VAR_1;
    VAR_0->chroma_qscale= VAR_0->chroma_qscale_table[VAR_1];

    VAR_0->y_dc_scale= VAR_0->y_dc_scale_table[ VAR_1 ];
    VAR_0->c_dc_scale= VAR_0->c_dc_scale_table[ VAR_0->chroma_qscale ];
}
