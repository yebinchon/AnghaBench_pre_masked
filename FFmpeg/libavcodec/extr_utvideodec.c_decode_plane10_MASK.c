
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int ptrdiff_t ;
struct TYPE_8__ {int table; } ;
typedef TYPE_2__ VLC ;
struct TYPE_7__ {int (* bswap_buf ) (int *,int *,int) ;} ;
struct TYPE_9__ {int slices; int avctx; scalar_t__ slice_bits; TYPE_1__ bdsp; } ;
typedef TYPE_3__ UtvideoContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const*) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,char*,...) ;
 int FUNC_2 (int const*,TYPE_2__*,int*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ,int) ;
 int FUNC_6 (int *,scalar_t__,int) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int *,int *,int) ;

__attribute__((used)) static int FUNC_9(UtvideoContext *VAR_5, int VAR_6,
                          uint16_t *VAR_7, ptrdiff_t VAR_8,
                          int VAR_9, int VAR_10,
                          const uint8_t *VAR_11, const uint8_t *VAR_12,
                          int VAR_13)
{
    int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
    int VAR_19, VAR_20;
    VLC VAR_21;
    GetBitContext VAR_22;
    int VAR_23, VAR_24;

    if ((VAR_18 = FUNC_2(VAR_12, &VAR_21, &VAR_24)) < 0) {
        FUNC_1(VAR_5->avctx, VAR_2, "Cannot build Huffman codes\n");
        return VAR_18;
    }
    if (VAR_24 >= 0) {
        VAR_20 = 0;
        for (VAR_16 = 0; VAR_16 < VAR_5->slices; VAR_16++) {
            uint16_t *VAR_25;

            VAR_19 = VAR_20;
            VAR_20 = (VAR_10 * (VAR_16 + 1) / VAR_5->slices);
            VAR_25 = VAR_7 + VAR_19 * VAR_8;

            VAR_23 = 0x200;
            for (VAR_15 = VAR_19; VAR_15 < VAR_20; VAR_15++) {
                for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
                    VAR_17 = VAR_24;
                    if (VAR_13) {
                        VAR_23 += VAR_17;
                        VAR_23 &= 0x3FF;
                        VAR_17 = VAR_23;
                    }
                    VAR_25[VAR_14] = VAR_17;
                }
                VAR_25 += VAR_8;
            }
        }
        return 0;
    }

    VAR_20 = 0;
    for (VAR_16 = 0; VAR_16 < VAR_5->slices; VAR_16++) {
        uint16_t *VAR_26;
        int VAR_27, VAR_28, VAR_29;

        VAR_19 = VAR_20;
        VAR_20 = (VAR_10 * (VAR_16 + 1) / VAR_5->slices);
        VAR_26 = VAR_7 + VAR_19 * VAR_8;


        VAR_27 = VAR_16 ? FUNC_0(VAR_11 + VAR_16 * 4 - 4) : 0;
        VAR_28 = FUNC_0(VAR_11 + VAR_16 * 4);
        VAR_29 = VAR_28 - VAR_27;

        if (!VAR_29) {
            FUNC_1(VAR_5->avctx, VAR_2, "Plane has more than one symbol "
                   "yet a slice has a length of zero.\n");
            goto fail;
        }

        FUNC_7(VAR_5->slice_bits + VAR_29, 0, VAR_1);
        VAR_5->bdsp.bswap_buf((uint32_t *) VAR_5->slice_bits,
                          (uint32_t *)(VAR_11 + VAR_27 + VAR_5->slices * 4),
                          (VAR_28 - VAR_27 + 3) >> 2);
        FUNC_6(&VAR_22, VAR_5->slice_bits, VAR_29 * 8);

        VAR_23 = 0x200;
        for (VAR_15 = VAR_19; VAR_15 < VAR_20; VAR_15++) {
            for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
                VAR_17 = FUNC_5(&VAR_22, VAR_21.table, VAR_4, 3);
                if (VAR_17 < 0) {
                    FUNC_1(VAR_5->avctx, VAR_2, "Decoding error\n");
                    goto fail;
                }
                if (VAR_13) {
                    VAR_23 += VAR_17;
                    VAR_23 &= 0x3FF;
                    VAR_17 = VAR_23;
                }
                VAR_26[VAR_14] = VAR_17;
            }
            VAR_26 += VAR_8;
            if (FUNC_4(&VAR_22) < 0) {
                FUNC_1(VAR_5->avctx, VAR_2,
                        "Slice decoding ran out of bits\n");
                goto fail;
            }
        }
        if (FUNC_4(&VAR_22) > 32)
            FUNC_1(VAR_5->avctx, VAR_3,
                   "%d bits left after decoding slice\n", FUNC_4(&VAR_22));
    }

    FUNC_3(&VAR_21);

    return 0;
fail:
    FUNC_3(&VAR_21);
    return VAR_0;
}
