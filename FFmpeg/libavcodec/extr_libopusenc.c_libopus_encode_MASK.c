
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_11__ ;


typedef int uint8_t ;
typedef int opus_int16 ;
struct TYPE_24__ {scalar_t__ sample_fmt; int const channels; TYPE_2__* priv_data; } ;
struct TYPE_23__ {int const nb_samples; int ** data; } ;
struct TYPE_22__ {int duration; int pts; int size; int data; } ;
struct TYPE_20__ {int const packet_size; } ;
struct TYPE_19__ {int frame_count; int frame_alloc; int remaining_samples; } ;
struct TYPE_21__ {int stream_count; TYPE_1__ opts; TYPE_11__ afq; int enc; int * samples; int * encoder_channel_map; } ;
typedef TYPE_2__ LibopusEncContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_5__*,int ,char*,int ) ;
 int * FUNC_5 (TYPE_3__*,int ,int) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,int) ;
 int FUNC_8 (TYPE_11__*,TYPE_4__ const*) ;
 int FUNC_9 (TYPE_11__*,int const,int *,int*) ;
 int FUNC_10 (TYPE_5__*,TYPE_3__*,int,int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int *,int *,int *,int const,int const,int const) ;
 int FUNC_13 (int *,int *,int const) ;
 int FUNC_14 (int *,int ,int const) ;
 int FUNC_15 (int ,int *,int const,int ,int ) ;
 int FUNC_16 (int ,float*,int const,int ,int ) ;
 int FUNC_17 (int) ;

__attribute__((used)) static int FUNC_18(AVCodecContext *VAR_5, AVPacket *VAR_6,
                          const AVFrame *VAR_7, int *VAR_8)
{
    LibopusEncContext *VAR_9 = VAR_5->priv_data;
    const int VAR_10 = FUNC_3(VAR_5->sample_fmt);
    const int VAR_11 = VAR_5->channels * VAR_10;
    uint8_t *VAR_12;
    int VAR_13;
    int VAR_14;

    if (VAR_7) {
        VAR_13 = FUNC_8(&VAR_9->afq, VAR_7);
        if (VAR_13 < 0)
            return VAR_13;
        if (VAR_9->encoder_channel_map != ((void*)0)) {
            VAR_12 = VAR_9->samples;
            FUNC_12(
                VAR_12, VAR_7->data[0], VAR_9->encoder_channel_map,
                VAR_5->channels, VAR_7->nb_samples, VAR_10);
        } else if (VAR_7->nb_samples < VAR_9->opts.packet_size) {
            VAR_12 = VAR_9->samples;
            FUNC_13(VAR_12, VAR_7->data[0], VAR_7->nb_samples * VAR_11);
        } else
            VAR_12 = VAR_7->data[0];
    } else {
        if (!VAR_9->afq.remaining_samples || (!VAR_9->afq.frame_alloc && !VAR_9->afq.frame_count))
            return 0;
        VAR_12 = VAR_9->samples;
        FUNC_14(VAR_12, 0, VAR_9->opts.packet_size * VAR_11);
    }




    if ((VAR_13 = FUNC_10(VAR_5, VAR_6, (1275 * 6 + 7) * VAR_9->stream_count, 0)) < 0)
        return VAR_13;

    if (VAR_5->sample_fmt == VAR_2)
        VAR_13 = FUNC_16(VAR_9->enc, (float *)VAR_12,
                                            VAR_9->opts.packet_size,
                                            VAR_6->data, VAR_6->size);
    else
        VAR_13 = FUNC_15(VAR_9->enc, (opus_int16 *)VAR_12,
                                      VAR_9->opts.packet_size,
                                      VAR_6->data, VAR_6->size);

    if (VAR_13 < 0) {
        FUNC_4(VAR_5, VAR_0,
               "Error encoding frame: %s\n", FUNC_17(VAR_13));
        return FUNC_11(VAR_13);
    }

    FUNC_7(VAR_6, VAR_13);

    FUNC_9(&VAR_9->afq, VAR_9->opts.packet_size,
                       &VAR_6->pts, &VAR_6->duration);

    VAR_14 = VAR_9->opts.packet_size - VAR_6->duration;

    if ((VAR_14 < VAR_9->opts.packet_size) != (VAR_6->duration > 0)) {
        FUNC_6(VAR_6);
        FUNC_2(VAR_6);
        return FUNC_0(VAR_3);
    }
    if (VAR_14 > 0) {
        uint8_t* VAR_15 = FUNC_5(VAR_6,
                                                     VAR_1,
                                                     10);
        if(!VAR_15) {
            FUNC_6(VAR_6);
            FUNC_2(VAR_6);
            return FUNC_0(VAR_4);
        }
        FUNC_1(VAR_15 + 4, VAR_14);
    }

    *VAR_8 = 1;

    return 0;
}
