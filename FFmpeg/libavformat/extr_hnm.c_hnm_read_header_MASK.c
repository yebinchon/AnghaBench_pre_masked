
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_15__ {int * pb; TYPE_2__* priv_data; } ;
struct TYPE_14__ {scalar_t__ start_time; TYPE_1__* codecpar; } ;
struct TYPE_11__ {scalar_t__ size; int * data; } ;
struct TYPE_13__ {int width; int height; int version; scalar_t__ currentframe; void* framesize; void* channels; void* bits; void* taboffset; void* frames; void* filesize; scalar_t__ superchunk_remaining; TYPE_10__ vpkt; scalar_t__ pts; } ;
struct TYPE_12__ {int width; int height; int extradata_size; int extradata; scalar_t__ codec_tag; int codec_id; int codec_type; } ;
typedef TYPE_2__ Hnm4DemuxContext ;
typedef TYPE_3__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_10__*) ;
 int FUNC_2 (TYPE_4__*,int ,char*,int,int) ;
 int FUNC_3 (int) ;
 TYPE_3__* FUNC_4 (TYPE_4__*,int *) ;
 void* FUNC_5 (int *) ;
 void* FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (TYPE_3__*,int,int,int ) ;
 int FUNC_9 (int ,int*,int) ;

__attribute__((used)) static int FUNC_10(AVFormatContext *VAR_6)
{
    Hnm4DemuxContext *VAR_7 = VAR_6->priv_data;
    AVIOContext *VAR_8 = VAR_6->pb;
    AVStream *VAR_9;


    VAR_7->pts = 0;
    FUNC_1(&VAR_7->vpkt);
    VAR_7->vpkt.data = ((void*)0);
    VAR_7->vpkt.size = 0;

    VAR_7->superchunk_remaining = 0;

    FUNC_7(VAR_8, 8);
    VAR_7->width = FUNC_5(VAR_8);
    VAR_7->height = FUNC_5(VAR_8);
    VAR_7->filesize = FUNC_6(VAR_8);
    VAR_7->frames = FUNC_6(VAR_8);
    VAR_7->taboffset = FUNC_6(VAR_8);
    VAR_7->bits = FUNC_5(VAR_8);
    VAR_7->channels = FUNC_5(VAR_8);
    VAR_7->framesize = FUNC_6(VAR_8);
    FUNC_7(VAR_8, 32);

    VAR_7->currentframe = 0;

    if (VAR_7->width < 256 || VAR_7->width > 640 ||
        VAR_7->height < 150 || VAR_7->height > 480) {
        FUNC_2(VAR_6, VAR_3,
               "invalid resolution: %ux%u\n", VAR_7->width, VAR_7->height);
        return VAR_0;
    }


    if (VAR_7->width == 640)
        VAR_7->version = 0x4a;
    else
        VAR_7->version = 0x40;

    if (!(VAR_9 = FUNC_4(VAR_6, ((void*)0))))
        return FUNC_0(VAR_4);

    VAR_9->codecpar->codec_type = VAR_1;
    VAR_9->codecpar->codec_id = VAR_2;
    VAR_9->codecpar->codec_tag = 0;
    VAR_9->codecpar->width = VAR_7->width;
    VAR_9->codecpar->height = VAR_7->height;
    VAR_9->codecpar->extradata = FUNC_3(1);

    VAR_9->codecpar->extradata_size = 1;
    FUNC_9(VAR_9->codecpar->extradata, &VAR_7->version, 1);

    VAR_9->start_time = 0;

    FUNC_8(VAR_9, 33, 1, VAR_5);

    return 0;
}
