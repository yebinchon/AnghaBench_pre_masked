
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ channels; int nb_samples; int planes; int stride; int * data; int sample_fmt; int is_planar; } ;
struct TYPE_8__ {size_t* channel_map; int* channel_copy; scalar_t__* channel_zero; scalar_t__ do_zero; scalar_t__ do_copy; scalar_t__ do_remap; } ;
typedef TYPE_1__ ChannelMapInfo ;
typedef TYPE_2__ AudioData ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 int FUNC_2 (int *,int ,int,int,int ) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int ,int ,int) ;

int FUNC_5(AudioData *VAR_2, AudioData *VAR_3, ChannelMapInfo *VAR_4)
{
    int VAR_5, VAR_6;


    if (VAR_2->sample_fmt != VAR_3->sample_fmt || VAR_2->channels < VAR_3->channels)
        return FUNC_0(VAR_1);

    if (VAR_4 && !VAR_3->is_planar) {
        FUNC_1(VAR_3, VAR_0, "cannot remap packed format during copy\n");
        return FUNC_0(VAR_1);
    }


    if (!VAR_3->nb_samples) {
        VAR_2->nb_samples = 0;
        return 0;
    }


    VAR_5 = FUNC_3(VAR_2, VAR_3->nb_samples);
    if (VAR_5 < 0)
        return VAR_5;


    if (VAR_4) {
        if (VAR_4->do_remap) {
            for (VAR_6 = 0; VAR_6 < VAR_3->planes; VAR_6++) {
                if (VAR_4->channel_map[VAR_6] >= 0)
                    FUNC_4(VAR_2->data[VAR_6], VAR_3->data[VAR_4->channel_map[VAR_6]],
                           VAR_3->nb_samples * VAR_3->stride);
            }
        }
        if (VAR_4->do_copy || VAR_4->do_zero) {
            for (VAR_6 = 0; VAR_6 < VAR_3->planes; VAR_6++) {
                if (VAR_4->channel_copy[VAR_6])
                    FUNC_4(VAR_2->data[VAR_6], VAR_2->data[VAR_4->channel_copy[VAR_6]],
                           VAR_3->nb_samples * VAR_3->stride);
                else if (VAR_4->channel_zero[VAR_6])
                    FUNC_2(&VAR_2->data[VAR_6], 0, VAR_3->nb_samples,
                                           1, VAR_2->sample_fmt);
            }
        }
    } else {
        for (VAR_6 = 0; VAR_6 < VAR_3->planes; VAR_6++)
            FUNC_4(VAR_2->data[VAR_6], VAR_3->data[VAR_6], VAR_3->nb_samples * VAR_3->stride);
    }

    VAR_2->nb_samples = VAR_3->nb_samples;

    return 0;
}
