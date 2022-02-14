
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef char uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_11__ {int custom_stride; int stride_warning_shown; int aligned_input; int (* unpack_frame ) (int const*,int *,int *,int *,int) ;} ;
typedef TYPE_1__ V210DecContext ;
struct TYPE_14__ {int width; int height; scalar_t__ codec_tag; scalar_t__ field_order; TYPE_1__* priv_data; } ;
struct TYPE_13__ {int key_frame; int* linesize; int interlaced_frame; int top_field_first; int pict_type; scalar_t__* data; } ;
struct TYPE_12__ {char* data; int size; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char,char,char,int ) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*,int ,char*) ;
 int FUNC_5 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int const*,int *,int *,int *,int) ;

__attribute__((used)) static int FUNC_8(AVCodecContext *VAR_7, void *VAR_8, int *VAR_9,
                        AVPacket *VAR_10)
{
    V210DecContext *VAR_11 = VAR_7->priv_data;

    int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
    AVFrame *VAR_17 = VAR_8;
    const uint8_t *VAR_18 = VAR_10->data;
    uint16_t *VAR_19, *VAR_20, *VAR_21;

    if (VAR_11->custom_stride )
        VAR_15 = VAR_11->custom_stride;
    else {
        int VAR_22 = ((VAR_7->width + 47) / 48) * 48;
        VAR_15 = VAR_22 * 8 / 3;
    }

    if (VAR_10->size < VAR_15 * VAR_7->height) {
        if ((((VAR_7->width + 23) / 24) * 24 * 8) / 3 * VAR_7->height == VAR_10->size) {
            VAR_15 = VAR_10->size / VAR_7->height;
            if (!VAR_11->stride_warning_shown)
                FUNC_4(VAR_7, VAR_5, "Broken v210 with too small padding (64 byte) detected\n");
            VAR_11->stride_warning_shown = 1;
        } else {
            FUNC_4(VAR_7, VAR_4, "packet too small\n");
            return VAR_0;
        }
    }
    if ( VAR_7->codec_tag == FUNC_1('C', '2', '1', '0')
        && VAR_10->size > 64
        && FUNC_0(VAR_18) == FUNC_0("INFO")
        && VAR_10->size - 64 >= VAR_15 * VAR_7->height)
        VAR_18 += 64;

    VAR_16 = !((uintptr_t)VAR_18 & 0x1f) && !(VAR_15 & 0x1f);
    if (VAR_16 != VAR_11->aligned_input) {
        VAR_11->aligned_input = VAR_16;
        FUNC_6(VAR_11);
    }

    if ((VAR_14 = FUNC_5(VAR_7, VAR_17, 0)) < 0)
        return VAR_14;

    VAR_19 = (uint16_t*)VAR_17->data[0];
    VAR_20 = (uint16_t*)VAR_17->data[1];
    VAR_21 = (uint16_t*)VAR_17->data[2];
    VAR_17->pict_type = VAR_6;
    VAR_17->key_frame = 1;

    for (VAR_12 = 0; VAR_12 < VAR_7->height; VAR_12++) {
        const uint32_t *VAR_23 = (const uint32_t*)VAR_18;
        uint32_t VAR_24;

        VAR_13 = (VAR_7->width / 12) * 12;
        VAR_11->unpack_frame(VAR_23, VAR_19, VAR_20, VAR_21, VAR_13);

        VAR_19 += VAR_13;
        VAR_20 += VAR_13 >> 1;
        VAR_21 += VAR_13 >> 1;
        VAR_23 += (VAR_13 << 1) / 3;

        if (VAR_13 < VAR_7->width - 5) {
            FUNC_2(VAR_20, VAR_19, VAR_21);
            FUNC_2(VAR_19, VAR_20, VAR_19);
            FUNC_2(VAR_21, VAR_19, VAR_20);
            FUNC_2(VAR_19, VAR_21, VAR_19);
            VAR_13 += 6;
        }

        if (VAR_13 < VAR_7->width - 1) {
            FUNC_2(VAR_20, VAR_19, VAR_21);

            VAR_24 = FUNC_3(*VAR_23++);
            *VAR_19++ = VAR_24 & 0x3FF;
            if (VAR_13 < VAR_7->width - 3) {
                *VAR_20++ = (VAR_24 >> 10) & 0x3FF;
                *VAR_19++ = (VAR_24 >> 20) & 0x3FF;

                VAR_24 = FUNC_3(*VAR_23++);
                *VAR_21++ = VAR_24 & 0x3FF;
                *VAR_19++ = (VAR_24 >> 10) & 0x3FF;
            }
        }

        VAR_18 += VAR_15;
        VAR_19 += VAR_17->linesize[0] / 2 - VAR_7->width + (VAR_7->width & 1);
        VAR_20 += VAR_17->linesize[1] / 2 - VAR_7->width / 2;
        VAR_21 += VAR_17->linesize[2] / 2 - VAR_7->width / 2;
    }

    if (VAR_7->field_order > VAR_1) {

        VAR_17->interlaced_frame = 1;
        if (VAR_7->field_order == VAR_3 || VAR_7->field_order == VAR_2)
            VAR_17->top_field_first = 1;
    }

    *VAR_9 = 1;

    return VAR_10->size;
}
