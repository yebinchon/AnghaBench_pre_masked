
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int pb; } ;
struct TYPE_8__ {TYPE_1__* codecpar; } ;
struct TYPE_7__ {int channels; int block_align; int codec_id; int sample_rate; int codec_type; } ;
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
 TYPE_2__* FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_7)
{
    AVStream *VAR_8;
    int VAR_9, VAR_10;

    FUNC_5(VAR_7->pb, 4);
    while (!FUNC_2(VAR_7->pb)) {
        if (FUNC_3(VAR_7->pb) == 0x1a)
            break;
    }
    if (FUNC_3(VAR_7->pb) != 1)
        return VAR_0;
    VAR_10 = FUNC_3(VAR_7->pb);
    FUNC_5(VAR_7->pb, VAR_10);
    FUNC_5(VAR_7->pb, 4);
    VAR_9 = FUNC_3(VAR_7->pb);

    VAR_8 = FUNC_1(VAR_7, ((void*)0));
    if (!VAR_8)
        return FUNC_0(VAR_6);

    VAR_8->codecpar->codec_type = VAR_1;
    VAR_8->codecpar->channels = 1;
    VAR_8->codecpar->sample_rate = FUNC_4(VAR_7->pb);
    switch (VAR_9) {
    case 8:
        VAR_8->codecpar->codec_id = VAR_5;
        break;
    case 16:
        VAR_8->codecpar->codec_id = VAR_2;
        break;
    case 24:
        VAR_8->codecpar->codec_id = VAR_3;
        break;
    case 32:
        VAR_8->codecpar->codec_id = VAR_4;
        break;
    default:
        return VAR_0;
    }
    FUNC_5(VAR_7->pb, 16);
    VAR_8->codecpar->block_align = VAR_9 / 8;

    return 0;
}
