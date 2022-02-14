
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int pb; } ;
struct TYPE_9__ {TYPE_1__* codecpar; int need_parsing; } ;
struct TYPE_8__ {int width; int height; int channels; int sample_rate; int codec_id; int codec_type; } ;
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
 TYPE_2__* FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (TYPE_2__*,int,int,int) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_8)
{
    AVStream *VAR_9, *VAR_10;

    VAR_10 = FUNC_1(VAR_8, 0);
    if (!VAR_10)
        return FUNC_0(VAR_5);

    VAR_9 = FUNC_1(VAR_8, 0);
    if (!VAR_9)
        return FUNC_0(VAR_5);

    FUNC_4(VAR_8->pb, 20);
    FUNC_5(VAR_9, 64, 1, FUNC_2(VAR_8->pb));
    VAR_9->codecpar->codec_type = VAR_1;
    VAR_9->codecpar->width = FUNC_2(VAR_8->pb);
    VAR_9->codecpar->height = FUNC_2(VAR_8->pb);
    VAR_9->codecpar->codec_id = VAR_3;
    VAR_9->need_parsing = VAR_2;

    VAR_10->codecpar->codec_type = VAR_0;
    VAR_10->codecpar->channels = 1;
    VAR_10->codecpar->sample_rate = 8000;
    VAR_10->codecpar->codec_id = VAR_4;
    FUNC_5(VAR_10, 64, 1, 8000);

    FUNC_3(VAR_8->pb, VAR_6, VAR_7);

    return 0;
}
