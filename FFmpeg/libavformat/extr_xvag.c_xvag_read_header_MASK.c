
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int pb; } ;
struct TYPE_10__ {TYPE_1__* codecpar; int need_parsing; void* duration; } ;
struct TYPE_9__ {int channels; int block_align; void* sample_rate; int codec_id; int codec_type; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_1 (unsigned int) ;
 TYPE_2__* FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 unsigned int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_3__*,char*,unsigned int) ;
 int FUNC_9 (TYPE_2__*,int,int,void*) ;

__attribute__((used)) static int FUNC_10(AVFormatContext *VAR_8)
{
    unsigned VAR_9, VAR_10, VAR_11;
    AVStream *VAR_12;

    FUNC_6(VAR_8->pb, 4);

    VAR_12 = FUNC_2(VAR_8, ((void*)0));
    if (!VAR_12)
        return FUNC_0(VAR_6);

    VAR_12->codecpar->codec_type = VAR_2;

    VAR_9 = FUNC_5(VAR_8->pb);
    VAR_10 = VAR_9 > FUNC_1(VAR_9);
    if (VAR_10) {
        VAR_9 = FUNC_1(VAR_9);
        FUNC_6(VAR_8->pb, 28);
        VAR_11 = FUNC_4(VAR_8->pb);
        VAR_12->codecpar->channels = FUNC_4(VAR_8->pb);
        FUNC_6(VAR_8->pb, 4);
        VAR_12->duration = FUNC_4(VAR_8->pb);
        FUNC_6(VAR_8->pb, 8);
        VAR_12->codecpar->sample_rate = FUNC_4(VAR_8->pb);
    } else {
        FUNC_6(VAR_8->pb, 28);
        VAR_11 = FUNC_5(VAR_8->pb);
        VAR_12->codecpar->channels = FUNC_5(VAR_8->pb);
        FUNC_6(VAR_8->pb, 4);
        VAR_12->duration = FUNC_5(VAR_8->pb);
        FUNC_6(VAR_8->pb, 8);
        VAR_12->codecpar->sample_rate = FUNC_5(VAR_8->pb);
    }

    if (VAR_12->codecpar->sample_rate <= 0)
        return VAR_0;
    if (VAR_12->codecpar->channels <= 0 || VAR_12->codecpar->channels > VAR_7)
        return VAR_0;

    switch (VAR_11) {
    case 0x1c:
        VAR_12->codecpar->codec_id = VAR_4;
        VAR_12->codecpar->block_align = 16 * VAR_12->codecpar->channels;
        break;
    default:
        FUNC_8(VAR_8, "codec %X", VAR_11);
        return VAR_1;
    };

    FUNC_6(VAR_8->pb, VAR_9 - FUNC_7(VAR_8->pb));

    if (FUNC_3(VAR_8->pb) == 0xFFFB) {
        VAR_12->codecpar->codec_id = VAR_5;
        VAR_12->codecpar->block_align = 0x1000;
        VAR_12->need_parsing = VAR_3;
    }

    FUNC_6(VAR_8->pb, -2);
    FUNC_9(VAR_12, 64, 1, VAR_12->codecpar->sample_rate);

    return 0;
}
