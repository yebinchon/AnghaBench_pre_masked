
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int channels; int sample_rate; int channel_layout; int codec_id; int codec_type; } ;
struct TYPE_11__ {int seekable; } ;
struct TYPE_10__ {TYPE_4__* pb; } ;
struct TYPE_9__ {TYPE_7__* codecpar; int duration; scalar_t__ start_time; } ;
typedef TYPE_1__ AVStream ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_7__*,int ) ;
 TYPE_1__* FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_1__*,int,int,int) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_5)
{
    AVStream *VAR_6;

    VAR_6 = FUNC_2(VAR_5, ((void*)0));
    if (!VAR_6)
        return FUNC_0(VAR_4);

    VAR_6->codecpar->codec_type = VAR_1;
    VAR_6->codecpar->codec_id = VAR_3;
    VAR_6->codecpar->channel_layout = VAR_2;
    VAR_6->codecpar->channels = 2;
    VAR_6->codecpar->sample_rate = 48000;
    VAR_6->start_time = 0;
    if (VAR_5->pb->seekable & VAR_0)
        VAR_6->duration = FUNC_1(VAR_6->codecpar, FUNC_3(VAR_5->pb));

    FUNC_4(VAR_6, 64, 1, VAR_6->codecpar->sample_rate);

    return 0;
}
