
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int pb; } ;
struct TYPE_9__ {TYPE_1__* codecpar; int duration; } ;
struct TYPE_8__ {int sample_rate; int channels; int bits_per_coded_sample; int block_align; int codec_id; int codec_type; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (TYPE_2__*,int,int,int) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_3)
{
    AVStream *VAR_4;

    VAR_4 = FUNC_2(VAR_3, ((void*)0));
    if (!VAR_4)
        return FUNC_0(VAR_2);

    FUNC_4(VAR_3->pb, 18);
    VAR_4->duration = FUNC_3(VAR_3->pb);
    VAR_4->codecpar->codec_type = VAR_0;
    VAR_4->codecpar->codec_id = VAR_1;
    VAR_4->codecpar->sample_rate = 8000;
    VAR_4->codecpar->channels = 1;
    VAR_4->codecpar->bits_per_coded_sample = FUNC_1(VAR_4->codecpar->codec_id);
    VAR_4->codecpar->block_align = VAR_4->codecpar->bits_per_coded_sample * VAR_4->codecpar->channels / 8;
    FUNC_5(VAR_4, 64, 1, VAR_4->codecpar->sample_rate);
    FUNC_4(VAR_3->pb, 10);

    return 0;
}
