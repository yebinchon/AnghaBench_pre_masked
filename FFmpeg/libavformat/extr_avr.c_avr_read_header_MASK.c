
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_11__ {int pb; } ;
struct TYPE_10__ {TYPE_1__* codecpar; } ;
struct TYPE_9__ {int channels; int bits_per_coded_sample; scalar_t__ codec_id; int block_align; int sample_rate; int codec_type; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (TYPE_3__*,char*,int,...) ;
 int FUNC_6 (TYPE_2__*,int,int,int ) ;
 scalar_t__ FUNC_7 (int,int ,int,int) ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_4)
{
    uint16_t VAR_5, VAR_6, VAR_7;
    AVStream *VAR_8;

    VAR_8 = FUNC_1(VAR_4, ((void*)0));
    if (!VAR_8)
        return FUNC_0(VAR_3);

    VAR_8->codecpar->codec_type = VAR_1;

    FUNC_4(VAR_4->pb, 4);
    FUNC_4(VAR_4->pb, 8);

    VAR_5 = FUNC_2(VAR_4->pb);
    if (!VAR_5) {
        VAR_8->codecpar->channels = 1;
    } else if (VAR_5 == 0xFFFFu) {
        VAR_8->codecpar->channels = 2;
    } else {
        FUNC_5(VAR_4, "chan %d", VAR_5);
        return VAR_0;
    }

    VAR_8->codecpar->bits_per_coded_sample = VAR_7 = FUNC_2(VAR_4->pb);

    VAR_6 = FUNC_2(VAR_4->pb);

    FUNC_4(VAR_4->pb, 2);
    FUNC_4(VAR_4->pb, 2);
    FUNC_4(VAR_4->pb, 1);

    VAR_8->codecpar->sample_rate = FUNC_3(VAR_4->pb);
    FUNC_4(VAR_4->pb, 4 * 3);
    FUNC_4(VAR_4->pb, 2 * 3);
    FUNC_4(VAR_4->pb, 20);
    FUNC_4(VAR_4->pb, 64);

    VAR_8->codecpar->codec_id = FUNC_7(VAR_7, 0, 1, VAR_6);
    if (VAR_8->codecpar->codec_id == VAR_2) {
        FUNC_5(VAR_4, "Bps %d and sign %d", VAR_7, VAR_6);
        return VAR_0;
    }

    VAR_8->codecpar->block_align = VAR_7 * VAR_8->codecpar->channels / 8;

    FUNC_6(VAR_8, 64, 1, VAR_8->codecpar->sample_rate);
    return 0;
}
