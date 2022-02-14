
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_19__ {TYPE_1__* par_out; TYPE_2__* priv_data; } ;
struct TYPE_18__ {int size; scalar_t__ data; } ;
struct TYPE_17__ {int length_size; int extradata_parsed; } ;
struct TYPE_16__ {int extradata_size; int extradata; } ;
typedef TYPE_2__ HEVCBSFContext ;
typedef int GetByteContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVBSFContext ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_3__**) ;
 int FUNC_4 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *,scalar_t__,int) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,scalar_t__,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_4__*,TYPE_3__**) ;
 int FUNC_12 (scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_13(AVBSFContext *VAR_2, AVPacket *VAR_3)
{
    HEVCBSFContext *VAR_4 = VAR_2->priv_data;
    AVPacket *VAR_5;
    GetByteContext VAR_6;

    int VAR_7 = 0;
    int VAR_8, VAR_9 = 0;

    VAR_9 = FUNC_11(VAR_2, &VAR_5);
    if (VAR_9 < 0)
        return VAR_9;

    if (!VAR_4->extradata_parsed) {
        FUNC_4(VAR_3, VAR_5);
        FUNC_3(&VAR_5);
        return 0;
    }

    FUNC_9(&VAR_6, VAR_5->data, VAR_5->size);

    while (FUNC_8(&VAR_6)) {
        uint32_t VAR_10 = 0;
        int VAR_11;
        int VAR_12, VAR_13, VAR_14, VAR_15;

        for (VAR_8 = 0; VAR_8 < VAR_4->length_size; VAR_8++)
            VAR_10 = (VAR_10 << 8) | FUNC_7(&VAR_6);

        VAR_11 = (FUNC_10(&VAR_6) >> 1) & 0x3f;


        VAR_12 = VAR_11 >= 16 && VAR_11 <= 23;
        VAR_13 = VAR_12 && !VAR_7;
        VAR_14 = VAR_13 * VAR_2->par_out->extradata_size;
        VAR_7 |= VAR_12;

        if (VAR_1 - VAR_10 < 4 ||
            VAR_1 - 4 - VAR_10 < VAR_14) {
            VAR_9 = VAR_0;
            goto fail;
        }

        VAR_15 = VAR_3->size;

        VAR_9 = FUNC_1(VAR_3, 4 + VAR_10 + VAR_14);
        if (VAR_9 < 0)
            goto fail;

        if (VAR_13)
            FUNC_12(VAR_3->data + VAR_15, VAR_2->par_out->extradata, VAR_14);
        FUNC_0(VAR_3->data + VAR_15 + VAR_14, 1);
        FUNC_6(&VAR_6, VAR_3->data + VAR_15 + 4 + VAR_14, VAR_10);
    }

    VAR_9 = FUNC_2(VAR_3, VAR_5);
    if (VAR_9 < 0)
        goto fail;

fail:
    if (VAR_9 < 0)
        FUNC_5(VAR_3);
    FUNC_3(&VAR_5);

    return VAR_9;
}
