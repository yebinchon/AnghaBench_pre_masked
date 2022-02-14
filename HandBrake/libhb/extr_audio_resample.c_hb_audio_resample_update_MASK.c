
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ sample_fmt; scalar_t__ sample_rate; scalar_t__ channel_layout; scalar_t__ lfe_mix_level; scalar_t__ center_mix_level; scalar_t__ surround_mix_level; } ;
struct TYPE_7__ {scalar_t__ sample_fmt; scalar_t__ sample_rate; scalar_t__ channel_layout; scalar_t__ lfe_mix_level; scalar_t__ center_mix_level; scalar_t__ surround_mix_level; int channels; } ;
struct TYPE_6__ {scalar_t__ sample_fmt; scalar_t__ sample_rate; scalar_t__ channel_layout; scalar_t__ matrix_encoding; scalar_t__ maxval; } ;
struct TYPE_9__ {int resample_needed; TYPE_3__ in; TYPE_2__ resample; int * swresample; TYPE_1__ out; } ;
typedef TYPE_4__ hb_audio_resample_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,char*,scalar_t__,int ) ;
 int FUNC_2 (int *,char*,scalar_t__,int ) ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (char*,...) ;
 int * FUNC_5 () ;
 int FUNC_6 (int **) ;
 int FUNC_7 (int *) ;

int FUNC_8(hb_audio_resample_t *VAR_0)
{
    if (VAR_0 == ((void*)0))
    {
        FUNC_4("hb_audio_resample_update: resample is NULL");
        return 1;
    }

    int VAR_1, VAR_2;

    VAR_0->resample_needed =
        (VAR_0->out.sample_fmt != VAR_0->in.sample_fmt ||
         VAR_0->out.sample_rate != VAR_0->in.sample_rate ||
         VAR_0->out.channel_layout != VAR_0->in.channel_layout);

    VAR_2 =
        (VAR_0->resample_needed &&
         (VAR_0->resample.sample_fmt != VAR_0->in.sample_fmt ||
          VAR_0->resample.sample_rate != VAR_0->in.sample_rate ||
          VAR_0->resample.channel_layout != VAR_0->in.channel_layout ||
          VAR_0->resample.lfe_mix_level != VAR_0->in.lfe_mix_level ||
          VAR_0->resample.center_mix_level != VAR_0->in.center_mix_level ||
          VAR_0->resample.surround_mix_level != VAR_0->in.surround_mix_level));

    if (VAR_2 || (VAR_0->resample_needed &&
                             VAR_0->swresample == ((void*)0)))
    {
        if (VAR_0->swresample == ((void*)0))
        {
            VAR_0->swresample = FUNC_5();
            if (VAR_0->swresample == ((void*)0))
            {
                FUNC_4("hb_audio_resample_update: swr_alloc() failed");
                return 1;
            }

            FUNC_2(VAR_0->swresample, "out_sample_fmt",
                           VAR_0->out.sample_fmt, 0);
            FUNC_2(VAR_0->swresample, "out_sample_rate",
                           VAR_0->out.sample_rate, 0);
            FUNC_2(VAR_0->swresample, "out_channel_layout",
                           VAR_0->out.channel_layout, 0);
            FUNC_2(VAR_0->swresample, "matrix_encoding",
                           VAR_0->out.matrix_encoding, 0);
            FUNC_1(VAR_0->swresample, "rematrix_maxval",
                              VAR_0->out.maxval, 0);
        }

        FUNC_2(VAR_0->swresample, "in_sample_fmt",
                       VAR_0->in.sample_fmt, 0);
        FUNC_2(VAR_0->swresample, "in_sample_rate",
                       VAR_0->in.sample_rate, 0);
        FUNC_2(VAR_0->swresample, "in_channel_layout",
                       VAR_0->in.channel_layout, 0);
        FUNC_1(VAR_0->swresample, "lfe_mix_level",
                          VAR_0->in.lfe_mix_level, 0);
        FUNC_1(VAR_0->swresample, "center_mix_level",
                          VAR_0->in.center_mix_level, 0);
        FUNC_1(VAR_0->swresample, "surround_mix_level",
                          VAR_0->in.surround_mix_level, 0);

        if ((VAR_1 = FUNC_7(VAR_0->swresample)))
        {
            char VAR_3[64];
            FUNC_3(VAR_1, VAR_3, 63);
            FUNC_4("hb_audio_resample_update: swr_init() failed (%s)",
                     VAR_3);

            FUNC_6(&VAR_0->swresample);
            return VAR_1;
        }

        VAR_0->resample.sample_fmt = VAR_0->in.sample_fmt;
        VAR_0->resample.sample_rate = VAR_0->in.sample_rate;
        VAR_0->resample.channel_layout = VAR_0->in.channel_layout;
        VAR_0->resample.channels =
            FUNC_0(VAR_0->in.channel_layout);
        VAR_0->resample.lfe_mix_level = VAR_0->in.lfe_mix_level;
        VAR_0->resample.center_mix_level = VAR_0->in.center_mix_level;
        VAR_0->resample.surround_mix_level = VAR_0->in.surround_mix_level;
    }

    return 0;
}
