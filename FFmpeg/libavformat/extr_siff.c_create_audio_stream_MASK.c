
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ start_time; TYPE_1__* codecpar; } ;
struct TYPE_8__ {int rate; } ;
struct TYPE_7__ {int channels; int bits_per_coded_sample; int sample_rate; int channel_layout; int codec_id; int codec_type; } ;
typedef TYPE_2__ SIFFContext ;
typedef TYPE_3__ AVStream ;
typedef int AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_3__*,int,int,int ) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_4, SIFFContext *VAR_5)
{
    AVStream *VAR_6;
    VAR_6 = FUNC_1(VAR_4, ((void*)0));
    if (!VAR_6)
        return FUNC_0(VAR_3);
    VAR_6->codecpar->codec_type = VAR_0;
    VAR_6->codecpar->codec_id = VAR_2;
    VAR_6->codecpar->channels = 1;
    VAR_6->codecpar->channel_layout = VAR_1;
    VAR_6->codecpar->bits_per_coded_sample = 8;
    VAR_6->codecpar->sample_rate = VAR_5->rate;
    FUNC_2(VAR_6, 16, 1, VAR_5->rate);
    VAR_6->start_time = 0;
    return 0;
}
