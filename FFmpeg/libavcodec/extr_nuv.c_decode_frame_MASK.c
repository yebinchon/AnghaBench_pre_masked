
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_19__ {char** data; int* linesize; int key_frame; int pict_type; } ;
struct TYPE_18__ {int height; int frame_number; TYPE_1__* priv_data; } ;
struct TYPE_17__ {char* data; int size; } ;
struct TYPE_16__ {int width; int height; int decomp_size; char* decomp_buf; TYPE_6__* pic; int rtj; scalar_t__ codec_frameheader; int cq; int lq; } ;
typedef TYPE_1__ NuvContext ;
typedef TYPE_2__ AVPacket ;
typedef int AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_3__*,int ,char*) ;
 scalar_t__ FUNC_5 (char*,int*,char const*,int*) ;
 int FUNC_6 (TYPE_3__*,int,int,int) ;
 int FUNC_7 (TYPE_6__*,char const*,int,int) ;
 int FUNC_8 (TYPE_3__*,TYPE_6__*,int) ;
 int FUNC_9 (int *,TYPE_6__*,char const*,int) ;
 int FUNC_10 (int *,int,int,int ,int ) ;
 int FUNC_11 (TYPE_3__*,TYPE_1__*,char const*,int) ;
 int FUNC_12 (char*,int,int) ;

