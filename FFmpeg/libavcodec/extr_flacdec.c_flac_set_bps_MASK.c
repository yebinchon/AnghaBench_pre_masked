
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
struct TYPE_6__ {int bps; } ;
struct TYPE_7__ {int sample_shift; TYPE_2__ flac_stream_info; TYPE_1__* avctx; } ;
struct TYPE_5__ {int request_sample_fmt; int sample_fmt; } ;
typedef TYPE_3__ FLACContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(FLACContext *VAR_4)
{
    enum AVSampleFormat VAR_5 = VAR_4->avctx->request_sample_fmt;
    int VAR_6 = VAR_4->flac_stream_info.bps > 16;
    int VAR_7 = FUNC_0(VAR_5) > 2;
    int VAR_8 = FUNC_1(VAR_5);

    if (VAR_6 || VAR_7) {
        if (VAR_8)
            VAR_4->avctx->sample_fmt = VAR_3;
        else
            VAR_4->avctx->sample_fmt = VAR_2;
        VAR_4->sample_shift = 32 - VAR_4->flac_stream_info.bps;
    } else {
        if (VAR_8)
            VAR_4->avctx->sample_fmt = VAR_1;
        else
            VAR_4->avctx->sample_fmt = VAR_0;
        VAR_4->sample_shift = 16 - VAR_4->flac_stream_info.bps;
    }
}
