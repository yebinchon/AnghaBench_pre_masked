
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int segment; TYPE_6__* out; TYPE_5__* pv; } ;
typedef TYPE_4__ nlmeans_thread_arg_t ;
struct TYPE_11__ {int color_range; int color_matrix; int color_transfer; int color_prim; int pix_fmt; } ;
struct TYPE_14__ {int* prefilter; scalar_t__* strength; int taskset; TYPE_7__* frame; int * diff_max; int * weight_fact_table; int * exptable; int * range; int * patch_size; int * origin_tune; int * nframes; int functions; TYPE_2__ output; } ;
typedef TYPE_5__ hb_filter_private_t ;
struct TYPE_10__ {int color_range; int color_matrix; int color_transfer; int color_prim; } ;
struct TYPE_15__ {int s; TYPE_3__* plane; TYPE_1__ f; } ;
typedef TYPE_6__ hb_buffer_t ;
struct TYPE_16__ {int s; int * plane; int height; int width; } ;
struct TYPE_12__ {int height; int stride; int width; int data; } ;
typedef int NLMeansFunctions ;
typedef TYPE_7__ Frame ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int) ;
 TYPE_6__* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *,int ,int ,int ,int ) ;
 int FUNC_3 (int *,TYPE_7__*,int,int,int ,int ,int ,int ,int ,scalar_t__,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static void FUNC_8(void *VAR_1)
{
    nlmeans_thread_arg_t *VAR_2 = VAR_1;
    hb_filter_private_t *VAR_3 = VAR_2->pv;
    int VAR_4 = VAR_2->segment;

    FUNC_0(3, "NLMeans thread started for segment %d", VAR_4);

    while (1)
    {

        FUNC_7(&VAR_3->taskset, VAR_4);

        if (FUNC_6(&VAR_3->taskset, VAR_4))
        {
            break;
        }

        Frame *VAR_5 = &VAR_3->frame[VAR_4];
        hb_buffer_t *VAR_6;
        VAR_6 = FUNC_1(VAR_3->output.pix_fmt,
                                   VAR_5->width, VAR_5->height);
        VAR_6->f.color_prim = VAR_3->output.color_prim;
        VAR_6->f.color_transfer = VAR_3->output.color_transfer;
        VAR_6->f.color_matrix = VAR_3->output.color_matrix;
        VAR_6->f.color_range = VAR_3->output.color_range ;


        NLMeansFunctions *VAR_7 = &VAR_3->functions;

        for (int VAR_8 = 0; VAR_8 < 3; VAR_8++)
        {
            if (VAR_3->prefilter[VAR_8] & VAR_0)
            {
                FUNC_4(&VAR_5->plane[VAR_8], VAR_3->prefilter[VAR_8]);
                FUNC_2(&VAR_5->plane[VAR_8], VAR_6->plane[VAR_8].data,
                                 VAR_6->plane[VAR_8].width, VAR_6->plane[VAR_8].stride,
                                 VAR_6->plane[VAR_8].height);
                continue;
            }
            if (VAR_3->strength[VAR_8] == 0)
            {
                FUNC_2(&VAR_5->plane[VAR_8], VAR_6->plane[VAR_8].data,
                                 VAR_6->plane[VAR_8].width, VAR_6->plane[VAR_8].stride,
                                 VAR_6->plane[VAR_8].height);
                continue;
            }


            FUNC_3(VAR_7,
                          VAR_5,
                          VAR_3->prefilter[VAR_8],
                          VAR_8,
                          VAR_3->nframes[VAR_8],
                          VAR_6->plane[VAR_8].data,
                          VAR_6->plane[VAR_8].width,
                          VAR_6->plane[VAR_8].stride,
                          VAR_6->plane[VAR_8].height,
                          VAR_3->strength[VAR_8],
                          VAR_3->origin_tune[VAR_8],
                          VAR_3->patch_size[VAR_8],
                          VAR_3->range[VAR_8],
                          VAR_3->exptable[VAR_8],
                          VAR_3->weight_fact_table[VAR_8],
                          VAR_3->diff_max[VAR_8]);
        }
        VAR_6->s = VAR_3->frame[VAR_4].s;
        VAR_2->out = VAR_6;


        FUNC_5(&VAR_3->taskset, VAR_4);
    }
    FUNC_5(&VAR_3->taskset, VAR_4);
}
