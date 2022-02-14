
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_18__ {TYPE_1__* priv_data; } ;
struct TYPE_17__ {int key_frame; int pict_type; int * data; } ;
struct TYPE_16__ {int* data; int size; } ;
struct TYPE_15__ {int last_frame; int last2_frame; int palette; int avctx; int height; int width; } ;
typedef TYPE_1__ CmvContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,TYPE_3__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (TYPE_1__*,TYPE_3__*,int const*,int const*) ;
 int FUNC_7 (TYPE_1__*,TYPE_3__*,int const*,int const*) ;
 int FUNC_8 (TYPE_1__*,int const*,int const*) ;
 int FUNC_9 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_10 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_11(AVCodecContext *VAR_7,
                            void *VAR_8, int *VAR_9,
                            AVPacket *VAR_10)
{
    const uint8_t *VAR_11 = VAR_10->data;
    int VAR_12 = VAR_10->size;
    CmvContext *VAR_13 = VAR_7->priv_data;
    const uint8_t *VAR_14 = VAR_11 + VAR_12;
    AVFrame *VAR_15 = VAR_8;
    int VAR_16;

    if (VAR_14 - VAR_11 < VAR_5)
        return VAR_0;

    if (FUNC_1(VAR_11)==VAR_6||FUNC_0(VAR_11)==VAR_6) {
        unsigned VAR_17 = FUNC_1(VAR_11 + 4);
        VAR_16 = FUNC_8(VAR_13, VAR_11+VAR_5, VAR_14);
        if (VAR_16 < 0)
            return VAR_16;
        if (VAR_17 > VAR_14 - VAR_11 - VAR_5)
            return VAR_0;
        VAR_11 += VAR_17;
    }

    if ((VAR_16 = FUNC_5(VAR_13->width, VAR_13->height, 0, VAR_13->avctx)) < 0)
        return VAR_16;

    if ((VAR_16 = FUNC_9(VAR_7, VAR_15, VAR_2)) < 0)
        return VAR_16;

    FUNC_10(VAR_15->data[1], VAR_13->palette, VAR_1);

    VAR_11 += VAR_5;
    if ((VAR_11[0]&1)) {
        FUNC_6(VAR_13, VAR_15, VAR_11+2, VAR_14);
        VAR_15->key_frame = 0;
        VAR_15->pict_type = VAR_4;
    }else{
        VAR_15->key_frame = 1;
        VAR_15->pict_type = VAR_3;
        FUNC_7(VAR_13, VAR_15, VAR_11+2, VAR_14);
    }

    FUNC_4(VAR_13->last2_frame);
    FUNC_2(VAR_13->last2_frame, VAR_13->last_frame);
    if ((VAR_16 = FUNC_3(VAR_13->last_frame, VAR_15)) < 0)
        return VAR_16;

    *VAR_9 = 1;

    return VAR_12;
}
