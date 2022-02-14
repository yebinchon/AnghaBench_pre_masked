
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {int channels; scalar_t__ bps; scalar_t__ samplerate; scalar_t__ max_blocksize; } ;
struct TYPE_15__ {int channels; scalar_t__ bits_per_raw_sample; scalar_t__ sample_rate; int sample_fmt; int channel_layout; } ;
struct TYPE_14__ {int got_streaminfo; TYPE_8__ flac_stream_info; TYPE_4__* avctx; int dsp; scalar_t__ blocksize; int ch_mode; int gb; } ;
struct TYPE_13__ {int channels; scalar_t__ bps; scalar_t__ samplerate; scalar_t__ blocksize; int ch_mode; } ;
typedef int GetBitContext ;
typedef TYPE_1__ FLACFrameInfo ;
typedef TYPE_2__ FLACContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_4__*,int ,char*,...) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_4__*,TYPE_8__*) ;
 int FUNC_5 (TYPE_4__*,int *,TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int *,int ,int,scalar_t__) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *,int) ;

__attribute__((used)) static int FUNC_10(FLACContext *VAR_3)
{
    int VAR_4, VAR_5;
    GetBitContext *VAR_6 = &VAR_3->gb;
    FLACFrameInfo VAR_7;

    if ((VAR_5 = FUNC_5(VAR_3->avctx, VAR_6, &VAR_7, 0)) < 0) {
        FUNC_2(VAR_3->avctx, VAR_1, "invalid frame header\n");
        return VAR_5;
    }

    if ( VAR_3->flac_stream_info.channels
        && VAR_7.channels != VAR_3->flac_stream_info.channels
        && VAR_3->got_streaminfo) {
        VAR_3->flac_stream_info.channels = VAR_3->avctx->channels = VAR_7.channels;
        FUNC_6(VAR_3->avctx);
        VAR_5 = FUNC_1(VAR_3);
        if (VAR_5 < 0)
            return VAR_5;
    }
    VAR_3->flac_stream_info.channels = VAR_3->avctx->channels = VAR_7.channels;
    if (!VAR_3->avctx->channel_layout)
        FUNC_6(VAR_3->avctx);
    VAR_3->ch_mode = VAR_7.ch_mode;

    if (!VAR_3->flac_stream_info.bps && !VAR_7.bps) {
        FUNC_2(VAR_3->avctx, VAR_1, "bps not found in STREAMINFO or frame header\n");
        return VAR_0;
    }
    if (!VAR_7.bps) {
        VAR_7.bps = VAR_3->flac_stream_info.bps;
    } else if (VAR_3->flac_stream_info.bps && VAR_7.bps != VAR_3->flac_stream_info.bps) {
        FUNC_2(VAR_3->avctx, VAR_1, "switching bps mid-stream is not "
                                       "supported\n");
        return VAR_0;
    }

    if (!VAR_3->flac_stream_info.bps) {
        VAR_3->flac_stream_info.bps = VAR_3->avctx->bits_per_raw_sample = VAR_7.bps;
        FUNC_8(VAR_3);
    }

    if (!VAR_3->flac_stream_info.max_blocksize)
        VAR_3->flac_stream_info.max_blocksize = VAR_2;
    if (VAR_7.blocksize > VAR_3->flac_stream_info.max_blocksize) {
        FUNC_2(VAR_3->avctx, VAR_1, "blocksize %d > %d\n", VAR_7.blocksize,
               VAR_3->flac_stream_info.max_blocksize);
        return VAR_0;
    }
    VAR_3->blocksize = VAR_7.blocksize;

    if (!VAR_3->flac_stream_info.samplerate && !VAR_7.samplerate) {
        FUNC_2(VAR_3->avctx, VAR_1, "sample rate not found in STREAMINFO"
                                        " or frame header\n");
        return VAR_0;
    }
    if (VAR_7.samplerate == 0)
        VAR_7.samplerate = VAR_3->flac_stream_info.samplerate;
    VAR_3->flac_stream_info.samplerate = VAR_3->avctx->sample_rate = VAR_7.samplerate;

    if (!VAR_3->got_streaminfo) {
        VAR_5 = FUNC_1(VAR_3);
        if (VAR_5 < 0)
            return VAR_5;
        VAR_3->got_streaminfo = 1;
        FUNC_4(VAR_3->avctx, &VAR_3->flac_stream_info);
    }
    FUNC_7(&VAR_3->dsp, VAR_3->avctx->sample_fmt,
                    VAR_3->flac_stream_info.channels, VAR_3->flac_stream_info.bps);




    for (VAR_4 = 0; VAR_4 < VAR_3->flac_stream_info.channels; VAR_4++) {
        if ((VAR_5 = FUNC_3(VAR_3, VAR_4)) < 0)
            return VAR_5;
    }

    FUNC_0(VAR_6);


    FUNC_9(VAR_6, 16);

    return 0;
}
