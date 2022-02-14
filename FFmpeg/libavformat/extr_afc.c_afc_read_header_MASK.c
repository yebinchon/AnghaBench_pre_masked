
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int channels; int* extradata; int sample_rate; int channel_layout; int codec_id; int codec_type; } ;
struct TYPE_11__ {void* data_end; } ;
struct TYPE_10__ {int pb; TYPE_3__* priv_data; } ;
struct TYPE_9__ {TYPE_4__* codecpar; void* duration; } ;
typedef TYPE_1__ AVStream ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ AFCDemuxContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (TYPE_1__*,int,int,int ) ;
 scalar_t__ FUNC_6 (TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_4)
{
    AFCDemuxContext *VAR_5 = VAR_4->priv_data;
    AVStream *VAR_6;

    VAR_6 = FUNC_1(VAR_4, ((void*)0));
    if (!VAR_6)
        return FUNC_0(VAR_3);
    VAR_6->codecpar->codec_type = VAR_0;
    VAR_6->codecpar->codec_id = VAR_2;
    VAR_6->codecpar->channels = 2;
    VAR_6->codecpar->channel_layout = VAR_1;

    if (FUNC_6(VAR_6->codecpar, 1))
        return FUNC_0(VAR_3);
    VAR_6->codecpar->extradata[0] = 8 * VAR_6->codecpar->channels;

    VAR_5->data_end = FUNC_3(VAR_4->pb) + 32LL;
    VAR_6->duration = FUNC_3(VAR_4->pb);
    VAR_6->codecpar->sample_rate = FUNC_2(VAR_4->pb);
    FUNC_4(VAR_4->pb, 22);
    FUNC_5(VAR_6, 64, 1, VAR_6->codecpar->sample_rate);

    return 0;
}
