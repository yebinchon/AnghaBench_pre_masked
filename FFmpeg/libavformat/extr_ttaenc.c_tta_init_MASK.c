
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* codecpar; } ;
struct TYPE_9__ {scalar_t__ codec_id; int extradata_size; int sample_rate; scalar_t__ extradata; } ;
struct TYPE_8__ {int nb_streams; TYPE_5__** streams; TYPE_1__* priv_data; } ;
struct TYPE_7__ {int frame_size; } ;
typedef TYPE_1__ TTAMuxContext ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ AVCodecParameters ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 int FUNC_2 (TYPE_5__*,int,int,int) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_4)
{
    TTAMuxContext *VAR_5 = VAR_4->priv_data;
    AVCodecParameters *VAR_6;

    if (VAR_4->nb_streams != 1) {
        FUNC_1(VAR_4, VAR_2, "Only one stream is supported\n");
        return FUNC_0(VAR_3);
    }
    VAR_6 = VAR_4->streams[0]->codecpar;

    if (VAR_6->codec_id != VAR_1) {
        FUNC_1(VAR_4, VAR_2, "Unsupported codec\n");
        return FUNC_0(VAR_3);
    }
    if (VAR_6->extradata && VAR_6->extradata_size < 22) {
        FUNC_1(VAR_4, VAR_2, "Invalid TTA extradata\n");
        return VAR_0;
    }


    if (VAR_6->sample_rate > 0x7FFFFFu) {
        FUNC_1(VAR_4, VAR_2, "Sample rate too large\n");
        return FUNC_0(VAR_3);
    }
    VAR_5->frame_size = VAR_6->sample_rate * 256 / 245;
    FUNC_2(VAR_4->streams[0], 64, 1, VAR_6->sample_rate);

    return 0;
}
