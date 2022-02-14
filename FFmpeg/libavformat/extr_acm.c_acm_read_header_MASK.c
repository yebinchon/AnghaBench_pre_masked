
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int channels; scalar_t__ sample_rate; scalar_t__ extradata; int codec_id; int codec_type; } ;
struct TYPE_10__ {int pb; } ;
struct TYPE_9__ {int duration; TYPE_4__* codecpar; int need_parsing; scalar_t__ start_time; } ;
typedef TYPE_1__ AVStream ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_4 ;
 TYPE_1__* FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_1__*,int,int,scalar_t__) ;
 int FUNC_5 (TYPE_2__*,TYPE_4__*,int ,int) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_5)
{
    AVStream *VAR_6;
    int VAR_7;

    VAR_6 = FUNC_3(VAR_5, ((void*)0));
    if (!VAR_6)
        return FUNC_0(VAR_4);

    VAR_6->codecpar->codec_type = VAR_1;
    VAR_6->codecpar->codec_id = VAR_3;

    VAR_7 = FUNC_5(VAR_5, VAR_6->codecpar, VAR_5->pb, 14);
    if (VAR_7 < 0)
        return VAR_7;

    VAR_6->codecpar->channels = FUNC_1(VAR_6->codecpar->extradata + 8);
    VAR_6->codecpar->sample_rate = FUNC_1(VAR_6->codecpar->extradata + 10);
    if (VAR_6->codecpar->channels <= 0 || VAR_6->codecpar->sample_rate <= 0)
        return VAR_0;
    VAR_6->start_time = 0;
    VAR_6->duration = FUNC_2(VAR_6->codecpar->extradata + 4) / VAR_6->codecpar->channels;
    VAR_6->need_parsing = VAR_2;
    FUNC_4(VAR_6, 64, 1, VAR_6->codecpar->sample_rate);

    return 0;
}
