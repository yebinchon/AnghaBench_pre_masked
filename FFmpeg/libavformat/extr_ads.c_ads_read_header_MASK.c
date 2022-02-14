
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int pb; } ;
struct TYPE_9__ {int duration; TYPE_1__* codecpar; } ;
struct TYPE_8__ {int channels; scalar_t__ codec_id; int block_align; void* sample_rate; int codec_type; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_1 (TYPE_3__*,int *) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_2__*,int,int,void*) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_6)
{
    int VAR_7, VAR_8, VAR_9;
    AVStream *VAR_10;

    VAR_10 = FUNC_1(VAR_6, ((void*)0));
    if (!VAR_10)
        return FUNC_0(VAR_4);

    FUNC_3(VAR_6->pb, 8);
    VAR_10->codecpar->codec_type = VAR_1;
    VAR_8 = FUNC_2(VAR_6->pb);
    VAR_10->codecpar->sample_rate = FUNC_2(VAR_6->pb);
    if (VAR_10->codecpar->sample_rate <= 0)
        return VAR_0;
    VAR_10->codecpar->channels = FUNC_2(VAR_6->pb);
    if (VAR_10->codecpar->channels <= 0)
        return VAR_0;
    VAR_7 = FUNC_2(VAR_6->pb);
    if (VAR_7 <= 0 || VAR_7 > VAR_5 / VAR_10->codecpar->channels)
        return VAR_0;

    if (VAR_8 == 1)
        VAR_10->codecpar->codec_id = VAR_3;
    else
        VAR_10->codecpar->codec_id = VAR_2;

    VAR_10->codecpar->block_align = VAR_10->codecpar->channels * VAR_7;
    FUNC_3(VAR_6->pb, 12);
    VAR_9 = FUNC_2(VAR_6->pb);
    if (VAR_10->codecpar->codec_id == VAR_2)
        VAR_10->duration = (VAR_9 - 0x40) / 16 / VAR_10->codecpar->channels * 28;
    FUNC_4(VAR_10, 64, 1, VAR_10->codecpar->sample_rate);

    return 0;
}
