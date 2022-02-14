
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int den; int num; } ;
struct TYPE_9__ {scalar_t__ codec; TYPE_7__ time_base; int nb_frames; int height; int width; int stream_index; } ;
typedef TYPE_2__ VideoProperties ;
struct TYPE_10__ {int avg_frame_rate; int r_frame_rate; int nb_frames; int duration; TYPE_1__* codecpar; int need_parsing; int index; } ;
struct TYPE_8__ {scalar_t__ codec_id; int height; int width; scalar_t__ codec_tag; int codec_type; } ;
typedef TYPE_3__ AVStream ;
typedef int AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_7__) ;
 TYPE_3__* FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_3__*,int,int ,int ) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_4, VideoProperties *VAR_5)
{
    AVStream *VAR_6;

    if (!VAR_5->codec)
        return 0;


    VAR_6 = FUNC_2(VAR_4, ((void*)0));
    if (!VAR_6)
        return FUNC_0(VAR_3);
    VAR_5->stream_index = VAR_6->index;
    VAR_6->codecpar->codec_type = VAR_0;
    VAR_6->codecpar->codec_id = VAR_5->codec;

    if (VAR_6->codecpar->codec_id == VAR_2)
        VAR_6->need_parsing = VAR_1;
    VAR_6->codecpar->codec_tag = 0;
    VAR_6->codecpar->width = VAR_5->width;
    VAR_6->codecpar->height = VAR_5->height;
    VAR_6->duration = VAR_6->nb_frames = VAR_5->nb_frames;
    if (VAR_5->time_base.num)
        FUNC_3(VAR_6, 64, VAR_5->time_base.num, VAR_5->time_base.den);
    VAR_6->r_frame_rate =
    VAR_6->avg_frame_rate = FUNC_1(VAR_5->time_base);
    return 0;
}
