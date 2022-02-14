
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_18__ {TYPE_2__* iformat; TYPE_5__* priv_data; } ;
struct TYPE_17__ {TYPE_4__* internal; int need_parsing; TYPE_1__* codecpar; } ;
struct TYPE_16__ {int framerate; } ;
struct TYPE_15__ {TYPE_3__* avctx; } ;
struct TYPE_14__ {int framerate; } ;
struct TYPE_13__ {int raw_codec_id; } ;
struct TYPE_12__ {int codec_id; int codec_type; } ;
typedef TYPE_5__ FFRawVideoDemuxerContext ;
typedef TYPE_6__ AVStream ;
typedef TYPE_7__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_6__* FUNC_1 (TYPE_7__*,int *) ;
 int FUNC_2 (TYPE_6__*,int,int,int) ;

int FUNC_3(AVFormatContext *VAR_3)
{
    AVStream *VAR_4;
    FFRawVideoDemuxerContext *VAR_5 = VAR_3->priv_data;
    int VAR_6 = 0;


    VAR_4 = FUNC_1(VAR_3, ((void*)0));
    if (!VAR_4) {
        VAR_6 = FUNC_0(VAR_2);
        goto fail;
    }

    VAR_4->codecpar->codec_type = VAR_0;
    VAR_4->codecpar->codec_id = VAR_3->iformat->raw_codec_id;
    VAR_4->need_parsing = VAR_1;

    VAR_4->internal->avctx->framerate = VAR_5->framerate;
    FUNC_2(VAR_4, 64, 1, 1200000);

fail:
    return VAR_6;
}
