
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct oggvorbis_private {int** packet; int* len; scalar_t__ vp; } ;
struct ogg_stream {int* buf; size_t pstart; int psize; struct oggvorbis_private* private; } ;
struct ogg {struct ogg_stream* streams; } ;
struct TYPE_12__ {TYPE_2__** streams; struct ogg* priv_data; } ;
struct TYPE_11__ {TYPE_1__* codecpar; int metadata; } ;
struct TYPE_10__ {int channels; int sample_rate; int extradata_size; int extradata; int codec_id; int codec_type; void* bit_rate; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*,int ) ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*,int ,char*) ;
 void* FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ,int) ;
 int FUNC_7 (TYPE_2__*,int,int,int) ;
 int FUNC_8 (int const**) ;
 void* FUNC_9 (int const**) ;
 int FUNC_10 (TYPE_2__*,int ) ;
 int FUNC_11 (TYPE_3__*,struct oggvorbis_private*,int *) ;
 int FUNC_12 (int*,int*,int) ;
 scalar_t__ FUNC_13 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_14(AVFormatContext *VAR_7, int VAR_8)
{
    struct ogg *VAR_9 = VAR_7->priv_data;
    AVStream *VAR_10 = VAR_7->streams[VAR_8];
    struct ogg_stream *VAR_11 = VAR_9->streams + VAR_8;
    struct oggvorbis_private *VAR_12;
    int VAR_13 = VAR_11->buf[VAR_11->pstart];

    if (!VAR_11->private) {
        VAR_11->private = FUNC_5(sizeof(struct oggvorbis_private));
        if (!VAR_11->private)
            return FUNC_0(VAR_6);
    }

    VAR_12 = VAR_11->private;

    if (!(VAR_13 & 1))
        return VAR_12->vp ? 0 : VAR_0;

    if (VAR_11->psize < 1 || VAR_13 > 5)
        return VAR_0;

    if (VAR_12->packet[VAR_13 >> 1])
        return VAR_0;
    if (VAR_13 > 1 && !VAR_12->packet[0] || VAR_13 > 3 && !VAR_12->packet[1])
        return VAR_12->vp ? 0 : VAR_0;

    VAR_12->len[VAR_13 >> 1] = VAR_11->psize;
    VAR_12->packet[VAR_13 >> 1] = FUNC_5(VAR_11->psize);
    if (!VAR_12->packet[VAR_13 >> 1])
        return FUNC_0(VAR_6);
    FUNC_12(VAR_12->packet[VAR_13 >> 1], VAR_11->buf + VAR_11->pstart, VAR_11->psize);
    if (VAR_11->buf[VAR_11->pstart] == 1) {
        const uint8_t *VAR_14 = VAR_11->buf + VAR_11->pstart + 7;
        unsigned VAR_15, VAR_16, VAR_17;
        int VAR_18;
        int VAR_19;

        if (VAR_11->psize != 30)
            return VAR_0;

        if (FUNC_9(&VAR_14) != 0)
            return VAR_0;

        VAR_19 = FUNC_8(&VAR_14);
        if (VAR_10->codecpar->channels && VAR_19 != VAR_10->codecpar->channels) {
            FUNC_4(VAR_7, VAR_5, "Channel change is not supported\n");
            return VAR_1;
        }
        VAR_10->codecpar->channels = VAR_19;
        VAR_18 = FUNC_9(&VAR_14);
        VAR_14 += 4;
        VAR_10->codecpar->bit_rate = FUNC_9(&VAR_14);
        VAR_14 += 4;

        VAR_15 = FUNC_8(&VAR_14);
        VAR_16 = VAR_15 & 15;
        VAR_17 = VAR_15 >> 4;

        if (VAR_16 > VAR_17)
            return VAR_0;
        if (VAR_16 < 6 || VAR_17 > 13)
            return VAR_0;

        if (FUNC_8(&VAR_14) != 1)
            return VAR_0;

        VAR_10->codecpar->codec_type = VAR_3;
        VAR_10->codecpar->codec_id = VAR_4;

        if (VAR_18 > 0) {
            VAR_10->codecpar->sample_rate = VAR_18;
            FUNC_7(VAR_10, 64, 1, VAR_18);
        }
    } else if (VAR_11->buf[VAR_11->pstart] == 3) {
        if (FUNC_13(VAR_7, VAR_8) >= 0 && VAR_12->len[1] > 10) {
            unsigned VAR_20;

            int VAR_21 = FUNC_10(VAR_10, VAR_10->metadata);
            if (VAR_21 < 0)
                return VAR_21;


            VAR_20 = 7 + 4 + FUNC_1(VAR_12->packet[1] + 7) + 4 + 1;
            if (VAR_20 >= 16 && VAR_20 < VAR_11->psize) {
                FUNC_2(VAR_12->packet[1] + VAR_20 - 5, 0);
                VAR_12->packet[1][VAR_20 - 1] = 1;
                VAR_12->len[1] = VAR_20;
            }
        }
    } else {
        int VAR_22 = FUNC_11(VAR_7, VAR_12, &VAR_10->codecpar->extradata);
        if (VAR_22 < 0) {
            VAR_10->codecpar->extradata_size = 0;
            return VAR_22;
        }
        VAR_10->codecpar->extradata_size = VAR_22;

        VAR_12->vp = FUNC_6(VAR_10->codecpar->extradata, VAR_10->codecpar->extradata_size);
        if (!VAR_12->vp) {
            FUNC_3(&VAR_10->codecpar->extradata);
            VAR_10->codecpar->extradata_size = 0;
            return VAR_2;
        }
    }

    return 1;
}
