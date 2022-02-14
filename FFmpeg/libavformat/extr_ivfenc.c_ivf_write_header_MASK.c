
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ codec_type; scalar_t__ codec_id; int width; int height; } ;
struct TYPE_9__ {int nb_streams; TYPE_2__** streams; int * pb; } ;
struct TYPE_7__ {int num; int den; } ;
struct TYPE_8__ {TYPE_1__ time_base; TYPE_4__* codecpar; } ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVCodecParameters ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_3__*,int ,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,char*,int) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_6)
{
    AVCodecParameters *VAR_7;
    AVIOContext *VAR_8 = VAR_6->pb;

    if (VAR_6->nb_streams != 1) {
        FUNC_2(VAR_6, VAR_4, "Format supports only exactly one video stream\n");
        return FUNC_0(VAR_5);
    }
    VAR_7 = VAR_6->streams[0]->codecpar;
    if (VAR_7->codec_type != VAR_0 ||
        !(VAR_7->codec_id == VAR_1 ||
          VAR_7->codec_id == VAR_2 ||
          VAR_7->codec_id == VAR_3)) {
        FUNC_2(VAR_6, VAR_4, "Currently only VP8, VP9 and AV1 are supported!\n");
        return FUNC_0(VAR_5);
    }
    FUNC_6(VAR_8, "DKIF", 4);
    FUNC_3(VAR_8, 0);
    FUNC_3(VAR_8, 32);
    FUNC_4(VAR_8,
              VAR_7->codec_id == VAR_3 ? FUNC_1("VP90") :
              VAR_7->codec_id == VAR_2 ? FUNC_1("VP80") : FUNC_1("AV01"));
    FUNC_3(VAR_8, VAR_7->width);
    FUNC_3(VAR_8, VAR_7->height);
    FUNC_4(VAR_8, VAR_6->streams[0]->time_base.den);
    FUNC_4(VAR_8, VAR_6->streams[0]->time_base.num);
    FUNC_5(VAR_8, 0xFFFFFFFFFFFFFFFFULL);

    return 0;
}