__attribute__((used)) static int FUNC_13(AVCodecContext *VAR_8, void *VAR_9, int *VAR_10,
                        AVPacket *VAR_11)
{
    const uint8_t *VAR_12 = VAR_11->data;
    int VAR_13 = VAR_11->size;
    NuvContext *VAR_14 = VAR_8->priv_data;
    AVFrame *VAR_15 = VAR_9;
    int VAR_16 = VAR_13;
    int VAR_17, VAR_18;
    int VAR_19 = 0;
    int VAR_20 = 0;
    int VAR_21 = 0;
    int VAR_22, VAR_23 = !VAR_8->frame_number;
    enum {
        NUV_UNCOMPRESSED = '0',
        NUV_RTJPEG = '1',
        NUV_RTJPEG_IN_LZO = '2',
        NUV_LZO = '3',
        NUV_BLACK = 'N',
        NUV_COPY_LAST = 'L'
    } VAR_24;

    if (VAR_13 < 12) {
        FUNC_4(VAR_8, VAR_2, "coded frame too small\n");
        return VAR_0;
    }


    if (VAR_12[0] == 'D' && VAR_12[1] == 'R') {
        int VAR_25;

        VAR_12 = &VAR_12[12];
        VAR_13 -= 12;
        VAR_25 = FUNC_11(VAR_8, VAR_14, VAR_12, VAR_13);
        if (VAR_25 < 0)
            return VAR_25;
        FUNC_10(&VAR_14->rtj, VAR_14->width, VAR_14->height, VAR_14->lq, VAR_14->cq);
        return VAR_16;
    }

    if (VAR_13 < 12 || VAR_12[0] != 'V') {
        FUNC_4(VAR_8, VAR_2, "not a nuv video frame\n");
        return VAR_0;
    }
    VAR_24 = VAR_12[1];
    switch (VAR_24) {
    case NUV_RTJPEG_IN_LZO:
    case NUV_RTJPEG:
        VAR_17 = !VAR_12[2];
        if (VAR_14->width < 16 || VAR_14->height < 16) {
            return VAR_0;
        }
        break;
    case NUV_COPY_LAST:
        VAR_21 |= VAR_6;
        VAR_17 = 0;
        break;
    default:
        VAR_17 = 1;
        break;
    }
    switch (VAR_24) {
    case NUV_UNCOMPRESSED:
        VAR_20 = VAR_14->width * VAR_14->height * 3 / 2;
        break;
    case NUV_RTJPEG:
        VAR_20 = VAR_14->width/16 * (VAR_14->height/16) * 6;
        break;
    }
    if (VAR_13 < VAR_20 / 4)
        return VAR_0;
retry:

    VAR_12 = &VAR_12[12];
    VAR_13 -= 12;
    if (VAR_24 == NUV_RTJPEG_IN_LZO || VAR_24 == NUV_LZO) {
        int VAR_26 = VAR_14->decomp_size - FUNC_1(VAR_1, VAR_3);
        int VAR_27 = VAR_13;
        if (FUNC_5(VAR_14->decomp_buf, &VAR_26, VAR_12, &VAR_27)) {
            FUNC_4(VAR_8, VAR_2, "error during lzo decompression\n");
            return VAR_0;
        }
        VAR_12 = VAR_14->decomp_buf;
        VAR_13 = VAR_14->decomp_size - FUNC_1(VAR_1, VAR_3) - VAR_26;
        FUNC_12(VAR_14->decomp_buf + VAR_13, 0, VAR_1);
    }
    if (VAR_14->codec_frameheader) {
        int VAR_28, VAR_29, VAR_30;
        if (VAR_13 < VAR_7) {
            FUNC_4(VAR_8, VAR_2, "Too small NUV video frame\n");
            return VAR_0;
        }



        if (VAR_12[0] != 'V' && FUNC_0(&VAR_12[4]) != 0x000c) {
            FUNC_4(VAR_8, VAR_2, "Unknown secondary frame header (wrong codec_tag?)\n");
            return VAR_0;
        }
        VAR_28 = FUNC_0(&VAR_12[6]);
        VAR_29 = FUNC_0(&VAR_12[8]);
        VAR_30 = VAR_12[10];
        if ((VAR_22 = FUNC_6(VAR_8, VAR_28, VAR_29, VAR_30)) < 0)
            return VAR_22;
        if (VAR_22) {
            VAR_12 = VAR_11->data;
            VAR_13 = VAR_11->size;
            VAR_19 = 1;
            goto retry;
        }
        VAR_12 = &VAR_12[VAR_7];
        VAR_13 -= VAR_7;
    }

    if (VAR_19 || VAR_17) {
        FUNC_3(VAR_14->pic);
        VAR_23 = 1;
    }

    if ((VAR_22 = FUNC_8(VAR_8, VAR_14->pic, VAR_21)) < 0)
        return VAR_22;
    if (VAR_23) {
        FUNC_12(VAR_14->pic->data[0], 0, VAR_8->height * VAR_14->pic->linesize[0]);
        FUNC_12(VAR_14->pic->data[1], 0x80, VAR_8->height * VAR_14->pic->linesize[1] / 2);
        FUNC_12(VAR_14->pic->data[2], 0x80, VAR_8->height * VAR_14->pic->linesize[2] / 2);
    }

    VAR_14->pic->pict_type = VAR_17 ? VAR_4 : VAR_5;
    VAR_14->pic->key_frame = VAR_17;

    switch (VAR_24) {
    case NUV_LZO:
    case NUV_UNCOMPRESSED: {
        int VAR_31 = VAR_14->height;
        if (VAR_13 < VAR_14->width * VAR_31 * 3 / 2) {
            FUNC_4(VAR_8, VAR_2, "uncompressed frame too short\n");
            VAR_31 = VAR_13 / VAR_14->width / 3 * 2;
        }
        if(VAR_31 > 0)
            FUNC_7(VAR_14->pic, VAR_12, VAR_14->width, VAR_31);
        break;
    }
    case NUV_RTJPEG_IN_LZO:
    case NUV_RTJPEG:
        VAR_18 = FUNC_9(&VAR_14->rtj, VAR_14->pic, VAR_12, VAR_13);
        if (VAR_18 < 0)
            return VAR_18;
        break;
    case NUV_BLACK:
        FUNC_12(VAR_14->pic->data[0], 0, VAR_14->width * VAR_14->height);
        FUNC_12(VAR_14->pic->data[1], 128, VAR_14->width * VAR_14->height / 4);
        FUNC_12(VAR_14->pic->data[2], 128, VAR_14->width * VAR_14->height / 4);
        break;
    case NUV_COPY_LAST:

        break;
    default:
        FUNC_4(VAR_8, VAR_2, "unknown compression\n");
        return VAR_0;
    }

    if ((VAR_22 = FUNC_2(VAR_15, VAR_14->pic)) < 0)
        return VAR_22;

    *VAR_10 = 1;
    return VAR_16;
}
