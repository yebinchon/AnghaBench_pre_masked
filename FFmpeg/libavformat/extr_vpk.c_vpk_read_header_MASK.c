
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {unsigned int block_count; unsigned int last_block_size; scalar_t__ current_block; } ;
typedef TYPE_2__ VPKDemuxContext ;
struct TYPE_12__ {int pb; TYPE_2__* priv_data; } ;
struct TYPE_11__ {int duration; TYPE_1__* codecpar; } ;
struct TYPE_9__ {int block_align; int sample_rate; int channels; int codec_id; int codec_type; } ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_1 (TYPE_4__*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned int) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,int,int,int) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_4)
{
    VPKDemuxContext *VAR_5 = VAR_4->priv_data;
    unsigned VAR_6;
    unsigned VAR_7;
    AVStream *VAR_8;

    VAR_5->current_block = 0;
    VAR_8 = FUNC_1(VAR_4, ((void*)0));
    if (!VAR_8)
        return FUNC_0(VAR_3);

    FUNC_3(VAR_4->pb, 4);
    VAR_8->duration = FUNC_2(VAR_4->pb) * 28 / 16;
    VAR_6 = FUNC_2(VAR_4->pb);
    VAR_8->codecpar->codec_type = VAR_1;
    VAR_8->codecpar->codec_id = VAR_2;
    VAR_8->codecpar->block_align = FUNC_2(VAR_4->pb);
    VAR_8->codecpar->sample_rate = FUNC_2(VAR_4->pb);
    if (VAR_8->codecpar->sample_rate <= 0 || VAR_8->codecpar->block_align <= 0)
        return VAR_0;
    VAR_8->codecpar->channels = FUNC_2(VAR_4->pb);
    if (VAR_8->codecpar->channels <= 0)
        return VAR_0;
    VAR_7 = ((VAR_8->codecpar->block_align / VAR_8->codecpar->channels) * 28LL) / 16;
    if (VAR_7 <= 0)
        return VAR_0;
    VAR_5->block_count = (VAR_8->duration + (VAR_7 - 1)) / VAR_7;
    VAR_5->last_block_size = (VAR_8->duration % VAR_7) * 16 * VAR_8->codecpar->channels / 28;

    if (VAR_6 < FUNC_4(VAR_4->pb))
        return VAR_0;
    FUNC_3(VAR_4->pb, VAR_6 - FUNC_4(VAR_4->pb));
    FUNC_5(VAR_8, 64, 1, VAR_8->codecpar->sample_rate);

    return 0;
}
