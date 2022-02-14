
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct oggopus_private {int need_comments; int pre_skip; } ;
struct ogg_stream {int pstart; int flags; int psize; struct oggopus_private* private; int * buf; } ;
struct ogg {struct ogg_stream* streams; } ;
struct TYPE_10__ {int channels; int sample_rate; int seek_preroll; int extradata; int initial_padding; int codec_id; int codec_type; } ;
struct TYPE_9__ {TYPE_1__** streams; struct ogg* priv_data; } ;
struct TYPE_8__ {TYPE_6__* codecpar; } ;
typedef TYPE_1__ AVStream ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 struct oggopus_private* FUNC_4 (int) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (TYPE_1__*,int,int,int) ;
 scalar_t__ FUNC_7 (TYPE_6__*,int) ;
 int FUNC_8 (TYPE_2__*,TYPE_1__*,int *,int) ;
 scalar_t__ FUNC_9 (int *,char*,int) ;
 int FUNC_10 (int ,int *,int) ;

__attribute__((used)) static int FUNC_11(AVFormatContext *VAR_7, int VAR_8)
{
    struct ogg *VAR_9 = VAR_7->priv_data;
    struct ogg_stream *VAR_10 = &VAR_9->streams[VAR_8];
    AVStream *VAR_11 = VAR_7->streams[VAR_8];
    struct oggopus_private *VAR_12 = VAR_10->private;
    uint8_t *VAR_13 = VAR_10->buf + VAR_10->pstart;

    if (!VAR_12) {
        VAR_12 = VAR_10->private = FUNC_4(sizeof(*VAR_12));
        if (!VAR_12)
            return FUNC_0(VAR_3);
    }

    if (VAR_10->flags & VAR_4) {
        if (VAR_10->psize < VAR_5 || (FUNC_2(VAR_13 + 8) & 0xF0) != 0)
            return VAR_0;
        VAR_11->codecpar->codec_type = VAR_1;
        VAR_11->codecpar->codec_id = VAR_2;
        VAR_11->codecpar->channels = FUNC_2(VAR_13 + 9);

        VAR_12->pre_skip = FUNC_1(VAR_13 + 10);
        VAR_11->codecpar->initial_padding = VAR_12->pre_skip;




        FUNC_3(&VAR_11->codecpar->extradata);
        if (FUNC_7(VAR_11->codecpar, VAR_10->psize))
            return FUNC_0(VAR_3);

        FUNC_10(VAR_11->codecpar->extradata, VAR_13, VAR_10->psize);

        VAR_11->codecpar->sample_rate = 48000;
        VAR_11->codecpar->seek_preroll = FUNC_5(VAR_6,
                                                VAR_11->codecpar->sample_rate, 1000);
        FUNC_6(VAR_11, 64, 1, 48000);
        VAR_12->need_comments = 1;
        return 1;
    }

    if (VAR_12->need_comments) {
        if (VAR_10->psize < 8 || FUNC_9(VAR_13, "OpusTags", 8))
            return VAR_0;
        FUNC_8(VAR_7, VAR_11, VAR_13 + 8, VAR_10->psize - 8);
        VAR_12->need_comments--;
        return 1;
    }

    return 0;
}
