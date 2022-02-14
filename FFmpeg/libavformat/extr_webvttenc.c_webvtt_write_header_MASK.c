
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ codec_id; } ;
struct TYPE_8__ {int nb_streams; int * pb; TYPE_1__** streams; } ;
struct TYPE_7__ {TYPE_3__* codecpar; } ;
typedef TYPE_1__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ AVCodecParameters ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (TYPE_1__*,int,int,int) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_3)
{
    AVStream *VAR_4 = VAR_3->streams[0];
    AVCodecParameters *VAR_5 = VAR_3->streams[0]->codecpar;
    AVIOContext *VAR_6 = VAR_3->pb;

    if (VAR_3->nb_streams != 1 || VAR_5->codec_id != VAR_0) {
        FUNC_1(VAR_3, VAR_1, "Exactly one WebVTT stream is needed.\n");
        return FUNC_0(VAR_2);
    }

    FUNC_4(VAR_4, 64, 1, 1000);

    FUNC_3(VAR_6, "WEBVTT\n");
    FUNC_2(VAR_6);

    return 0;
}
