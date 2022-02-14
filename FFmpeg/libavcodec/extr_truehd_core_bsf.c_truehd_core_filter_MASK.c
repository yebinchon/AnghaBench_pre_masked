
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_17__ {int num_substreams; } ;
struct TYPE_13__ {TYPE_8__ hdr; } ;
typedef TYPE_1__ TrueHDCoreContext ;
struct TYPE_16__ {TYPE_1__* priv_data; } ;
struct TYPE_15__ {int size; int* data; } ;
struct TYPE_14__ {int* bits; int offset; int optional; } ;
typedef int GetBitContext ;
typedef TYPE_2__ AccessUnit ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVBSFContext ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int*,int ) ;
 int FUNC_3 (int,int) ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_8 (int*,int) ;
 int FUNC_9 (TYPE_4__*,TYPE_8__*,int *) ;
 void* FUNC_10 (int *,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int*,int) ;
 int FUNC_14 (int*,int*,int) ;
 int FUNC_15 (int *,int) ;

__attribute__((used)) static int FUNC_16(AVBSFContext *VAR_2, AVPacket *VAR_3)
{
    TrueHDCoreContext *VAR_4 = VAR_2->priv_data;
    GetBitContext VAR_5;
    AccessUnit VAR_6[VAR_1];
    int VAR_7, VAR_8, VAR_9 = 0;
    int VAR_10, VAR_11;
    int VAR_12 = 0;
    int VAR_13 = 0;
    int VAR_14;

    VAR_7 = FUNC_7(VAR_2, VAR_3);
    if (VAR_7 < 0)
        return VAR_7;

    if (VAR_3->size < 4) {
        VAR_7 = VAR_0;
        goto fail;
    }

    VAR_10 = (FUNC_0(VAR_3->data) & 0xFFF) * 2;
    if (VAR_10 < 4 || VAR_10 > VAR_3->size) {
        VAR_7 = VAR_0;
        goto fail;
    }

    VAR_7 = FUNC_13(&VAR_5, VAR_3->data + 4, VAR_3->size - 4);
    if (VAR_7 < 0)
        goto fail;

    if (FUNC_15(&VAR_5, 32) == 0xf8726fba) {
        if ((VAR_7 = FUNC_9(VAR_2, &VAR_4->hdr, &VAR_5)) < 0)
            goto fail;
        VAR_12 = 1;
    }

    if (VAR_4->hdr.num_substreams > VAR_1) {
        VAR_7 = VAR_0;
        goto fail;
    }

    for (VAR_8 = 0; VAR_8 < VAR_4->hdr.num_substreams; VAR_8++) {
        for (int VAR_15 = 0; VAR_15 < 4; VAR_15++)
            VAR_6[VAR_8].bits[VAR_15] = FUNC_11(&VAR_5);

        VAR_6[VAR_8].offset = FUNC_10(&VAR_5, 12);
        if (VAR_8 < 3) {
            VAR_9 = VAR_6[VAR_8].offset * 2;
            VAR_13 += 2;
        }

        if (VAR_6[VAR_8].bits[0]) {
            VAR_6[VAR_8].optional = FUNC_10(&VAR_5, 16);
            if (VAR_8 < 3)
                VAR_13 += 2;
        }
    }
    VAR_14 = FUNC_12(&VAR_5) >> 3;

    VAR_11 = VAR_14 + 4 + VAR_9;
    if (VAR_11 < VAR_10) {
        int VAR_16 = 0, VAR_17 = VAR_14 - VAR_12 * 28 - VAR_13;
        uint16_t VAR_18, VAR_19 = FUNC_0(VAR_3->data + 2);
        uint16_t VAR_20;
        uint8_t VAR_21[28];

        FUNC_4(VAR_17 >= 0 && VAR_17 % 2 == 0);

        if (VAR_12) {
            FUNC_14(VAR_21, VAR_3->data + 4, 28);
            VAR_21[16] = (VAR_21[16] & 0x0c) | (FUNC_3(VAR_4->hdr.num_substreams, 3) << 4);
            VAR_21[17] &= 0x7f;
            VAR_21[25] &= 0xfe;
            FUNC_2(VAR_21 + 26, FUNC_8(VAR_21, 26));
        }

        VAR_3->data += VAR_17;
        VAR_11 -= VAR_17;
        VAR_3->size = VAR_11;

        VAR_7 = FUNC_5(VAR_3);
        if (VAR_7 < 0)
            goto fail;

        FUNC_1(VAR_3->data + 2, VAR_19);
        VAR_18 = VAR_19;
        VAR_18 ^= VAR_11 / 2;

        for (VAR_8 = 0; VAR_8 < FUNC_3(VAR_4->hdr.num_substreams, 3); VAR_8++) {
            uint16_t VAR_22 = 0;

            VAR_22 |= (VAR_6[VAR_8].bits[0] << 15);
            VAR_22 |= (VAR_6[VAR_8].bits[1] << 14);
            VAR_22 |= (VAR_6[VAR_8].bits[2] << 13);
            VAR_22 |= (VAR_6[VAR_8].bits[3] << 12);
            VAR_22 |= VAR_6[VAR_8].offset;

            FUNC_1(VAR_3->data + VAR_12 * 28 + 4 + VAR_16, VAR_22);

            VAR_18 ^= VAR_22;
            VAR_16 += 2;

            if (VAR_6[VAR_8].bits[0]) {
                FUNC_1(VAR_3->data + VAR_12 * 28 + 4 + VAR_16, VAR_6[VAR_8].optional);

                VAR_18 ^= VAR_6[VAR_8].optional;
                VAR_16 += 2;
            }
        }

        VAR_18 ^= VAR_18 >> 8;
        VAR_18 ^= VAR_18 >> 4;
        VAR_18 &= 0xF;

        VAR_20 = (VAR_18 ^ 0xF) << 12;
        VAR_20 |= (VAR_11 / 2) & 0x0fff;
        FUNC_1(VAR_3->data, VAR_20);

        if (VAR_12)
            FUNC_14(VAR_3->data + 4, VAR_21, 28);
    }

fail:
    if (VAR_7 < 0)
        FUNC_6(VAR_3);

    return VAR_7;
}
