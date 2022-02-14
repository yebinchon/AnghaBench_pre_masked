
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_15__ ;


typedef enum AVDiscard { ____Placeholder_AVDiscard } AVDiscard ;
struct TYPE_30__ {int codec_id; int skip_frame; scalar_t__ codec_type; TYPE_15__* codec; } ;
struct TYPE_29__ {char* codec_whitelist; } ;
struct TYPE_28__ {scalar_t__ size; int data; } ;
struct TYPE_27__ {int nb_decoded_frames; int codec_info_nb_frames; TYPE_3__* info; TYPE_2__* codecpar; TYPE_1__* internal; } ;
struct TYPE_26__ {int found_decoder; } ;
struct TYPE_25__ {int codec_id; } ;
struct TYPE_24__ {TYPE_7__* avctx; } ;
struct TYPE_23__ {int capabilities; } ;
typedef int AVSubtitle ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVPacket ;
typedef int AVFrame ;
typedef TYPE_6__ AVFormatContext ;
typedef int AVDictionary ;
typedef TYPE_7__ AVCodecContext ;
typedef int AVCodec ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int **,char*,char*,int ) ;
 int * FUNC_3 () ;
 int FUNC_4 (int **) ;
 int FUNC_5 (TYPE_7__*,int *,int*,TYPE_5__*) ;
 int FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (TYPE_7__*,int const*,int **) ;
 int FUNC_8 (TYPE_7__*,int *) ;
 int FUNC_9 (TYPE_7__*,TYPE_5__*) ;
 scalar_t__ FUNC_10 (TYPE_15__*) ;
 int * FUNC_11 (TYPE_6__*,TYPE_4__*,int) ;
 int FUNC_12 (TYPE_4__*,int *) ;
 int FUNC_13 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_14(AVFormatContext *VAR_8, AVStream *VAR_9,
                            const AVPacket *VAR_10, AVDictionary **VAR_11)
{
    AVCodecContext *VAR_12 = VAR_9->internal->avctx;
    const AVCodec *VAR_13;
    int VAR_14 = 1, VAR_15 = 0;
    AVFrame *VAR_16 = FUNC_3();
    AVSubtitle VAR_17;
    AVPacket VAR_18 = *VAR_10;
    int VAR_19 = 0;
    enum AVDiscard VAR_20;

    if (!VAR_16)
        return FUNC_0(VAR_7);

    if (!FUNC_6(VAR_12) &&
        VAR_9->info->found_decoder <= 0 &&
        (VAR_9->codecpar->codec_id != -VAR_9->info->found_decoder || !VAR_9->codecpar->codec_id)) {
        AVDictionary *VAR_21 = ((void*)0);

        VAR_13 = FUNC_11(VAR_8, VAR_9, VAR_9->codecpar->codec_id);

        if (!VAR_13) {
            VAR_9->info->found_decoder = -VAR_9->codecpar->codec_id;
            VAR_15 = -1;
            goto fail;
        }



        FUNC_2(VAR_11 ? VAR_11 : &VAR_21, "threads", "1", 0);
        if (VAR_8->codec_whitelist)
            FUNC_2(VAR_11 ? VAR_11 : &VAR_21, "codec_whitelist", VAR_8->codec_whitelist, 0);
        VAR_15 = FUNC_7(VAR_12, VAR_13, VAR_11 ? VAR_11 : &VAR_21);
        if (!VAR_11)
            FUNC_1(&VAR_21);
        if (VAR_15 < 0) {
            VAR_9->info->found_decoder = -VAR_12->codec_id;
            goto fail;
        }
        VAR_9->info->found_decoder = 1;
    } else if (!VAR_9->info->found_decoder)
        VAR_9->info->found_decoder = 1;

    if (VAR_9->info->found_decoder < 0) {
        VAR_15 = -1;
        goto fail;
    }

    if (FUNC_10(VAR_12->codec)) {
        VAR_19 = 1;
        VAR_20 = VAR_12->skip_frame;
        VAR_12->skip_frame = VAR_0;
    }

    while ((VAR_18.size > 0 || (!VAR_18.data && VAR_14)) &&
           VAR_15 >= 0 &&
           (!FUNC_12(VAR_9, ((void*)0)) || !FUNC_13(VAR_9) ||
            (!VAR_9->codec_info_nb_frames &&
             (VAR_12->codec->capabilities & VAR_5)))) {
        VAR_14 = 0;
        if (VAR_12->codec_type == VAR_4 ||
            VAR_12->codec_type == VAR_2) {
            VAR_15 = FUNC_9(VAR_12, &VAR_18);
            if (VAR_15 < 0 && VAR_15 != FUNC_0(VAR_6) && VAR_15 != VAR_1)
                break;
            if (VAR_15 >= 0)
                VAR_18.size = 0;
            VAR_15 = FUNC_8(VAR_12, VAR_16);
            if (VAR_15 >= 0)
                VAR_14 = 1;
            if (VAR_15 == FUNC_0(VAR_6) || VAR_15 == VAR_1)
                VAR_15 = 0;
        } else if (VAR_12->codec_type == VAR_3) {
            VAR_15 = FUNC_5(VAR_12, &VAR_17,
                                           &VAR_14, &VAR_18);
            if (VAR_15 >= 0)
                VAR_18.size = 0;
        }
        if (VAR_15 >= 0) {
            if (VAR_14)
                VAR_9->nb_decoded_frames++;
            VAR_15 = VAR_14;
        }
    }

    if (!VAR_18.data && !VAR_14)
        VAR_15 = -1;

fail:
    if (VAR_19) {
        VAR_12->skip_frame = VAR_20;
    }

    FUNC_4(&VAR_16);
    return VAR_15;
}
