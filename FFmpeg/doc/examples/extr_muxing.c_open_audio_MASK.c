
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int sample_rate; int frame_size; int channels; int sample_fmt; int channel_layout; TYPE_1__* codec; } ;
struct TYPE_10__ {int tincr; int tincr2; int swr_ctx; TYPE_2__* st; void* tmp_frame; void* frame; scalar_t__ t; TYPE_4__* enc; } ;
struct TYPE_9__ {int codecpar; } ;
struct TYPE_8__ {int capabilities; } ;
typedef TYPE_3__ OutputStream ;
typedef int AVFormatContext ;
typedef int AVDictionary ;
typedef TYPE_4__ AVCodecContext ;
typedef int AVCodec ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (int **,int *,int ) ;
 int FUNC_2 (int **) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int,int ) ;
 int FUNC_5 (int ,char*,int ,int ) ;
 int FUNC_6 (TYPE_4__*,int *,int **) ;
 int FUNC_7 (int ,TYPE_4__*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,char*,...) ;
 int VAR_3 ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(AVFormatContext *VAR_4, AVCodec *VAR_5, OutputStream *VAR_6, AVDictionary *VAR_7)
{
    AVCodecContext *VAR_8;
    int VAR_9;
    int VAR_10;
    AVDictionary *VAR_11 = ((void*)0);

    VAR_8 = VAR_6->enc;


    FUNC_1(&VAR_11, VAR_7, 0);
    VAR_10 = FUNC_6(VAR_8, VAR_5, &VAR_11);
    FUNC_2(&VAR_11);
    if (VAR_10 < 0) {
        FUNC_9(VAR_3, "Could not open audio codec: %s\n", FUNC_3(VAR_10));
        FUNC_8(1);
    }


    VAR_6->t = 0;
    VAR_6->tincr = 2 * VAR_2 * 110.0 / VAR_8->sample_rate;

    VAR_6->tincr2 = 2 * VAR_2 * 110.0 / VAR_8->sample_rate / VAR_8->sample_rate;

    if (VAR_8->codec->capabilities & VAR_0)
        VAR_9 = 10000;
    else
        VAR_9 = VAR_8->frame_size;

    VAR_6->frame = FUNC_0(VAR_8->sample_fmt, VAR_8->channel_layout,
                                       VAR_8->sample_rate, VAR_9);
    VAR_6->tmp_frame = FUNC_0(VAR_1, VAR_8->channel_layout,
                                       VAR_8->sample_rate, VAR_9);


    VAR_10 = FUNC_7(VAR_6->st->codecpar, VAR_8);
    if (VAR_10 < 0) {
        FUNC_9(VAR_3, "Could not copy the stream parameters\n");
        FUNC_8(1);
    }


        VAR_6->swr_ctx = FUNC_10();
        if (!VAR_6->swr_ctx) {
            FUNC_9(VAR_3, "Could not allocate resampler context\n");
            FUNC_8(1);
        }


        FUNC_4 (VAR_6->swr_ctx, "in_channel_count", VAR_8->channels, 0);
        FUNC_4 (VAR_6->swr_ctx, "in_sample_rate", VAR_8->sample_rate, 0);
        FUNC_5(VAR_6->swr_ctx, "in_sample_fmt", VAR_1, 0);
        FUNC_4 (VAR_6->swr_ctx, "out_channel_count", VAR_8->channels, 0);
        FUNC_4 (VAR_6->swr_ctx, "out_sample_rate", VAR_8->sample_rate, 0);
        FUNC_5(VAR_6->swr_ctx, "out_sample_fmt", VAR_8->sample_fmt, 0);


        if ((VAR_10 = FUNC_11(VAR_6->swr_ctx)) < 0) {
            FUNC_9(VAR_3, "Failed to initialize the resampling context\n");
            FUNC_8(1);
        }
}
