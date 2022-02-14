
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
struct ogg_stream {int psize; int* buf; size_t pstart; TYPE_3__* private; } ;
struct ogg {struct ogg_stream* streams; } ;
struct TYPE_15__ {int version; int gpshift; unsigned int gpmask; } ;
typedef TYPE_3__ TheoraParams ;
struct TYPE_18__ {TYPE_4__** streams; struct ogg* priv_data; } ;
struct TYPE_17__ {int den; int num; } ;
struct TYPE_13__ {void* den; void* num; } ;
struct TYPE_16__ {TYPE_2__* codecpar; int need_parsing; TYPE_1__ sample_aspect_ratio; } ;
struct TYPE_14__ {int extradata_size; int width; int height; int * extradata; int codec_id; int codec_type; } ;
typedef int GetBitContext ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVRational ;
typedef TYPE_6__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_6__*,int ,char*,...) ;
 TYPE_3__* FUNC_2 (int) ;
 int FUNC_3 (int **,scalar_t__) ;
 int FUNC_4 (TYPE_4__*,int,int,int) ;
 int FUNC_5 (TYPE_6__*,TYPE_4__*,int*,int) ;
 int FUNC_6 (int *,int) ;
 void* FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int*,int) ;
 int FUNC_9 (int *,int*,int) ;
 int FUNC_10 (int *,int ,scalar_t__) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;

__attribute__((used)) static int FUNC_13(AVFormatContext *VAR_9, int VAR_10)
{
    struct ogg *VAR_11 = VAR_9->priv_data;
    struct ogg_stream *VAR_12 = VAR_11->streams + VAR_10;
    AVStream *VAR_13 = VAR_9->streams[VAR_10];
    TheoraParams *VAR_14 = VAR_12->private;
    int VAR_15 = VAR_13->codecpar->extradata_size + VAR_12->psize + 2;
    int VAR_16;
    uint8_t *VAR_17;

    if (!(VAR_12->buf[VAR_12->pstart] & 0x80))
        return 0;

    if (!VAR_14) {
        VAR_14 = FUNC_2(sizeof(*VAR_14));
        if (!VAR_14)
            return FUNC_0(VAR_7);
        VAR_12->private = VAR_14;
    }

    switch (VAR_12->buf[VAR_12->pstart]) {
    case 0x80: {
        GetBitContext VAR_18;
        AVRational VAR_19;

        FUNC_8(&VAR_18, VAR_12->buf + VAR_12->pstart, VAR_12->psize * 8);


        FUNC_12(&VAR_18, 7 * 8);

        VAR_14->version = FUNC_7(&VAR_18, 24);
        if (VAR_14->version < 0x030100) {
            FUNC_1(VAR_9, VAR_5,
                   "Too old or unsupported Theora (%x)\n", VAR_14->version);
            return FUNC_0(VAR_8);
        }

        VAR_13->codecpar->width = FUNC_6(&VAR_18, 16) << 4;
        VAR_13->codecpar->height = FUNC_6(&VAR_18, 16) << 4;

        if (VAR_14->version >= 0x030400)
            FUNC_11(&VAR_18, 100);

        if (VAR_14->version >= 0x030200) {
            int VAR_20 = FUNC_7(&VAR_18, 24);
            int VAR_21 = FUNC_7(&VAR_18, 24);
            if (VAR_20 <= VAR_13->codecpar->width && VAR_20 > VAR_13->codecpar->width - 16 &&
                VAR_21 <= VAR_13->codecpar->height && VAR_21 > VAR_13->codecpar->height - 16) {
                VAR_13->codecpar->width = VAR_20;
                VAR_13->codecpar->height = VAR_21;
            }

            FUNC_11(&VAR_18, 16);
        }

        VAR_19.den = FUNC_7(&VAR_18, 32);
        VAR_19.num = FUNC_7(&VAR_18, 32);
        if (!(VAR_19.num > 0 && VAR_19.den > 0)) {
            FUNC_1(VAR_9, VAR_6, "Invalid time base in theora stream, assuming 25 FPS\n");
            VAR_19.num = 1;
            VAR_19.den = 25;
        }
        FUNC_4(VAR_13, 64, VAR_19.num, VAR_19.den);

        VAR_13->sample_aspect_ratio.num = FUNC_7(&VAR_18, 24);
        VAR_13->sample_aspect_ratio.den = FUNC_7(&VAR_18, 24);

        if (VAR_14->version >= 0x030200)
            FUNC_12(&VAR_18, 38);
        if (VAR_14->version >= 0x304000)
            FUNC_11(&VAR_18, 2);

        VAR_14->gpshift = FUNC_6(&VAR_18, 5);
        VAR_14->gpmask = (1U << VAR_14->gpshift) - 1;

        VAR_13->codecpar->codec_type = VAR_1;
        VAR_13->codecpar->codec_id = VAR_3;
        VAR_13->need_parsing = VAR_2;
    }
    break;
    case 0x81:
        FUNC_5(VAR_9, VAR_13, VAR_12->buf + VAR_12->pstart + 7, VAR_12->psize - 7);
    case 0x82:
        if (!VAR_14->version)
            return VAR_0;
        break;
    default:
        FUNC_1(VAR_9, VAR_5, "Unknown header type %X\n", VAR_12->buf[VAR_12->pstart]);
        return VAR_0;
    }

    if ((VAR_16 = FUNC_3(&VAR_13->codecpar->extradata,
                           VAR_15 + VAR_4)) < 0) {
        VAR_13->codecpar->extradata_size = 0;
        return VAR_16;
    }
    FUNC_10(VAR_13->codecpar->extradata + VAR_15, 0, VAR_4);

    VAR_17 = VAR_13->codecpar->extradata + VAR_13->codecpar->extradata_size;
    *VAR_17++ = VAR_12->psize >> 8;
    *VAR_17++ = VAR_12->psize & 0xff;
    FUNC_9(VAR_17, VAR_12->buf + VAR_12->pstart, VAR_12->psize);
    VAR_13->codecpar->extradata_size = VAR_15;

    return 1;
}
