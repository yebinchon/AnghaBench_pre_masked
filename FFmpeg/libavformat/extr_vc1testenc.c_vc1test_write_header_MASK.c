
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int den; int num; } ;
struct TYPE_10__ {TYPE_1__ avg_frame_rate; TYPE_3__* codecpar; } ;
struct TYPE_9__ {scalar_t__ codec_id; int height; int width; int extradata; } ;
struct TYPE_8__ {TYPE_5__** streams; int * pb; } ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ AVCodecParameters ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (TYPE_5__*,int,int,int) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_2)
{
    AVCodecParameters *VAR_3 = VAR_2->streams[0]->codecpar;
    AVIOContext *VAR_4 = VAR_2->pb;

    if (VAR_3->codec_id != VAR_0) {
        FUNC_0(VAR_2, VAR_1, "Only WMV3 is accepted!\n");
        return -1;
    }
    FUNC_2(VAR_4, 0);
    FUNC_1(VAR_4, 0xC5);
    FUNC_3(VAR_4, 4);
    FUNC_4(VAR_4, VAR_3->extradata, 4);
    FUNC_3(VAR_4, VAR_3->height);
    FUNC_3(VAR_4, VAR_3->width);
    FUNC_3(VAR_4, 0xC);
    FUNC_2(VAR_4, 0);
    FUNC_1(VAR_4, 0x80);
    FUNC_3(VAR_4, 0);
    if (VAR_2->streams[0]->avg_frame_rate.den && VAR_2->streams[0]->avg_frame_rate.num == 1)
        FUNC_3(VAR_4, VAR_2->streams[0]->avg_frame_rate.den);
    else
        FUNC_3(VAR_4, 0xFFFFFFFF);
    FUNC_5(VAR_2->streams[0], 32, 1, 1000);

    return 0;
}
