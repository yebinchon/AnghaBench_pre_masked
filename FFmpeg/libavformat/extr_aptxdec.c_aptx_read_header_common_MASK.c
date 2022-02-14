
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* priv_data; } ;
struct TYPE_11__ {scalar_t__ start_time; TYPE_1__* codecpar; } ;
struct TYPE_10__ {int sample_rate; } ;
struct TYPE_9__ {int channels; int sample_rate; int format; int codec_type; } ;
typedef TYPE_2__ AptXDemuxerContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (TYPE_4__*,int *) ;

__attribute__((used)) static AVStream *FUNC_1(AVFormatContext *VAR_2)
{
    AptXDemuxerContext *VAR_3 = VAR_2->priv_data;
    AVStream *VAR_4 = FUNC_0(VAR_2, ((void*)0));
    if (!VAR_4)
        return ((void*)0);
    VAR_4->codecpar->codec_type = VAR_0;
    VAR_4->codecpar->format = VAR_1;
    VAR_4->codecpar->channels = 2;
    VAR_4->codecpar->sample_rate = VAR_3->sample_rate;
    VAR_4->start_time = 0;
    return VAR_4;
}
