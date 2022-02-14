
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int (* draw_horiz_band ) (TYPE_3__*,TYPE_2__*,int*,int,int,int) ;} ;
struct TYPE_8__ {int* linesize; } ;
struct TYPE_7__ {int last_slice_end; int bitstream_bpp; TYPE_3__* avctx; } ;
typedef TYPE_1__ HYuvContext ;
typedef TYPE_2__ AVFrame ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,int*,int,int,int) ;

__attribute__((used)) static void FUNC_2(HYuvContext *VAR_1, AVFrame *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5, VAR_6;
    int VAR_7[VAR_0];

    if (!VAR_1->avctx->draw_horiz_band)
        return;

    VAR_4 = VAR_3 - VAR_1->last_slice_end;
    VAR_3 -= VAR_4;

    if (VAR_1->bitstream_bpp == 12)
        VAR_5 = VAR_3 >> 1;
    else
        VAR_5 = VAR_3;

    VAR_7[0] = VAR_2->linesize[0] * VAR_3;
    VAR_7[1] = VAR_2->linesize[1] * VAR_5;
    VAR_7[2] = VAR_2->linesize[2] * VAR_5;
    for (VAR_6 = 3; VAR_6 < VAR_0; VAR_6++)
        VAR_7[VAR_6] = 0;
    FUNC_0();

    VAR_1->avctx->draw_horiz_band(VAR_1->avctx, VAR_2, VAR_7, VAR_3, 3, VAR_4);

    VAR_1->last_slice_end = VAR_3 + VAR_4;
}
