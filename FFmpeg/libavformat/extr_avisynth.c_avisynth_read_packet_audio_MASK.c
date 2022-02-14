
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef void* int64_t ;
struct TYPE_20__ {scalar_t__ num_audio_samples; int fps_denominator; scalar_t__ num_frames; int nchannels; int audio_samples_per_second; int fps_numerator; } ;
struct TYPE_19__ {char* (* avs_clip_get_error ) (int ) ;int (* avs_get_audio ) (int ,int *,void*,int) ;} ;
struct TYPE_18__ {TYPE_1__* priv_data; } ;
struct TYPE_17__ {int size; int duration; int * data; int stream_index; void* dts; void* pts; } ;
struct TYPE_16__ {int den; int num; } ;
struct TYPE_15__ {scalar_t__ curr_sample; scalar_t__ curr_frame; int error; int clip; int curr_stream; TYPE_6__* vi; } ;
typedef TYPE_1__ AviSynthContext ;
typedef TYPE_2__ AVRational ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_4__*,int ,char*,char const*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int,TYPE_2__,TYPE_2__) ;
 int FUNC_5 (TYPE_6__*) ;
 scalar_t__ FUNC_6 (TYPE_6__*) ;
 TYPE_5__ VAR_4 ;
 int FUNC_7 (int ,int *,void*,int) ;
 char* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_5, AVPacket *VAR_6,
                                      int VAR_7)
{
    AviSynthContext *VAR_8 = VAR_5->priv_data;
    AVRational VAR_9, VAR_10;
    int VAR_11;
    int64_t VAR_12;
    const char *VAR_13;

    if (VAR_8->curr_sample >= VAR_8->vi->num_audio_samples)
        return VAR_0;

    VAR_9.num = VAR_8->vi->fps_numerator;
    VAR_9.den = VAR_8->vi->fps_denominator;
    VAR_10.num = VAR_8->vi->audio_samples_per_second;
    VAR_10.den = 1;

    if (FUNC_6(VAR_8->vi)) {
        if (VAR_8->curr_frame < VAR_8->vi->num_frames)
            VAR_11 = FUNC_4(VAR_8->curr_frame, VAR_10, VAR_9) -
                      VAR_8->curr_sample;
        else
            VAR_11 = FUNC_4(1, VAR_10, VAR_9);
    } else {
        VAR_11 = 1000;
    }


    if (VAR_11 <= 0) {
        VAR_6->size = 0;
        VAR_6->data = ((void*)0);
        return 0;
    }

    if (VAR_8->curr_sample + VAR_11 > VAR_8->vi->num_audio_samples)
        VAR_11 = VAR_8->vi->num_audio_samples - VAR_8->curr_sample;


    VAR_12 = VAR_8->curr_sample;
    VAR_8->curr_sample += VAR_11;
    if (VAR_7)
        return 0;

    VAR_6->size = FUNC_5(VAR_8->vi) *
                VAR_11 * VAR_8->vi->nchannels;
    if (!VAR_6->size)
        return VAR_1;

    if (FUNC_2(VAR_6, VAR_6->size) < 0)
        return FUNC_0(VAR_3);

    VAR_6->pts = VAR_12;
    VAR_6->dts = VAR_12;
    VAR_6->duration = VAR_11;
    VAR_6->stream_index = VAR_8->curr_stream;

    VAR_4.avs_get_audio(VAR_8->clip, VAR_6->data, VAR_12, VAR_11);
    VAR_13 = VAR_4.avs_clip_get_error(VAR_8->clip);
    if (VAR_13) {
        FUNC_1(VAR_5, VAR_2, "%s\n", VAR_13);
        VAR_8->error = 1;
        FUNC_3(VAR_6);
        return VAR_1;
    }
    return 0;
}
