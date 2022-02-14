
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint16_t ;
struct TYPE_11__ {int width; int* extradata; scalar_t__ pix_fmt; int height; } ;
struct TYPE_10__ {int key_frame; int interlaced_frame; int top_field_first; int** data; int* linesize; int pict_type; } ;
struct TYPE_9__ {int* data; int size; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (TYPE_3__*,int ,char*,int,int) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_3 (int*,int const*,int) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_4, void *VAR_5, int *VAR_6,
                      AVPacket *VAR_7)
{
    const uint8_t *VAR_8 = VAR_7->data;
    int VAR_9, VAR_10;
    int VAR_11, VAR_12;
    int VAR_13 = 2 * VAR_4->width;
    int VAR_14 = VAR_4->extradata[2*4];
    AVFrame *VAR_15 = VAR_5;

    if ((VAR_10 = FUNC_2(VAR_4, VAR_15, 0)) < 0)
        return VAR_10;
    VAR_15->pict_type = VAR_2;
    VAR_15->key_frame = 1;

    VAR_9 = FUNC_0(VAR_4->extradata + 5*4);

    if (VAR_4->pix_fmt == VAR_3)
        VAR_13 = (VAR_4->width + 15) / 16 * 40;

    if (VAR_9 < VAR_13 || VAR_7->size < VAR_9 * (uint64_t)VAR_4->height) {
        FUNC_1(VAR_4, VAR_1, "stride (%d) is invalid for packet sized %d\n",
               VAR_9, VAR_7->size);
        return VAR_0;
    }

    VAR_15->interlaced_frame = ((VAR_4->extradata[3*4] & 3) != 3);
    if (VAR_15->interlaced_frame)
        VAR_15->top_field_first = VAR_4->extradata[3*4] & 1;

    for (VAR_12 = 0; VAR_12 < VAR_4->height; VAR_12++) {
        int VAR_16 = VAR_12;
        if (VAR_15->interlaced_frame)
            VAR_16 = ((VAR_12&1)^VAR_15->top_field_first) ? VAR_12/2 : (VAR_12/2 + VAR_4->height/2);
        if (VAR_14 == 8) {
            uint8_t *VAR_17 = VAR_15->data[0] + VAR_12*VAR_15->linesize[0];
            FUNC_3(VAR_17, VAR_8 + VAR_16*VAR_9, 2*VAR_4->width);
        } else {
            int VAR_18;
            uint16_t *VAR_19 = (uint16_t*)&VAR_15->data[0][VAR_12*VAR_15->linesize[0]];
            uint16_t *VAR_20 = (uint16_t*)&VAR_15->data[1][VAR_12*VAR_15->linesize[1]];
            uint16_t *VAR_21 = (uint16_t*)&VAR_15->data[2][VAR_12*VAR_15->linesize[2]];
            for (VAR_18 = 0; 16*VAR_18 < VAR_4->width; VAR_18 ++) {
                const uint8_t *VAR_22 = VAR_8 + VAR_16*VAR_9 + 40*VAR_18;
                for (VAR_11 = 0; VAR_11 < 16 && VAR_11 + 16*VAR_18 < VAR_4->width; VAR_11++) {
                    int VAR_23 = VAR_11 + 16*VAR_18;
                    if (VAR_11&1) {
                        VAR_19 [VAR_23] = (4*VAR_22[2*VAR_11 + 0]) + ((VAR_22[32 + (VAR_11>>1)]>>4)&3);
                    } else {
                        VAR_19 [VAR_23] = (4*VAR_22[2*VAR_11 + 0]) + (VAR_22[32 + (VAR_11>>1)] &3);
                        VAR_20[VAR_23>>1] = (4*VAR_22[2*VAR_11 + 1]) + ((VAR_22[32 + (VAR_11>>1)]>>2)&3);
                        VAR_21[VAR_23>>1] = (4*VAR_22[2*VAR_11 + 3]) + (VAR_22[32 + (VAR_11>>1)]>>6);
                    }
                }
            }
        }
    }

    *VAR_6 = 1;
    return VAR_7->size;
}
