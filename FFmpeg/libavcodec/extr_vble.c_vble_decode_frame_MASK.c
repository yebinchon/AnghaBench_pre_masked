
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_16__ {TYPE_1__* avctx; } ;
typedef TYPE_2__ VBLEContext ;
struct TYPE_17__ {void* f; } ;
typedef TYPE_3__ ThreadFrame ;
struct TYPE_20__ {int width; int height; TYPE_2__* priv_data; } ;
struct TYPE_19__ {int key_frame; int pict_type; } ;
struct TYPE_18__ {int size; int * data; } ;
struct TYPE_15__ {int flags; } ;
typedef int GetBitContext ;
typedef TYPE_4__ AVPacket ;
typedef TYPE_5__ AVFrame ;
typedef TYPE_6__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int const*) ;
 int VAR_5 ;
 int FUNC_1 (TYPE_6__*,int ,char*,...) ;
 int FUNC_2 (TYPE_6__*,TYPE_3__*,int ) ;
 int FUNC_3 (int *,int const*,int) ;
 int FUNC_4 (TYPE_2__*,TYPE_5__*,int *,int,int,int,int) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_6(AVCodecContext *VAR_6, void *VAR_7, int *VAR_8,
                             AVPacket *VAR_9)
{
    VBLEContext *VAR_10 = VAR_6->priv_data;
    AVFrame *VAR_11 = VAR_7;
    GetBitContext VAR_12;
    const uint8_t *VAR_13 = VAR_9->data;
    int VAR_14;
    int VAR_15 = 0;
    int VAR_16 = VAR_6->width / 2, VAR_17 = VAR_6->height / 2;
    int VAR_18;
    ThreadFrame VAR_19 = { .f = VAR_7 };

    if (VAR_9->size < 4 || VAR_9->size - 4 > VAR_5/8) {
        FUNC_1(VAR_6, VAR_2, "Invalid packet size\n");
        return VAR_0;
    }


    if ((VAR_18 = FUNC_2(VAR_6, &VAR_19, 0)) < 0)
        return VAR_18;


    VAR_11->key_frame = 1;
    VAR_11->pict_type = VAR_4;


    VAR_14 = FUNC_0(VAR_13);

    if (VAR_14 != 1)
        FUNC_1(VAR_6, VAR_3, "Unsupported VBLE Version: %d\n", VAR_14);

    FUNC_3(&VAR_12, VAR_13 + 4, (VAR_9->size - 4) * 8);


    if (FUNC_5(VAR_10, &VAR_12) < 0) {
        FUNC_1(VAR_6, VAR_2, "Invalid Code\n");
        return VAR_0;
    }


    FUNC_4(VAR_10, VAR_11, &VAR_12, 0, VAR_15, VAR_6->width, VAR_6->height);


    if (!(VAR_10->avctx->flags & VAR_1)) {
        VAR_15 += VAR_6->width * VAR_6->height;
        FUNC_4(VAR_10, VAR_11, &VAR_12, 1, VAR_15, VAR_16, VAR_17);

        VAR_15 += VAR_16 * VAR_17;
        FUNC_4(VAR_10, VAR_11, &VAR_12, 2, VAR_15, VAR_16, VAR_17);
    }

    *VAR_8 = 1;

    return VAR_9->size;
}
