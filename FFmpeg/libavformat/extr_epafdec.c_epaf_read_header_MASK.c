
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int pb; } ;
struct TYPE_10__ {TYPE_1__* codecpar; } ;
struct TYPE_9__ {int channels; int sample_rate; int bits_per_coded_sample; int block_align; int codec_id; int codec_type; } ;
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
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int) ;
 int FUNC_6 (TYPE_3__*,char*) ;
 int FUNC_7 (TYPE_2__*,int,int,int) ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_7)
{
    int VAR_8, VAR_9, VAR_10, VAR_11;
    AVStream *VAR_12;

    FUNC_5(VAR_7->pb, 4);
    if (FUNC_4(VAR_7->pb))
        return VAR_0;

    VAR_8 = FUNC_4(VAR_7->pb);
    if (VAR_8 && VAR_8 != 1)
        return VAR_0;

    if (VAR_8) {
        VAR_9 = FUNC_4(VAR_7->pb);
        VAR_10 = FUNC_4(VAR_7->pb);
        VAR_11 = FUNC_4(VAR_7->pb);
    } else {
        VAR_9 = FUNC_3(VAR_7->pb);
        VAR_10 = FUNC_3(VAR_7->pb);
        VAR_11 = FUNC_3(VAR_7->pb);
    }

    if (VAR_11 <= 0 || VAR_11 > VAR_6 || VAR_9 <= 0)
        return VAR_0;

    VAR_12 = FUNC_2(VAR_7, ((void*)0));
    if (!VAR_12)
        return FUNC_0(VAR_5);

    VAR_12->codecpar->codec_type = VAR_1;
    VAR_12->codecpar->channels = VAR_11;
    VAR_12->codecpar->sample_rate = VAR_9;
    switch (VAR_10) {
    case 0:
        VAR_12->codecpar->codec_id = VAR_8 ? VAR_3 : VAR_2;
        break;
    case 2:
        VAR_12->codecpar->codec_id = VAR_4;
        break;
    case 1:
        FUNC_6(VAR_7, "24-bit Paris PCM format");
    default:
        return VAR_0;
    }

    VAR_12->codecpar->bits_per_coded_sample = FUNC_1(VAR_12->codecpar->codec_id);
    VAR_12->codecpar->block_align = VAR_12->codecpar->bits_per_coded_sample * VAR_12->codecpar->channels / 8;

    FUNC_7(VAR_12, 64, 1, VAR_12->codecpar->sample_rate);

    if (FUNC_5(VAR_7->pb, 2024) < 0)
        return VAR_0;
    return 0;
}
