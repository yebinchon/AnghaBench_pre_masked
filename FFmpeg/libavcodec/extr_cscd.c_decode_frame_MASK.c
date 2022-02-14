
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_15__ {int key_frame; int pict_type; } ;
struct TYPE_14__ {TYPE_1__* priv_data; } ;
struct TYPE_13__ {int* data; int size; } ;
struct TYPE_12__ {int decomp_size; TYPE_5__* pic; int height; int linelen; int decomp_buf; } ;
typedef TYPE_1__ CamStudioContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_5__*,int ,int ,int ) ;
 int FUNC_2 (void*,TYPE_5__*) ;
 int FUNC_3 (TYPE_3__*,int ,char*) ;
 int FUNC_4 (int ,int*,int const*,int*) ;
 int FUNC_5 (TYPE_5__*,int ,int ,int ) ;
 int FUNC_6 (TYPE_3__*,TYPE_5__*,int ) ;
 int FUNC_7 (int ,unsigned long*,int const*,int) ;

__attribute__((used)) static int FUNC_8(AVCodecContext *VAR_6, void *VAR_7, int *VAR_8,
                        AVPacket *VAR_9)
{
    const uint8_t *VAR_10 = VAR_9->data;
    int VAR_11 = VAR_9->size;
    CamStudioContext *VAR_12 = VAR_6->priv_data;
    int VAR_13;

    if (VAR_11 < 2) {
        FUNC_3(VAR_6, VAR_1, "coded frame too small\n");
        return VAR_0;
    }

    if ((VAR_13 = FUNC_6(VAR_6, VAR_12->pic, 0)) < 0)
        return VAR_13;


    switch ((VAR_10[0] >> 1) & 7) {
    case 0: {
        int VAR_14 = VAR_12->decomp_size, VAR_15 = VAR_11 - 2;
        if (FUNC_4(VAR_12->decomp_buf, &VAR_14, &VAR_10[2], &VAR_15) || VAR_14) {
            FUNC_3(VAR_6, VAR_1, "error during lzo decompression\n");
            return VAR_0;
        }
        break;
    }
    case 1: {
        FUNC_3(VAR_6, VAR_1, "compiled without zlib support\n");
        return FUNC_0(VAR_4);

    }
    default:
        FUNC_3(VAR_6, VAR_1, "unknown compression\n");
        return VAR_0;
    }


    if (VAR_10[0] & 1) {
        VAR_12->pic->pict_type = VAR_2;
        VAR_12->pic->key_frame = 1;
              FUNC_5(VAR_12->pic, VAR_12->decomp_buf,
                                 VAR_12->linelen, VAR_12->height);
    } else {
        VAR_12->pic->pict_type = VAR_3;
        VAR_12->pic->key_frame = 0;
              FUNC_1(VAR_12->pic, VAR_12->decomp_buf,
                                VAR_12->linelen, VAR_12->height);
    }

    *VAR_8 = 1;
    if ((VAR_13 = FUNC_2(VAR_7, VAR_12->pic)) < 0)
        return VAR_13;

    return VAR_11;
}
