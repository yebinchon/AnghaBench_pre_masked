
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef void* uint16_t ;
struct TYPE_11__ {int width; scalar_t__ codec_id; int codec_tag; int extradata_size; int height; int * extradata; } ;
struct TYPE_10__ {int key_frame; int * linesize; int ** data; int pict_type; } ;
struct TYPE_9__ {int size; scalar_t__ data; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char,char,int ,char) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,int ,char*) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_6 (int *,char*,int) ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_6, void *VAR_7, int *VAR_8,
                        AVPacket *VAR_9)
{
    int VAR_10, VAR_11, VAR_12;
    AVFrame *VAR_13 = VAR_7;
    const uint32_t *VAR_14 = (const uint32_t *)VAR_9->data;
    int VAR_15 = FUNC_0(VAR_6->width,
                                VAR_6->codec_id == VAR_2 ? 1 : 64);
    uint8_t *VAR_16, *VAR_17, *VAR_18;
    int VAR_19 = (VAR_6->codec_tag & 0xFFFFFF) == FUNC_1('r', '1', '0', 0);
    int VAR_20 = VAR_6->codec_tag == FUNC_1('R', '1', '0', 'k') &&
             VAR_6->extradata_size >= 12 && !FUNC_6(&VAR_6->extradata[4], "DpxE", 4) &&
             !VAR_6->extradata[11];

    if (VAR_9->size < 4 * VAR_15 * VAR_6->height) {
        FUNC_4(VAR_6, VAR_4, "packet too small\n");
        return VAR_0;
    }

    if ((VAR_12 = FUNC_5(VAR_6, VAR_13, 0)) < 0)
        return VAR_12;

    VAR_13->pict_type = VAR_5;
    VAR_13->key_frame = 1;
    VAR_16 = VAR_13->data[0];
    VAR_17 = VAR_13->data[1];
    VAR_18 = VAR_13->data[2];

    for (VAR_10 = 0; VAR_10 < VAR_6->height; VAR_10++) {
        uint16_t *VAR_21 = (uint16_t *)VAR_16;
        uint16_t *VAR_22 = (uint16_t *)VAR_17;
        uint16_t *VAR_23 = (uint16_t *)VAR_18;
        for (VAR_11 = 0; VAR_11 < VAR_6->width; VAR_11++) {
            uint32_t VAR_24;
            uint16_t VAR_25, VAR_26, VAR_27;
            if (VAR_6->codec_id == VAR_1 || VAR_19 || VAR_20) {
                VAR_24 = FUNC_3(*VAR_14++);
            } else {
                VAR_24 = FUNC_2(*VAR_14++);
            }
            if (VAR_6->codec_id == VAR_3) {
                VAR_27 = VAR_24 & 0x3ff;
                VAR_26 = (VAR_24 >> 10) & 0x3ff;
                VAR_25 = (VAR_24 >> 20) & 0x3ff;
            } else if (VAR_19) {
                VAR_25 = VAR_24 & 0x3ff;
                VAR_26 = (VAR_24 >> 10) & 0x3ff;
                VAR_27 = (VAR_24 >> 20) & 0x3ff;
            } else {
                VAR_27 = (VAR_24 >> 2) & 0x3ff;
                VAR_26 = (VAR_24 >> 12) & 0x3ff;
                VAR_25 = (VAR_24 >> 22) & 0x3ff;
            }
            *VAR_23++ = VAR_25;
            *VAR_21++ = VAR_26;
            *VAR_22++ = VAR_27;
        }
        VAR_14 += VAR_15 - VAR_6->width;
        VAR_16 += VAR_13->linesize[0];
        VAR_17 += VAR_13->linesize[1];
        VAR_18 += VAR_13->linesize[2];
    }

    *VAR_8 = 1;

    return VAR_9->size;
}
