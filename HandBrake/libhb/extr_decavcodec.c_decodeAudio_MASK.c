
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_9__ ;
typedef struct TYPE_37__ TYPE_8__ ;
typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_21__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_11__ ;
typedef struct TYPE_27__ TYPE_10__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_34__ {scalar_t__ pts; int discard; int scr_sequence; scalar_t__ size; int * data; } ;
typedef TYPE_5__ packet_info_t ;
typedef scalar_t__ int64_t ;
struct TYPE_35__ {scalar_t__ next_pts; int duration; scalar_t__ drop_samples; int nframes; TYPE_21__* frame; int list; TYPE_4__* audio; int resample; int decode_errors; TYPE_11__* context; } ;
typedef TYPE_6__ hb_work_private_t ;
struct TYPE_29__ {scalar_t__ start; double duration; scalar_t__ stop; int scr_sequence; } ;
struct TYPE_36__ {int size; TYPE_1__ s; scalar_t__ data; } ;
typedef TYPE_7__ hb_buffer_t ;
struct TYPE_38__ {scalar_t__ data; } ;
struct TYPE_37__ {scalar_t__ pts; int flags; scalar_t__ size; int * data; scalar_t__ dts; } ;
struct TYPE_31__ {int codec; scalar_t__ mixdown; long samplerate; } ;
struct TYPE_32__ {TYPE_2__ out; } ;
struct TYPE_33__ {TYPE_3__ config; } ;
struct TYPE_30__ {int sample_rate; int nb_samples; scalar_t__ pts; scalar_t__ channel_layout; scalar_t__ extended_data; int format; int channels; } ;
struct TYPE_28__ {int sample_rate; } ;
struct TYPE_27__ {double surround_mix_level_ltrt; double center_mix_level_ltrt; double surround_mix_level; double center_mix_level; int lfe_mix_level; } ;
typedef TYPE_8__ AVPacket ;
typedef TYPE_9__ AVFrameSideData ;
typedef TYPE_10__ AVDownmixInfo ;
typedef TYPE_11__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_9__* FUNC_1 (TYPE_21__*,int ) ;
 int FUNC_2 (TYPE_21__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_8__*) ;
 int FUNC_5 (TYPE_8__*) ;
 int FUNC_6 (TYPE_11__*,TYPE_21__*) ;
 int FUNC_7 (TYPE_11__*,TYPE_8__*) ;
 TYPE_7__* FUNC_8 (int ,int const**,int) ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (int ,double,double,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (TYPE_7__**) ;
 TYPE_7__* FUNC_15 (scalar_t__) ;
 int FUNC_16 (int *,TYPE_7__*) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (scalar_t__) ;
 int FUNC_19 (scalar_t__,int *,scalar_t__) ;
 int FUNC_20 (scalar_t__,scalar_t__,int) ;

__attribute__((used)) static void FUNC_21(hb_work_private_t *VAR_8, packet_info_t * VAR_9)
{
    AVCodecContext * VAR_10 = VAR_8->context;
    AVPacket VAR_11;
    int VAR_12;



    if (VAR_8->next_pts == (int64_t)VAR_2 &&
        VAR_9 != ((void*)0) &&
        VAR_9->pts != VAR_2)
    {
        VAR_8->next_pts = VAR_9->pts;
    }
    FUNC_4(&VAR_11);
    if (VAR_9 != ((void*)0))
    {
        VAR_11.data = VAR_9->data;
        VAR_11.size = VAR_9->size;
        VAR_11.pts = VAR_9->pts;
        VAR_11.dts = VAR_2;
        VAR_11.flags |= VAR_9->discard * VAR_3;
    }
    else
    {
        VAR_11.data = ((void*)0);
        VAR_11.size = 0;
    }

    VAR_12 = FUNC_7(VAR_10, &VAR_11);
    if (VAR_12 < 0 && VAR_12 != VAR_0)
    {
        FUNC_5(&VAR_11);
        return;
    }

    do
    {
        VAR_12 = FUNC_6(VAR_10, VAR_8->frame);
        if (VAR_12 < 0 && VAR_12 != FUNC_0(VAR_4) && VAR_12 != VAR_0)
        {
            ++VAR_8->decode_errors;
        }
        if (VAR_12 < 0)
        {
            break;
        }

        hb_buffer_t * VAR_13;
        int VAR_14;


        if (VAR_8->frame->sample_rate != 0)
        {
            VAR_14 = VAR_8->frame->sample_rate;
        }
        else
        {
            VAR_14 = VAR_10->sample_rate;
        }
        VAR_8->duration = (90000. * VAR_8->frame->nb_samples / VAR_14);

        int64_t VAR_15 = VAR_8->frame->pts;
        double VAR_16 = VAR_8->duration;

        if (VAR_8->audio->config.out.codec & VAR_5)
        {



            VAR_13 = FUNC_15(VAR_11.size);
            FUNC_19(VAR_13->data, VAR_11.data, VAR_11.size);
        }
        else
        {
            AVFrameSideData *VAR_17;
            uint64_t VAR_18;
            if ((VAR_17 =
                 FUNC_1(VAR_8->frame,
                                VAR_1)) != ((void*)0))
            {
                double VAR_19, VAR_20;
                AVDownmixInfo * VAR_21;

                VAR_21 = (AVDownmixInfo*)VAR_17->data;
                if (VAR_8->audio->config.out.mixdown == VAR_6 ||
                    VAR_8->audio->config.out.mixdown == VAR_7)
                {
                    VAR_19 = VAR_21->surround_mix_level_ltrt;
                    VAR_20 = VAR_21->center_mix_level_ltrt;
                }
                else
                {
                    VAR_19 = VAR_21->surround_mix_level;
                    VAR_20 = VAR_21->center_mix_level;
                }
                FUNC_10(VAR_8->resample,
                                                 VAR_19,
                                                 VAR_20,
                                                 VAR_21->lfe_mix_level);
            }
            VAR_18 = VAR_8->frame->channel_layout;
            if (VAR_18 == 0)
            {
                VAR_18 = FUNC_3(
                                                        VAR_8->frame->channels);
            }
            FUNC_9(VAR_8->resample, VAR_18);
            FUNC_11(VAR_8->resample,
                                             VAR_8->frame->format);
            FUNC_12(VAR_8->resample,
                                             VAR_8->frame->sample_rate);
            if (FUNC_13(VAR_8->resample))
            {
                FUNC_17("decavcodec: hb_audio_resample_update() failed");
                FUNC_2(VAR_8->frame);
                FUNC_5(&VAR_11);
                return;
            }
            VAR_13 = FUNC_8(VAR_8->resample,
                                    (const uint8_t **)VAR_8->frame->extended_data,
                                    VAR_8->frame->nb_samples);
            if (VAR_13 != ((void*)0) && VAR_8->drop_samples > 0)
            {

                int VAR_22 = FUNC_18(
                                                VAR_8->audio->config.out.mixdown);
                int VAR_23 = VAR_22 * sizeof(float);
                int VAR_24 = VAR_13->size / VAR_23;
                if (VAR_24 <= VAR_8->drop_samples)
                {
                    FUNC_14(&VAR_13);
                    VAR_8->drop_samples -= VAR_24;
                }
                else
                {
                    int VAR_25 = VAR_8->drop_samples * VAR_23;
                    double VAR_26 = VAR_8->drop_samples * 90000L /
                                           VAR_8->audio->config.out.samplerate;
                    FUNC_20(VAR_13->data, VAR_13->data + VAR_25, VAR_13->size - VAR_25);
                    VAR_13->size -= VAR_25;
                    VAR_15 += VAR_26;
                    VAR_16 -= VAR_26;
                    VAR_8->drop_samples = 0;
                }
            }
        }

        if (VAR_13 != ((void*)0))
        {
            VAR_13->s.scr_sequence = VAR_9->scr_sequence;
            VAR_13->s.start = VAR_15;
            VAR_13->s.duration = VAR_16;
            if (VAR_13->s.start == VAR_2)
            {
                VAR_13->s.start = VAR_8->next_pts;
            }
            else
            {
                VAR_8->next_pts = VAR_13->s.start;
            }
            if (VAR_8->next_pts != (int64_t)VAR_2)
            {
                VAR_8->next_pts += VAR_8->duration;
                VAR_13->s.stop = VAR_8->next_pts;
            }
            FUNC_16(&VAR_8->list, VAR_13);
        }
        FUNC_2(VAR_8->frame);
        ++VAR_8->nframes;
    } while (VAR_12 >= 0);
    FUNC_5(&VAR_11);
}
