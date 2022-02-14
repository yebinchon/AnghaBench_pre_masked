
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_17__ {int width; int height; size_t profile; scalar_t__ pix_fmt; TYPE_1__* priv_data; } ;
struct TYPE_16__ {int colorspace; int color_trc; int color_primaries; int interlaced_frame; scalar_t__ top_field_first; } ;
struct TYPE_15__ {int* data; int size; int flags; } ;
struct TYPE_14__ {char* vendor; scalar_t__ is_interlaced; } ;
typedef TYPE_1__ ProresContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int,int) ;
 size_t VAR_4 ;
 char** VAR_5 ;
 char** VAR_6 ;
 int FUNC_2 (TYPE_4__*,int ,char*) ;
 int FUNC_3 (int**,int) ;
 int FUNC_4 (int**,int) ;
 int FUNC_5 (int**,char*,int) ;
 int FUNC_6 (TYPE_4__*,TYPE_2__*,int,int ) ;
 void* FUNC_7 (TYPE_4__*,char*,int ,int ,int ) ;
 int FUNC_8 (TYPE_4__*,TYPE_3__ const*,int*,int,int,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_9(AVCodecContext *VAR_10, AVPacket *VAR_11,
                               const AVFrame *VAR_12, int *VAR_13)
{
    ProresContext *VAR_14 = VAR_10->priv_data;
    int VAR_15 = 148;
    uint8_t *VAR_16;
    int VAR_17, VAR_18, VAR_19, VAR_20 = 0;
    uint8_t VAR_21;
    int VAR_22 = FUNC_1(VAR_10->width, 16) * FUNC_1(VAR_10->height, 16)*16 + 500 + VAR_0;


    if ((VAR_19 = FUNC_6(VAR_10, VAR_11, VAR_22 + VAR_0, 0)) < 0)
        return VAR_19;

    VAR_16 = VAR_11->data;
    VAR_17 = 8 + VAR_15;

    FUNC_4(&VAR_16, VAR_17);
    FUNC_5(&VAR_16, "icpf", 4);

    FUNC_3(&VAR_16, VAR_15);
    FUNC_3(&VAR_16, 0);
    FUNC_5(&VAR_16, VAR_14->vendor, 4);
    FUNC_3(&VAR_16, VAR_10->width);
    FUNC_3(&VAR_16, VAR_10->height);
    VAR_21 = 0x82;
    if (VAR_10->profile >= VAR_4)
        VAR_21 |= 0x40;
    if (VAR_14->is_interlaced) {
        if (VAR_12->top_field_first || !VAR_12->interlaced_frame) {
            FUNC_2(VAR_10, VAR_1, "use interlaced encoding, top field first\n");
            VAR_21 |= 0x04;
            VAR_20 = 1;
        } else {
            FUNC_2(VAR_10, VAR_1, "use interlaced encoding, bottom field first\n");
            VAR_21 |= 0x08;
        }
    } else {
        FUNC_2(VAR_10, VAR_1, "use progressive encoding\n");
    }
    *VAR_16++ = VAR_21;
    *VAR_16++ = 0;

    *VAR_16++ = FUNC_7(VAR_10, "frame color primaries", VAR_12->color_primaries, VAR_8, 0);
    *VAR_16++ = FUNC_7(VAR_10, "frame color trc", VAR_12->color_trc, VAR_9, 0);
    *VAR_16++ = FUNC_7(VAR_10, "frame colorspace", VAR_12->colorspace, VAR_7, 0);
    if (VAR_10->profile >= VAR_4) {
        if (VAR_10->pix_fmt == VAR_2) {
            *VAR_16++ = 0xA0;
        } else {
            *VAR_16++ = 0xA2;
        }
    } else {
        *VAR_16++ = 32;
    }
    *VAR_16++ = 0;
    *VAR_16++ = 3;

    FUNC_5(&VAR_16, VAR_6[VAR_10->profile], 64);
    FUNC_5(&VAR_16, VAR_5[VAR_10->profile], 64);

    VAR_18 = FUNC_8(VAR_10, VAR_12, VAR_16,
                                     VAR_11->size - VAR_17, 0, VAR_20);
    if (VAR_18 < 0) {
        return VAR_18;
    }
    VAR_17 += VAR_18;

    if (VAR_14->is_interlaced) {
        VAR_18 = FUNC_8(VAR_10, VAR_12, VAR_11->data + VAR_17,
                                         VAR_11->size - VAR_17, 1, !VAR_20);
        if (VAR_18 < 0) {
            return VAR_18;
        }
        VAR_17 += VAR_18;
    }

    FUNC_0(VAR_11->data, VAR_17);
    VAR_11->flags |= VAR_3;
    VAR_11->size = VAR_17;
    *VAR_13 = 1;

    return 0;
}
