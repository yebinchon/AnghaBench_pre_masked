
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__* data; } ;
struct TYPE_10__ {int mcscratch; int mctmp; int edge_emu_buffer_base; int blmotion; int sbsplit; scalar_t__ buffer_stride; TYPE_3__* plane; int delay_frames; int ref_frames; TYPE_1__* all_frames; } ;
struct TYPE_8__ {int tmp; int buf_base; } ;
struct TYPE_9__ {TYPE_2__ idwt; } ;
struct TYPE_7__ {int ** hpel_base; int interpolated; TYPE_6__* avframe; } ;
typedef TYPE_4__ DiracContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(DiracContext *VAR_1)
{
    int VAR_2, VAR_3, VAR_4;

    for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
        if (VAR_1->all_frames[VAR_2].avframe->data[0]) {
            FUNC_0(VAR_1->all_frames[VAR_2].avframe);
            FUNC_2(VAR_1->all_frames[VAR_2].interpolated, 0, sizeof(VAR_1->all_frames[VAR_2].interpolated));
        }

        for (VAR_3 = 0; VAR_3 < 3; VAR_3++)
            for (VAR_4 = 1; VAR_4 < 4; VAR_4++)
                FUNC_1(&VAR_1->all_frames[VAR_2].hpel_base[VAR_3][VAR_4]);
    }

    FUNC_2(VAR_1->ref_frames, 0, sizeof(VAR_1->ref_frames));
    FUNC_2(VAR_1->delay_frames, 0, sizeof(VAR_1->delay_frames));

    for (VAR_2 = 0; VAR_2 < 3; VAR_2++) {
        FUNC_1(&VAR_1->plane[VAR_2].idwt.buf_base);
        FUNC_1(&VAR_1->plane[VAR_2].idwt.tmp);
    }

    VAR_1->buffer_stride = 0;
    FUNC_1(&VAR_1->sbsplit);
    FUNC_1(&VAR_1->blmotion);
    FUNC_1(&VAR_1->edge_emu_buffer_base);

    FUNC_1(&VAR_1->mctmp);
    FUNC_1(&VAR_1->mcscratch);
}
