
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_12__ {int palette_has_changed; int key_frame; int* linesize; scalar_t__* data; int pict_type; } ;
struct TYPE_11__ {int width; int height; int codec_tag; TYPE_1__* priv_data; } ;
struct TYPE_10__ {int size; scalar_t__ data; } ;
struct TYPE_9__ {TYPE_5__* pic; int full_last; int full_tbl; int mmap_last; int mmap_tbl; int mclr_last; int mclr_tbl; int type_last; int type_tbl; } ;
typedef TYPE_1__ SmackVContext ;
typedef int GetByteContext ;
typedef int GetBitContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (char,char,char,char) ;




 int FUNC_2 (void*,TYPE_5__*) ;
 int* VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__,int) ;
 int FUNC_6 (TYPE_3__*,TYPE_5__*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,scalar_t__,int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_11(AVCodecContext *VAR_4, void *VAR_5, int *VAR_6,
                        AVPacket *VAR_7)
{
    SmackVContext * const VAR_8 = VAR_4->priv_data;
    uint8_t *VAR_9;
    uint32_t *VAR_10;
    GetByteContext VAR_11;
    GetBitContext VAR_12;
    int VAR_13, VAR_14, VAR_15, VAR_16;
    int VAR_17, VAR_18;
    int VAR_19;
    int VAR_20;

    if (VAR_7->size <= 769)
        return VAR_0;

    if ((VAR_18 = FUNC_6(VAR_4, VAR_8->pic, 0)) < 0)
        return VAR_18;


    VAR_10 = (uint32_t*)VAR_8->pic->data[1];
    FUNC_5(&VAR_11, VAR_7->data, VAR_7->size);
    VAR_20 = FUNC_4(&VAR_11);
    VAR_8->pic->palette_has_changed = VAR_20 & 1;
    VAR_8->pic->key_frame = !!(VAR_20 & 2);
    if (VAR_8->pic->key_frame)
        VAR_8->pic->pict_type = VAR_1;
    else
        VAR_8->pic->pict_type = VAR_2;

    for(VAR_17 = 0; VAR_17 < 256; VAR_17++)
        *VAR_10++ = 0xFFU << 24 | FUNC_3(&VAR_11);

    FUNC_9(VAR_8->mmap_tbl, VAR_8->mmap_last);
    FUNC_9(VAR_8->mclr_tbl, VAR_8->mclr_last);
    FUNC_9(VAR_8->full_tbl, VAR_8->full_last);
    FUNC_9(VAR_8->type_tbl, VAR_8->type_last);
    if ((VAR_18 = FUNC_8(&VAR_12, VAR_7->data + 769, VAR_7->size - 769)) < 0)
        return VAR_18;

    VAR_14 = 0;
    VAR_15 = VAR_4->width >> 2;
    VAR_16 = VAR_4->height >> 2;
    VAR_13 = VAR_15 * VAR_16;
    VAR_19 = VAR_8->pic->linesize[0];
    while(VAR_14 < VAR_13) {
        int VAR_21, VAR_22, VAR_23;
        uint16_t VAR_24;

        VAR_21 = FUNC_10(&VAR_12, VAR_8->type_tbl, VAR_8->type_last);
        VAR_22 = VAR_3[(VAR_21 >> 2) & 0x3F];
        switch(VAR_21 & 3){
        case 129:
            while(VAR_22-- && VAR_14 < VAR_13){
                int VAR_25, VAR_26;
                int VAR_27, VAR_28;
                VAR_25 = FUNC_10(&VAR_12, VAR_8->mclr_tbl, VAR_8->mclr_last);
                VAR_26 = FUNC_10(&VAR_12, VAR_8->mmap_tbl, VAR_8->mmap_last);
                VAR_9 = VAR_8->pic->data[0] + (VAR_14 / VAR_15) * (VAR_19 * 4) + (VAR_14 % VAR_15) * 4;
                VAR_27 = VAR_25 >> 8;
                VAR_28 = VAR_25 & 0xFF;
                for(VAR_17 = 0; VAR_17 < 4; VAR_17++) {
                    if(VAR_26 & 1) VAR_9[0] = VAR_27; else VAR_9[0] = VAR_28;
                    if(VAR_26 & 2) VAR_9[1] = VAR_27; else VAR_9[1] = VAR_28;
                    if(VAR_26 & 4) VAR_9[2] = VAR_27; else VAR_9[2] = VAR_28;
                    if(VAR_26 & 8) VAR_9[3] = VAR_27; else VAR_9[3] = VAR_28;
                    VAR_26 >>= 4;
                    VAR_9 += VAR_19;
                }
                VAR_14++;
            }
            break;
        case 130:
            VAR_23 = 0;
            if(VAR_4->codec_tag == FUNC_1('S', 'M', 'K', '4')) {
                if(FUNC_7(&VAR_12)) VAR_23 = 1;
                else if(FUNC_7(&VAR_12)) VAR_23 = 2;
            }
            while(VAR_22-- && VAR_14 < VAR_13){
                VAR_9 = VAR_8->pic->data[0] + (VAR_14 / VAR_15) * (VAR_19 * 4) + (VAR_14 % VAR_15) * 4;
                switch(VAR_23){
                case 0:
                    for(VAR_17 = 0; VAR_17 < 4; VAR_17++) {
                        VAR_24 = FUNC_10(&VAR_12, VAR_8->full_tbl, VAR_8->full_last);
                        FUNC_0(VAR_9+2,VAR_24);
                        VAR_24 = FUNC_10(&VAR_12, VAR_8->full_tbl, VAR_8->full_last);
                        FUNC_0(VAR_9,VAR_24);
                        VAR_9 += VAR_19;
                    }
                    break;
                case 1:
                    VAR_24 = FUNC_10(&VAR_12, VAR_8->full_tbl, VAR_8->full_last);
                    VAR_9[0] = VAR_9[1] = VAR_24 & 0xFF;
                    VAR_9[2] = VAR_9[3] = VAR_24 >> 8;
                    VAR_9 += VAR_19;
                    VAR_9[0] = VAR_9[1] = VAR_24 & 0xFF;
                    VAR_9[2] = VAR_9[3] = VAR_24 >> 8;
                    VAR_9 += VAR_19;
                    VAR_24 = FUNC_10(&VAR_12, VAR_8->full_tbl, VAR_8->full_last);
                    VAR_9[0] = VAR_9[1] = VAR_24 & 0xFF;
                    VAR_9[2] = VAR_9[3] = VAR_24 >> 8;
                    VAR_9 += VAR_19;
                    VAR_9[0] = VAR_9[1] = VAR_24 & 0xFF;
                    VAR_9[2] = VAR_9[3] = VAR_24 >> 8;
                    break;
                case 2:
                    for(VAR_17 = 0; VAR_17 < 2; VAR_17++) {
                        uint16_t VAR_29, VAR_30;
                        VAR_30 = FUNC_10(&VAR_12, VAR_8->full_tbl, VAR_8->full_last);
                        VAR_29 = FUNC_10(&VAR_12, VAR_8->full_tbl, VAR_8->full_last);
                        FUNC_0(VAR_9,VAR_29);
                        FUNC_0(VAR_9+2,VAR_30);
                        VAR_9 += VAR_19;
                        FUNC_0(VAR_9,VAR_29);
                        FUNC_0(VAR_9+2,VAR_30);
                        VAR_9 += VAR_19;
                    }
                    break;
                }
                VAR_14++;
            }
            break;
        case 128:
            while(VAR_22-- && VAR_14 < VAR_13)
                VAR_14++;
            break;
        case 131:
            VAR_23 = VAR_21 >> 8;
            while(VAR_22-- && VAR_14 < VAR_13){
                uint32_t VAR_31;
                VAR_9 = VAR_8->pic->data[0] + (VAR_14 / VAR_15) * (VAR_19 * 4) + (VAR_14 % VAR_15) * 4;
                VAR_31 = VAR_23 * 0x01010101U;
                for(VAR_17 = 0; VAR_17 < 4; VAR_17++) {
                    *((uint32_t*)VAR_9) = VAR_31;
                    VAR_9 += VAR_19;
                }
                VAR_14++;
            }
            break;
        }

    }

    if ((VAR_18 = FUNC_2(VAR_5, VAR_8->pic)) < 0)
        return VAR_18;

    *VAR_6 = 1;


    return VAR_7->size;
}
