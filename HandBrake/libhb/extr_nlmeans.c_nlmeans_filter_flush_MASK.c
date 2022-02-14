
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int color_range; int color_matrix; int color_transfer; int color_prim; int pix_fmt; } ;
struct TYPE_16__ {int next_frame; int* prefilter; int* nframes; int * diff_max; int * weight_fact_table; int * exptable; int * range; int * patch_size; int * origin_tune; int * strength; int functions; TYPE_2__ output; TYPE_6__* frame; } ;
typedef TYPE_4__ hb_filter_private_t ;
struct TYPE_13__ {int color_range; int color_matrix; int color_transfer; int color_prim; } ;
struct TYPE_17__ {int s; TYPE_3__* plane; TYPE_1__ f; } ;
typedef TYPE_5__ hb_buffer_t ;
typedef int hb_buffer_list_t ;
struct TYPE_18__ {int s; int * plane; int height; int width; } ;
struct TYPE_15__ {int height; int stride; int width; int data; } ;
typedef int NLMeansFunctions ;
typedef TYPE_6__ Frame ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_5__*) ;
 TYPE_5__* FUNC_1 (int *) ;
 TYPE_5__* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int FUNC_4 (int *,TYPE_6__*,int,int,int,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static hb_buffer_t * FUNC_6(hb_filter_private_t *VAR_1)
{
    hb_buffer_list_t VAR_2;

    FUNC_1(&VAR_2);
    for (int VAR_3 = 0; VAR_3 < VAR_1->next_frame; VAR_3++)
    {
        Frame *VAR_4 = &VAR_1->frame[VAR_3];
        hb_buffer_t *VAR_5;
        VAR_5 = FUNC_2(VAR_1->output.pix_fmt,
                                   VAR_4->width, VAR_4->height);
        VAR_5->f.color_prim = VAR_1->output.color_prim;
        VAR_5->f.color_transfer = VAR_1->output.color_transfer;
        VAR_5->f.color_matrix = VAR_1->output.color_matrix;
        VAR_5->f.color_range = VAR_1->output.color_range ;

        NLMeansFunctions *VAR_6 = &VAR_1->functions;

        for (int VAR_7 = 0; VAR_7 < 3; VAR_7++)
        {
            if (VAR_1->prefilter[VAR_7] & VAR_0)
            {
                FUNC_5(&VAR_4->plane[VAR_7], VAR_1->prefilter[VAR_7]);
                FUNC_3(&VAR_4->plane[VAR_7], VAR_5->plane[VAR_7].data,
                                 VAR_5->plane[VAR_7].width, VAR_5->plane[VAR_7].stride,
                                 VAR_5->plane[VAR_7].height);
                continue;
            }
            if (VAR_1->strength[VAR_7] == 0)
            {
                FUNC_3(&VAR_4->plane[VAR_7], VAR_5->plane[VAR_7].data,
                                 VAR_5->plane[VAR_7].width, VAR_5->plane[VAR_7].stride,
                                 VAR_5->plane[VAR_7].height);
                continue;
            }

            int VAR_8 = VAR_1->next_frame - VAR_3;
            if (VAR_1->nframes[VAR_7] < VAR_8)
            {
                VAR_8 = VAR_1->nframes[VAR_7];
            }

            FUNC_4(VAR_6,
                          VAR_4,
                          VAR_1->prefilter[VAR_7],
                          VAR_7,
                          VAR_8,
                          VAR_5->plane[VAR_7].data,
                          VAR_5->plane[VAR_7].width,
                          VAR_5->plane[VAR_7].stride,
                          VAR_5->plane[VAR_7].height,
                          VAR_1->strength[VAR_7],
                          VAR_1->origin_tune[VAR_7],
                          VAR_1->patch_size[VAR_7],
                          VAR_1->range[VAR_7],
                          VAR_1->exptable[VAR_7],
                          VAR_1->weight_fact_table[VAR_7],
                          VAR_1->diff_max[VAR_7]);
        }
        VAR_5->s = VAR_4->s;
        FUNC_0(&VAR_2, VAR_5);
    }
    return FUNC_1(&VAR_2);
}
