
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_16__ {int num; int den; } ;
struct TYPE_17__ {int chars_per_frame; int fsize; TYPE_2__ framerate; int height; int width; } ;
typedef TYPE_3__ TtyDemuxContext ;
struct TYPE_19__ {TYPE_10__* pb; TYPE_3__* priv_data; } ;
struct TYPE_18__ {int duration; int time_base; TYPE_2__ avg_frame_rate; TYPE_1__* codecpar; } ;
struct TYPE_15__ {int height; int width; int codec_id; int codec_type; scalar_t__ codec_tag; } ;
struct TYPE_14__ {int seekable; } ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 TYPE_4__* FUNC_3 (TYPE_5__*,int *) ;
 int FUNC_4 (TYPE_10__*,int ,int ) ;
 int FUNC_5 (TYPE_10__*) ;
 int FUNC_6 (TYPE_4__*,int,int ,int ) ;
 int FUNC_7 (TYPE_5__*,int) ;
 scalar_t__ FUNC_8 (TYPE_5__*,int*,int ,int ) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_5)
{
    TtyDemuxContext *VAR_6 = VAR_5->priv_data;
    int VAR_7 = 0;
    AVStream *VAR_8 = FUNC_3(VAR_5, ((void*)0));

    if (!VAR_8) {
        VAR_7 = FUNC_0(VAR_3);
        goto fail;
    }
    VAR_8->codecpar->codec_tag = 0;
    VAR_8->codecpar->codec_type = VAR_1;
    VAR_8->codecpar->codec_id = VAR_2;

    VAR_8->codecpar->width = VAR_6->width;
    VAR_8->codecpar->height = VAR_6->height;
    FUNC_6(VAR_8, 60, VAR_6->framerate.den, VAR_6->framerate.num);
    VAR_8->avg_frame_rate = VAR_6->framerate;


    VAR_6->chars_per_frame = FUNC_1(FUNC_2(VAR_8->time_base)*VAR_6->chars_per_frame, 1);

    if (VAR_5->pb->seekable & VAR_0) {
        VAR_6->fsize = FUNC_5(VAR_5->pb);
        VAR_8->duration = (VAR_6->fsize + VAR_6->chars_per_frame - 1) / VAR_6->chars_per_frame;

        if (FUNC_8(VAR_5, &VAR_6->fsize, 0, 0) < 0)
            FUNC_7(VAR_5, VAR_6->fsize - 51);

        FUNC_4(VAR_5->pb, 0, VAR_4);
    }

fail:
    return VAR_7;
}
