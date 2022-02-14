
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_19__ {int total_samples; int blocksize; int samples; } ;
struct TYPE_20__ {int apetag_start; TYPE_2__ header; int rate; int bpp; int chmask; int chan; scalar_t__ block_parsed; } ;
typedef TYPE_3__ WVContext ;
struct TYPE_23__ {TYPE_5__* pb; int metadata; TYPE_3__* priv_data; } ;
struct TYPE_22__ {int seekable; } ;
struct TYPE_21__ {int duration; scalar_t__ start_time; TYPE_1__* codecpar; } ;
struct TYPE_18__ {int bits_per_coded_sample; int sample_rate; int channel_layout; int channels; int codec_id; int codec_type; } ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVIOContext ;
typedef TYPE_6__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int *,int ) ;
 TYPE_4__* FUNC_2 (TYPE_6__*,int *) ;
 int FUNC_3 (TYPE_5__*,int ,int ) ;
 int FUNC_4 (TYPE_5__*,int ) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_4__*,int,int,int ) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (TYPE_6__*,TYPE_5__*) ;

__attribute__((used)) static int FUNC_10(AVFormatContext *VAR_6)
{
    AVIOContext *VAR_7 = VAR_6->pb;
    WVContext *VAR_8 = VAR_6->priv_data;
    AVStream *VAR_9;
    int VAR_10;

    VAR_8->block_parsed = 0;
    for (;;) {
        if ((VAR_10 = FUNC_9(VAR_6, VAR_7)) < 0)
            return VAR_10;
        if (!VAR_8->header.samples)
            FUNC_4(VAR_7, VAR_8->header.blocksize);
        else
            break;
    }


    VAR_9 = FUNC_2(VAR_6, ((void*)0));
    if (!VAR_9)
        return FUNC_0(VAR_4);
    VAR_9->codecpar->codec_type = VAR_1;
    VAR_9->codecpar->codec_id = VAR_2;
    VAR_9->codecpar->channels = VAR_8->chan;
    VAR_9->codecpar->channel_layout = VAR_8->chmask;
    VAR_9->codecpar->sample_rate = VAR_8->rate;
    VAR_9->codecpar->bits_per_coded_sample = VAR_8->bpp;
    FUNC_6(VAR_9, 64, 1, VAR_8->rate);
    VAR_9->start_time = 0;
    if (VAR_8->header.total_samples != 0xFFFFFFFFu)
        VAR_9->duration = VAR_8->header.total_samples;

    if (VAR_6->pb->seekable & VAR_0) {
        int64_t VAR_11 = FUNC_5(VAR_6->pb);
        VAR_8->apetag_start = FUNC_7(VAR_6);
        if (!FUNC_1(VAR_6->metadata, "", ((void*)0), VAR_3))
            FUNC_8(VAR_6);
        FUNC_3(VAR_6->pb, VAR_11, VAR_5);
    }

    return 0;
}
