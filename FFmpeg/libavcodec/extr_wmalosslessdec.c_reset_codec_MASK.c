
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int mclms_recent; int mclms_order; int num_channels; int* cdlms_ttl; int* transient; scalar_t__* transient_pos; int samples_per_frame; TYPE_2__* channel; TYPE_1__** cdlms; } ;
typedef TYPE_3__ WmallDecodeCtx ;
struct TYPE_6__ {int transient_counter; } ;
struct TYPE_5__ {int order; int recent; } ;



__attribute__((used)) static void FUNC_0(WmallDecodeCtx *VAR_0)
{
    int VAR_1, VAR_2;
    VAR_0->mclms_recent = VAR_0->mclms_order * VAR_0->num_channels;
    for (VAR_1 = 0; VAR_1 < VAR_0->num_channels; VAR_1++) {
        for (VAR_2 = 0; VAR_2 < VAR_0->cdlms_ttl[VAR_1]; VAR_2++)
            VAR_0->cdlms[VAR_1][VAR_2].recent = VAR_0->cdlms[VAR_1][VAR_2].order;


        VAR_0->channel[VAR_1].transient_counter = VAR_0->samples_per_frame;
        VAR_0->transient[VAR_1] = 1;
        VAR_0->transient_pos[VAR_1] = 0;
    }
}
