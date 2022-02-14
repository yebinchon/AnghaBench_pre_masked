
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int pb; } ;
struct TYPE_9__ {int duration; TYPE_1__* codecpar; } ;
struct TYPE_8__ {int channels; int sample_rate; int block_align; int codec_id; int codec_type; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char,char,char,char) ;
 int VAR_4 ;
 TYPE_2__* FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (TYPE_2__*,int,int,int) ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_5)
{
    AVStream *VAR_6;

    VAR_6 = FUNC_2(VAR_5, ((void*)0));
    if (!VAR_6)
        return FUNC_0(VAR_3);

    FUNC_6(VAR_5->pb, 4);
    VAR_6->codecpar->codec_type = VAR_1;
    VAR_6->codecpar->codec_id = VAR_2;
    VAR_6->codecpar->channels = 1 + (FUNC_3(VAR_5->pb) == 0x00000004);
    FUNC_6(VAR_5->pb, 4);
    if (VAR_6->codecpar->channels > 1) {
        VAR_6->duration = FUNC_3(VAR_5->pb);
    } else {
        VAR_6->duration = FUNC_3(VAR_5->pb) / 16 * 28;
    }
    VAR_6->codecpar->sample_rate = FUNC_3(VAR_5->pb);
    if (VAR_6->codecpar->sample_rate <= 0)
        return VAR_0;
    FUNC_5(VAR_5->pb, 0x1000, VAR_4);
    if (FUNC_4(VAR_5->pb) == FUNC_1('V','A','G','p')) {
        VAR_6->codecpar->block_align = 0x1000 * VAR_6->codecpar->channels;
        FUNC_5(VAR_5->pb, 0, VAR_4);
        VAR_6->duration = VAR_6->duration / 16 * 28;
    } else {
        VAR_6->codecpar->block_align = 16 * VAR_6->codecpar->channels;
        FUNC_5(VAR_5->pb, VAR_6->codecpar->channels > 1 ? 0x80 : 0x30, VAR_4);
    }
    FUNC_7(VAR_6, 64, 1, VAR_6->codecpar->sample_rate);

    return 0;
}
