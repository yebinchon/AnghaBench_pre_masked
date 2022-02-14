
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int uint8_t ;
typedef unsigned int uint32_t ;
struct TYPE_21__ {int (* dxt1_block ) (int *,unsigned int,int ) ;int (* dxt3_block ) (int *,unsigned int,int ) ;} ;
typedef TYPE_1__ TextureDSPContext ;
struct TYPE_25__ {int height; int width; void* coded_height; void* coded_width; int pix_fmt; } ;
struct TYPE_24__ {unsigned int* linesize; int ** data; int pict_type; } ;
struct TYPE_23__ {int size; int data; } ;
struct TYPE_22__ {int buffer; } ;
typedef TYPE_2__ GetByteContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (unsigned int,int) ;


 int FUNC_2 (TYPE_5__*,char*,unsigned int) ;
 unsigned int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int *,unsigned int) ;
 unsigned int FUNC_5 (TYPE_2__*) ;
 unsigned int FUNC_6 (TYPE_2__*) ;
 unsigned int FUNC_7 (TYPE_2__*) ;
 unsigned int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int ,int) ;
 int FUNC_10 (TYPE_2__*,int) ;
 int FUNC_11 (TYPE_5__*,TYPE_4__* const,int ) ;
 int FUNC_12 (TYPE_5__*,unsigned int,unsigned int) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (int *,unsigned int,int ) ;
 int FUNC_15 (int *,unsigned int,int ) ;

__attribute__((used)) static int FUNC_16(AVCodecContext *VAR_5, void *VAR_6, int *VAR_7,
                            AVPacket *VAR_8) {
    GetByteContext VAR_9;
    TextureDSPContext VAR_10;
    AVFrame * const VAR_11 = VAR_6;
    unsigned int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
    unsigned int VAR_19, VAR_20;
    uint8_t *VAR_21;
    uint32_t *VAR_22;
    int VAR_23, VAR_24;
    int VAR_25;

    FUNC_13(&VAR_10);

    FUNC_9(&VAR_9, VAR_8->data, VAR_8->size);
    VAR_12 = FUNC_8(&VAR_9);
    FUNC_10(&VAR_9, 72);
    VAR_15 = FUNC_8(&VAR_9);
    VAR_13 = FUNC_7(&VAR_9);
    VAR_14 = FUNC_7(&VAR_9);
    VAR_16 = FUNC_5(&VAR_9);
    FUNC_10(&VAR_9, 2);
    VAR_18 = FUNC_5(&VAR_9);

    if (VAR_12 < 8 || VAR_12 > 9) {
        FUNC_2(VAR_5, "Texture data version %u", VAR_12);
        return VAR_1;
    }

    if (VAR_16 == 8) {
        VAR_5->pix_fmt = VAR_3;
    } else if (VAR_16 == 16 || VAR_16 == 32) {
        VAR_5->pix_fmt = VAR_4;
    } else {
        FUNC_2(VAR_5, "Color depth of %u", VAR_16);
        return VAR_1;
    }

    if ((VAR_25 = FUNC_12(VAR_5, VAR_13, VAR_14)) < 0)
        return VAR_25;

    VAR_5->coded_width = FUNC_1(VAR_13, 4);
    VAR_5->coded_height = FUNC_1(VAR_14, 4);

    if ((VAR_25 = FUNC_11(VAR_5, VAR_11, 0)) < 0)
        return VAR_25;

    VAR_11->pict_type = VAR_2;

    VAR_21 = VAR_11->data[0];
    VAR_17 = VAR_11->linesize[0];

    if (VAR_16 == 8) {
        VAR_22 = (uint32_t *) VAR_11->data[1];
        for (VAR_19 = 0; VAR_19 < 256; VAR_19++) {
            VAR_20 = FUNC_3(&VAR_9);
            VAR_22[VAR_19] = (VAR_20 >> 8) + (VAR_20 << 24);
        }
        if (FUNC_6(&VAR_9) < VAR_13 * VAR_14)
            return VAR_0;
        FUNC_10(&VAR_9, 4);
        for (VAR_19=0; VAR_19<VAR_14; VAR_19++) {
            FUNC_4(&VAR_9, VAR_21, VAR_13);
            VAR_21 += VAR_17;
        }
    } else if (VAR_16 == 16) {
        FUNC_10(&VAR_9, 4);
        switch (VAR_15) {
        case 0:
            if (!(VAR_18 & 1))
                goto unsupported;
        case 129:
            if (FUNC_6(&VAR_9) < FUNC_0(VAR_13, 2) * FUNC_0(VAR_14, 2) * 8)
                return VAR_0;
            for (VAR_24 = 0; VAR_24 < VAR_5->height; VAR_24 += 4) {
                for (VAR_23 = 0; VAR_23 < VAR_5->width; VAR_23 += 4) {
                    uint8_t *VAR_26 = VAR_21 + VAR_23 * 4 + VAR_24 * VAR_17;
                    int VAR_27 = VAR_10.dxt1_block(VAR_26, VAR_17, VAR_9.buffer);
                    FUNC_10(&VAR_9, VAR_27);
                }
            }
            break;
        case 128:
            if (FUNC_6(&VAR_9) < FUNC_0(VAR_13, 2) * FUNC_0(VAR_14, 2) * 16)
                return VAR_0;
            for (VAR_24 = 0; VAR_24 < VAR_5->height; VAR_24 += 4) {
                for (VAR_23 = 0; VAR_23 < VAR_5->width; VAR_23 += 4) {
                    uint8_t *VAR_28 = VAR_21 + VAR_23 * 4 + VAR_24 * VAR_17;
                    int VAR_29 = VAR_10.dxt3_block(VAR_28, VAR_17, VAR_9.buffer);
                    FUNC_10(&VAR_9, VAR_29);
                }
            }
            break;
        default:
            goto unsupported;
        }
    } else if (VAR_16 == 32) {
        switch (VAR_15) {
        case 0x15:
        case 0x16:
            if (FUNC_6(&VAR_9) < VAR_14 * VAR_13 * 4)
                return VAR_0;
            for (VAR_19=0; VAR_19<VAR_14; VAR_19++) {
                FUNC_4(&VAR_9, VAR_21, VAR_13 * 4);
                VAR_21 += VAR_17;
            }
            break;
        default:
            goto unsupported;
        }
    }

    *VAR_7 = 1;

    return VAR_8->size;

unsupported:
    FUNC_2(VAR_5, "d3d format (%08x)", VAR_15);
    return VAR_1;
}
