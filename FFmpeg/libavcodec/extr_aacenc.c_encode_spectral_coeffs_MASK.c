
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int lambda; int pb; TYPE_1__* coder; } ;
struct TYPE_9__ {int num_windows; int* group_len; int max_sfb; scalar_t__* swb_sizes; int * window_clipping; } ;
struct TYPE_10__ {TYPE_2__ ics; int * band_type; int * sf_idx; int * coeffs; scalar_t__* zeroes; } ;
struct TYPE_8__ {int (* quantize_and_encode_band ) (TYPE_4__*,int *,int *,int *,scalar_t__,int ,int ,int ,int ) ;} ;
typedef TYPE_3__ SingleChannelElement ;
typedef TYPE_4__ AACEncContext ;


 int FUNC_0 (TYPE_4__*,int *,int *,int *,scalar_t__,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(AACEncContext *VAR_0, SingleChannelElement *VAR_1)
{
    int VAR_2, VAR_3, VAR_4, VAR_5;

    for (VAR_4 = 0; VAR_4 < VAR_1->ics.num_windows; VAR_4 += VAR_1->ics.group_len[VAR_4]) {
        VAR_2 = 0;
        for (VAR_3 = 0; VAR_3 < VAR_1->ics.max_sfb; VAR_3++) {
            if (VAR_1->zeroes[VAR_4*16 + VAR_3]) {
                VAR_2 += VAR_1->ics.swb_sizes[VAR_3];
                continue;
            }
            for (VAR_5 = VAR_4; VAR_5 < VAR_4 + VAR_1->ics.group_len[VAR_4]; VAR_5++) {
                VAR_0->coder->quantize_and_encode_band(VAR_0, &VAR_0->pb,
                                                   &VAR_1->coeffs[VAR_2 + VAR_5*128],
                                                   ((void*)0), VAR_1->ics.swb_sizes[VAR_3],
                                                   VAR_1->sf_idx[VAR_4*16 + VAR_3],
                                                   VAR_1->band_type[VAR_4*16 + VAR_3],
                                                   VAR_0->lambda,
                                                   VAR_1->ics.window_clipping[VAR_4]);
            }
            VAR_2 += VAR_1->ics.swb_sizes[VAR_3];
        }
    }
}
