
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;


typedef int uint8_t ;
struct TYPE_19__ {int debug; int height; int width; int flags2; TYPE_1__* priv_data; } ;
struct TYPE_18__ {int** data; int palette_has_changed; int* linesize; int key_frame; void* pict_type; } ;
struct TYPE_17__ {int size; scalar_t__ data; } ;
struct TYPE_16__ {int* pal; int* decomp_buf; unsigned long dsize; TYPE_12__* prev; } ;
struct TYPE_15__ {int** data; } ;
typedef int GetByteContext ;
typedef TYPE_1__ DxaDecContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (char,unsigned char,char,char) ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (TYPE_12__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_12__*) ;
 int FUNC_3 (TYPE_4__*,int ,char*,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,scalar_t__,int) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (TYPE_4__*,TYPE_1__* const,int*,int,int*,unsigned long,int*) ;
 int FUNC_13 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_14 (int*,int*,int) ;
 int FUNC_15 (int*,int ,int) ;
 scalar_t__ FUNC_16 (int*,unsigned long*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_17(AVCodecContext *VAR_12, void *VAR_13, int *VAR_14, AVPacket *VAR_15)
{
    AVFrame *VAR_16 = VAR_13;
    DxaDecContext * const VAR_17 = VAR_12->priv_data;
    uint8_t *VAR_18, *VAR_19, *VAR_20;
    unsigned long VAR_21;
    int VAR_22, VAR_23, VAR_24, VAR_25;
    int VAR_26;
    int VAR_27 = 0;
    GetByteContext VAR_28;

    FUNC_8(&VAR_28, VAR_15->data, VAR_15->size);


    if (FUNC_9(&VAR_28) == FUNC_0('C','M','A','P')) {
        FUNC_10(&VAR_28, 4);
        for(VAR_22 = 0; VAR_22 < 256; VAR_22++){
            VAR_17->pal[VAR_22] = 0xFFU << 24 | FUNC_4(&VAR_28);
        }
        VAR_27 = 1;
    }

    if ((VAR_25 = FUNC_13(VAR_12, VAR_16, VAR_4)) < 0)
        return VAR_25;
    FUNC_14(VAR_16->data[1], VAR_17->pal, VAR_2);
    VAR_16->palette_has_changed = VAR_27;

    VAR_18 = VAR_16->data[0];
    VAR_19 = VAR_17->decomp_buf;
    VAR_20 = VAR_17->prev->data[0];
    VAR_26 = VAR_16->linesize[0];

    if (FUNC_7(&VAR_28) == FUNC_0('N','U','L','L'))
        VAR_24 = -1;
    else
        VAR_24 = FUNC_5(&VAR_28);

    VAR_21 = VAR_17->dsize;
    if (VAR_24 != 4 && VAR_24 != -1) {
        FUNC_10(&VAR_28, 4);
        if (FUNC_16(VAR_17->decomp_buf, &VAR_21, VAR_15->data + FUNC_11(&VAR_28),
                       FUNC_6(&VAR_28)) != VAR_11) {
            FUNC_3(VAR_12, VAR_6, "Uncompress failed!\n");
            return VAR_1;
        }
        FUNC_15(VAR_17->decomp_buf + VAR_21, 0, VAR_9);
    }

    if (VAR_12->debug & VAR_10)
        FUNC_3(VAR_12, VAR_5, "compr:%2d, dsize:%d\n", VAR_24, (int)VAR_21);

    switch(VAR_24){
    case -1:
        VAR_16->key_frame = 0;
        VAR_16->pict_type = VAR_8;
        if (VAR_17->prev->data[0])
            FUNC_14(VAR_16->data[0], VAR_17->prev->data[0], VAR_16->linesize[0] * VAR_12->height);
        else{
            FUNC_15(VAR_16->data[0], 0, VAR_16->linesize[0] * VAR_12->height);
            VAR_16->key_frame = 1;
            VAR_16->pict_type = VAR_7;
        }
        break;
    case 2:
    case 4:
        VAR_16->key_frame = 1;
        VAR_16->pict_type = VAR_7;
        for (VAR_23 = 0; VAR_23 < VAR_12->height; VAR_23++) {
                FUNC_14(VAR_18, VAR_19, VAR_12->width);
            VAR_18 += VAR_26;
            VAR_19 += VAR_12->width;
        }
        break;
    case 3:
    case 5:
        if (!VAR_20) {
            FUNC_3(VAR_12, VAR_6, "Missing reference frame.\n");
            if (!(VAR_12->flags2 & VAR_3))
                return VAR_0;
        }
        VAR_16->key_frame = 0;
        VAR_16->pict_type = VAR_8;
        for (VAR_23 = 0; VAR_23 < VAR_12->height; VAR_23++) {
            if(VAR_20){
                for(VAR_22 = 0; VAR_22 < VAR_12->width; VAR_22++)
                    VAR_18[VAR_22] = VAR_19[VAR_22] ^ VAR_20[VAR_22];
                VAR_20 += VAR_26;
            }else
                FUNC_14(VAR_18, VAR_19, VAR_12->width);
            VAR_18 += VAR_26;
            VAR_19 += VAR_12->width;
        }
        break;
    case 12:
    case 13:
        VAR_16->key_frame = 0;
        VAR_16->pict_type = VAR_8;
        if (!VAR_17->prev->data[0]) {
            FUNC_3(VAR_12, VAR_6, "Missing reference frame\n");
            return VAR_0;
        }
        FUNC_12(VAR_12, VAR_17, VAR_16->data[0], VAR_16->linesize[0], VAR_19, VAR_21, VAR_17->prev->data[0]);
        break;
    default:
        FUNC_3(VAR_12, VAR_6, "Unknown/unsupported compression type %d\n", VAR_24);
        return VAR_0;
    }

    FUNC_2(VAR_17->prev);
    if ((VAR_25 = FUNC_1(VAR_17->prev, VAR_16)) < 0)
        return VAR_25;

    *VAR_14 = 1;


    return VAR_15->size;
}
