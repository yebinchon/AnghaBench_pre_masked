
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int pb; } ;
struct TYPE_10__ {TYPE_1__* codecpar; void* duration; scalar_t__ start_time; } ;
struct TYPE_9__ {int channels; scalar_t__ sample_rate; int channel_layout; int codec_id; int codec_type; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_1 (TYPE_3__*,int *) ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (TYPE_3__*,char*,int) ;
 int FUNC_6 (TYPE_2__*,int,int,scalar_t__) ;
 int VAR_5 ;
 int FUNC_7 (int ,void*) ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_6)
{
    int VAR_7;
    AVStream *VAR_8;

    VAR_8 = FUNC_1(VAR_6, ((void*)0));
    if (!VAR_8)
        return FUNC_0(VAR_4);

    FUNC_4(VAR_6->pb, 8);
    VAR_8->codecpar->codec_type = VAR_1;
    VAR_8->codecpar->codec_id = FUNC_7(VAR_5, FUNC_2(VAR_6->pb));

    VAR_7 = FUNC_2(VAR_6->pb);
    if (VAR_7 != 16) {
        FUNC_5(VAR_6, "depth %d", VAR_7);
        return VAR_0;
    }

    VAR_8->codecpar->channels = FUNC_2(VAR_6->pb);
    if (!VAR_8->codecpar->channels)
        return VAR_0;

    if (VAR_8->codecpar->channels == 2)
        VAR_8->codecpar->channel_layout = VAR_3;
    else if (VAR_8->codecpar->channels == 4)
        VAR_8->codecpar->channel_layout = VAR_2;

    FUNC_4(VAR_6->pb, 2);
    VAR_8->codecpar->sample_rate = FUNC_3(VAR_6->pb);
    if (VAR_8->codecpar->sample_rate <= 0)
        return VAR_0;
    VAR_8->start_time = 0;
    VAR_8->duration = FUNC_3(VAR_6->pb);
    FUNC_4(VAR_6->pb, 40);
    FUNC_6(VAR_8, 64, 1, VAR_8->codecpar->sample_rate);

    return 0;
}
