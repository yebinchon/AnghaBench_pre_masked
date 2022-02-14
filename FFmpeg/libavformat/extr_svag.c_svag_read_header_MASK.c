
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int pb; } ;
struct TYPE_9__ {unsigned int duration; TYPE_1__* codecpar; } ;
struct TYPE_8__ {int channels; unsigned int block_align; void* sample_rate; int codec_id; int codec_type; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 TYPE_2__* FUNC_1 (TYPE_3__*,int *) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,int,int,void*) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_5)
{
    unsigned VAR_6, VAR_7;
    AVStream *VAR_8;

    FUNC_3(VAR_5->pb, 4);

    VAR_8 = FUNC_1(VAR_5, ((void*)0));
    if (!VAR_8)
        return FUNC_0(VAR_3);

    VAR_6 = FUNC_2(VAR_5->pb);
    VAR_8->codecpar->codec_type = VAR_1;
    VAR_8->codecpar->codec_id = VAR_2;
    VAR_8->codecpar->sample_rate = FUNC_2(VAR_5->pb);
    if (VAR_8->codecpar->sample_rate <= 0)
        return VAR_0;
    VAR_8->codecpar->channels = FUNC_2(VAR_5->pb);
    if (VAR_8->codecpar->channels <= 0 || VAR_8->codecpar->channels > 8)
        return VAR_0;
    VAR_8->duration = VAR_6 / (16 * VAR_8->codecpar->channels) * 28;
    VAR_7 = FUNC_2(VAR_5->pb);
    if (VAR_7 <= 0 || VAR_7 > VAR_4 / VAR_8->codecpar->channels)
        return VAR_0;
    VAR_8->codecpar->block_align = VAR_7 * VAR_8->codecpar->channels;
    FUNC_3(VAR_5->pb, 0x800 - FUNC_4(VAR_5->pb));
    FUNC_5(VAR_8, 64, 1, VAR_8->codecpar->sample_rate);

    return 0;
}
