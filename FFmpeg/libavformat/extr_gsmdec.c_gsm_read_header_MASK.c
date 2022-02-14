
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {TYPE_1__* iformat; TYPE_3__* priv_data; } ;
struct TYPE_13__ {TYPE_2__* codecpar; } ;
struct TYPE_12__ {int sample_rate; } ;
struct TYPE_11__ {int channels; int sample_rate; int bit_rate; int channel_layout; int codec_id; int codec_type; } ;
struct TYPE_10__ {int raw_codec_id; } ;
typedef TYPE_3__ GSMDemuxerContext ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__* FUNC_1 (TYPE_5__*,int *) ;
 int FUNC_2 (TYPE_4__*,int,int,int ) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_6)
{
    GSMDemuxerContext *VAR_7 = VAR_6->priv_data;
    AVStream *VAR_8 = FUNC_1(VAR_6, ((void*)0));
    if (!VAR_8)
        return FUNC_0(VAR_2);

    VAR_8->codecpar->codec_type = VAR_0;
    VAR_8->codecpar->codec_id = VAR_6->iformat->raw_codec_id;
    VAR_8->codecpar->channels = 1;
    VAR_8->codecpar->channel_layout = VAR_1;
    VAR_8->codecpar->sample_rate = VAR_7->sample_rate;
    VAR_8->codecpar->bit_rate = VAR_4 * 8 * VAR_7->sample_rate / VAR_3;

    FUNC_2(VAR_8, 64, VAR_3, VAR_5);

    return 0;
}
