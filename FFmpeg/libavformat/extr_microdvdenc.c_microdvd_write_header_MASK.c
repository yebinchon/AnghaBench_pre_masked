
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct AVFormatContext {int nb_streams; TYPE_3__** streams; int pb; } ;
struct TYPE_4__ {int den; int num; } ;
struct TYPE_6__ {TYPE_1__ avg_frame_rate; TYPE_2__* codecpar; } ;
struct TYPE_5__ {scalar_t__ codec_id; char* extradata; int extradata_size; } ;
typedef TYPE_1__ AVRational ;
typedef TYPE_2__ AVCodecParameters ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct AVFormatContext*,int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (TYPE_3__*,int,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct AVFormatContext *VAR_2)
{
    AVCodecParameters *VAR_3 = VAR_2->streams[0]->codecpar;
    AVRational VAR_4 = VAR_2->streams[0]->avg_frame_rate;

    if (VAR_2->nb_streams != 1 || VAR_3->codec_id != VAR_0) {
        FUNC_0(VAR_2, VAR_1, "Exactly one MicroDVD stream is needed.\n");
        return -1;
    }

    if (VAR_3->extradata && VAR_3->extradata_size > 0) {
        FUNC_2(VAR_2->pb, "{DEFAULT}{}", 11);
        FUNC_2(VAR_2->pb, VAR_3->extradata, VAR_3->extradata_size);
        FUNC_1(VAR_2->pb);
    }

    FUNC_3(VAR_2->streams[0], 64, VAR_4.num, VAR_4.den);
    return 0;
}
