
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int const uint8_t ;
struct TYPE_11__ {int duration; } ;
struct TYPE_13__ {int size; TYPE_2__ s; int const* data; } ;
typedef TYPE_4__ hb_buffer_t ;
struct TYPE_12__ {int sample_rate; int channels; int sample_size; int sample_fmt; } ;
struct TYPE_10__ {int sample_rate; } ;
struct TYPE_14__ {TYPE_3__ out; int dual_mono_right_only; scalar_t__ dual_mono_downmix; int * swresample; TYPE_1__ in; scalar_t__ resample_needed; } ;
typedef TYPE_5__ hb_audio_resample_t ;


 int FUNC_0 (int *,int,int,int ,int ) ;
 int FUNC_1 (TYPE_4__**) ;
 TYPE_4__* FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int const*,int const*,int) ;
 int FUNC_6 (int *,int const**,int,int const**,int) ;

hb_buffer_t* FUNC_7(hb_audio_resample_t *VAR_0,
                               const uint8_t **VAR_1, int VAR_2)
{
    if (VAR_0 == ((void*)0))
    {
        FUNC_3("hb_audio_resample: resample is NULL");
        return ((void*)0);
    }
    if (VAR_0->resample_needed && VAR_0->swresample == ((void*)0))
    {
        FUNC_3("hb_audio_resample: resample needed but libswresample context "
                 "is NULL");
        return ((void*)0);
    }

    hb_buffer_t *VAR_3;
    int VAR_4, VAR_5;

    if (VAR_0->resample_needed)
    {
        VAR_5 = VAR_2 * VAR_0->out.sample_rate /
                                  VAR_0->in.sample_rate + 1;
        VAR_4 = FUNC_0(((void*)0), VAR_0->out.channels,
                                              VAR_5,
                                              VAR_0->out.sample_fmt, 0);
        VAR_3 = FUNC_2(VAR_4);
        VAR_5 = FUNC_6(VAR_0->swresample, &VAR_3->data, VAR_5,
                                                        VAR_1, VAR_2);

        if (VAR_5 <= 0)
        {
            if (VAR_5 < 0)
            {
                FUNC_4("hb_audio_resample: swr_convert() failed");
            }

            FUNC_1(&VAR_3);
            return ((void*)0);
        }
        VAR_3->size = (VAR_5 *
                     VAR_0->out.sample_size * VAR_0->out.channels);
    }
    else
    {
        VAR_5 = VAR_2;
        VAR_4 = (VAR_5 *
                    VAR_0->out.sample_size * VAR_0->out.channels);
        VAR_3 = FUNC_2(VAR_4);
        FUNC_5(VAR_3->data, VAR_1[0], VAR_4);
    }







    if (VAR_0->dual_mono_downmix)
    {
        int VAR_6, VAR_7 = !!VAR_0->dual_mono_right_only;
        int VAR_8 = VAR_0->out.sample_size;
        uint8_t *VAR_9 = VAR_3->data;
        for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
        {
            FUNC_5(VAR_9 + (VAR_6 * VAR_8),
                   VAR_9 + (VAR_7 * VAR_8), VAR_8);
            VAR_7 += 2;
        }
        VAR_3->size = VAR_5 * VAR_8;
    }
    VAR_3->s.duration = 90000. * VAR_5 / VAR_0->out.sample_rate;

    return VAR_3;
}
