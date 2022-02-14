
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_18__ {int codec_tag; int codec_type; } ;
struct TYPE_17__ {TYPE_2__** streams; } ;
struct TYPE_16__ {int ** streams; TYPE_4__* priv_data; } ;
struct TYPE_15__ {TYPE_3__* tracks; } ;
struct TYPE_14__ {int src_track; int timescale; int hint_track; TYPE_9__* par; TYPE_6__* rtp_ctx; int tag; } ;
struct TYPE_12__ {int den; } ;
struct TYPE_13__ {TYPE_1__ time_base; } ;
typedef TYPE_3__ MOVTrack ;
typedef TYPE_4__ MOVMuxContext ;
typedef int AVStream ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char,char,char,char) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_5__*,int ,char*,int) ;
 TYPE_9__* FUNC_3 () ;
 int FUNC_4 (TYPE_9__**) ;
 int FUNC_5 (TYPE_6__**,TYPE_5__*,int *,int *,int ,int) ;

int FUNC_6(AVFormatContext *VAR_4, int VAR_5, int VAR_6)
{
    MOVMuxContext *VAR_7 = VAR_4->priv_data;
    MOVTrack *VAR_8 = &VAR_7->tracks[VAR_5];
    MOVTrack *VAR_9 = &VAR_7->tracks[VAR_6];
    AVStream *VAR_10 = VAR_4->streams[VAR_6];
    int VAR_11 = FUNC_0(VAR_2);

    VAR_8->tag = FUNC_1('r','t','p',' ');
    VAR_8->src_track = VAR_6;

    VAR_8->par = FUNC_3();
    if (!VAR_8->par)
        goto fail;
    VAR_8->par->codec_type = VAR_0;
    VAR_8->par->codec_tag = VAR_8->tag;

    VAR_11 = FUNC_5(&VAR_8->rtp_ctx, VAR_4, VAR_10, ((void*)0),
                                VAR_3, VAR_6);
    if (VAR_11 < 0)
        goto fail;


    VAR_8->timescale = VAR_8->rtp_ctx->streams[0]->time_base.den;



    VAR_9->hint_track = VAR_5;
    return 0;
fail:
    FUNC_2(VAR_4, VAR_1,
           "Unable to initialize hinting of stream %d\n", VAR_6);
    FUNC_4(&VAR_8->par);

    VAR_8->timescale = 90000;
    return VAR_11;
}
