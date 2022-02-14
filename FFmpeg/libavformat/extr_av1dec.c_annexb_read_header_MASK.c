
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;


struct TYPE_21__ {int codec_id; int codec_type; } ;
struct TYPE_20__ {TYPE_3__* priv_data; } ;
struct TYPE_19__ {TYPE_9__* codecpar; TYPE_2__* internal; int need_parsing; } ;
struct TYPE_18__ {TYPE_11__* bsf; int framerate; } ;
struct TYPE_17__ {TYPE_1__* avctx; } ;
struct TYPE_16__ {int framerate; } ;
struct TYPE_15__ {int par_in; } ;
typedef TYPE_3__ AnnexBContext ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVFormatContext ;
typedef int AVBitStreamFilter ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int const*,TYPE_11__**) ;
 int FUNC_2 (TYPE_11__**) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (TYPE_11__*) ;
 int FUNC_5 (TYPE_3__*,int ,char*) ;
 int FUNC_6 (int ,TYPE_9__*) ;
 TYPE_4__* FUNC_7 (TYPE_5__*,int *) ;
 int FUNC_8 (TYPE_4__*,int,int,int) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_6)
{
    AnnexBContext *VAR_7 = VAR_6->priv_data;
    const AVBitStreamFilter *VAR_8 = FUNC_3("av1_frame_merge");
    AVStream *VAR_9;
    int VAR_10;

    if (!VAR_8) {
        FUNC_5(VAR_7, VAR_4, "av1_frame_merge bitstream filter "
               "not found. This is a bug, please report it.\n");
        return VAR_0;
    }

    VAR_9 = FUNC_7(VAR_6, ((void*)0));
    if (!VAR_9)
        return FUNC_0(VAR_5);

    VAR_9->codecpar->codec_type = VAR_1;
    VAR_9->codecpar->codec_id = VAR_3;
    VAR_9->need_parsing = VAR_2;

    VAR_9->internal->avctx->framerate = VAR_7->framerate;

    FUNC_8(VAR_9, 64, 1, 1200000);

    VAR_10 = FUNC_1(VAR_8, &VAR_7->bsf);
    if (VAR_10 < 0)
        return VAR_10;

    VAR_10 = FUNC_6(VAR_7->bsf->par_in, VAR_9->codecpar);
    if (VAR_10 < 0) {
        FUNC_2(&VAR_7->bsf);
        return VAR_10;
    }

    VAR_10 = FUNC_4(VAR_7->bsf);
    if (VAR_10 < 0)
        FUNC_2(&VAR_7->bsf);

    return VAR_10;
}
