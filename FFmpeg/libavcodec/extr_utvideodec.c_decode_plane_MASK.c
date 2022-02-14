
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int ptrdiff_t ;
struct TYPE_9__ {int table; } ;
typedef TYPE_2__ VLC ;
struct TYPE_8__ {int (* bswap_buf ) (int*,int*,int) ;} ;
struct TYPE_10__ {int slices; TYPE_7__* avctx; scalar_t__ slice_bits; TYPE_1__ bdsp; int ** packed_stream_size; int ** packed_stream; int ** control_stream_size; int ** control_stream; scalar_t__ pack; int interlaced; } ;
typedef TYPE_3__ UtvideoContext ;
struct TYPE_11__ {int pix_fmt; } ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const*) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_7__*,int ,char*,...) ;
 scalar_t__ FUNC_2 (int const*,TYPE_2__*,int*) ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ,int) ;
 int FUNC_8 (int *,scalar_t__,int) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int*,int*,int) ;

__attribute__((used)) static int FUNC_12(UtvideoContext *VAR_5, int VAR_6,
                        uint8_t *VAR_7, ptrdiff_t VAR_8,
                        int VAR_9, int VAR_10,
                        const uint8_t *VAR_11, int VAR_12)
{
    int VAR_13, VAR_14, VAR_15, VAR_16;
    int VAR_17, VAR_18;
    VLC VAR_19;
    GetBitContext VAR_20;
    int VAR_21, VAR_22, VAR_23;
    const int VAR_24 = FUNC_3(VAR_6, VAR_5->interlaced, VAR_5->avctx->pix_fmt);

    if (VAR_5->pack) {
        VAR_18 = 0;
        for (VAR_15 = 0; VAR_15 < VAR_5->slices; VAR_15++) {
            GetBitContext VAR_25, VAR_26;
            uint8_t *VAR_27, *VAR_28;

            VAR_21 = FUNC_9(&VAR_25, VAR_5->control_stream[VAR_6][VAR_15], VAR_5->control_stream_size[VAR_6][VAR_15]);
            if (VAR_21 < 0)
                return VAR_21;

            VAR_21 = FUNC_9(&VAR_26, VAR_5->packed_stream[VAR_6][VAR_15], VAR_5->packed_stream_size[VAR_6][VAR_15]);
            if (VAR_21 < 0)
                return VAR_21;

            VAR_17 = VAR_18;
            VAR_18 = (VAR_10 * (VAR_15 + 1) / VAR_5->slices) & VAR_24;
            VAR_27 = VAR_7 + VAR_17 * VAR_8;

            if (3 * ((VAR_7 + VAR_18 * VAR_8 - VAR_27 + 7)/8) > FUNC_6(&VAR_25))
                return VAR_0;

            for (VAR_28 = VAR_27; VAR_28 < VAR_7 + VAR_18 * VAR_8; VAR_28 += 8) {
                int VAR_29 = FUNC_5(&VAR_25, 3);

                if (VAR_29 == 0) {
                    *(uint64_t *) VAR_28 = 0;
                } else {
                    uint32_t VAR_30 = 0x80 >> (8 - (VAR_29 + 1)), VAR_31;
                    int VAR_32;

                    if ((VAR_29 + 1) * 8 > FUNC_6(&VAR_26))
                        return VAR_0;

                    for (VAR_32 = 0; VAR_32 < 8; VAR_32++) {

                        VAR_28[VAR_32] = FUNC_5(&VAR_26, VAR_29 + 1);
                        VAR_31 = (~VAR_28[VAR_32] & VAR_30) << (8 - VAR_29);
                        VAR_28[VAR_32] -= VAR_30;
                        VAR_28[VAR_32] += VAR_31;
                    }
                }
            }
        }

        return 0;
    }

    if (FUNC_2(VAR_11, &VAR_19, &VAR_23)) {
        FUNC_1(VAR_5->avctx, VAR_2, "Cannot build Huffman codes\n");
        return VAR_0;
    }
    if (VAR_23 >= 0) {
        VAR_18 = 0;
        for (VAR_15 = 0; VAR_15 < VAR_5->slices; VAR_15++) {
            uint8_t *VAR_33;

            VAR_17 = VAR_18;
            VAR_18 = (VAR_10 * (VAR_15 + 1) / VAR_5->slices) & VAR_24;
            VAR_33 = VAR_7 + VAR_17 * VAR_8;

            VAR_22 = 0x80;
            for (VAR_14 = VAR_17; VAR_14 < VAR_18; VAR_14++) {
                for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
                    VAR_16 = VAR_23;
                    if (VAR_12) {
                        VAR_22 += VAR_16;
                        VAR_16 = VAR_22;
                    }
                    VAR_33[VAR_13] = VAR_16;
                }
                VAR_33 += VAR_8;
            }
        }
        return 0;
    }

    VAR_11 += 256;

    VAR_18 = 0;
    for (VAR_15 = 0; VAR_15 < VAR_5->slices; VAR_15++) {
        uint8_t *VAR_34;
        int VAR_35, VAR_36, VAR_37;

        VAR_17 = VAR_18;
        VAR_18 = (VAR_10 * (VAR_15 + 1) / VAR_5->slices) & VAR_24;
        VAR_34 = VAR_7 + VAR_17 * VAR_8;


        VAR_35 = VAR_15 ? FUNC_0(VAR_11 + VAR_15 * 4 - 4) : 0;
        VAR_36 = FUNC_0(VAR_11 + VAR_15 * 4);
        VAR_37 = VAR_36 - VAR_35;

        if (!VAR_37) {
            FUNC_1(VAR_5->avctx, VAR_2, "Plane has more than one symbol "
                   "yet a slice has a length of zero.\n");
            goto fail;
        }

        FUNC_10(VAR_5->slice_bits + VAR_37, 0, VAR_1);
        VAR_5->bdsp.bswap_buf((uint32_t *) VAR_5->slice_bits,
                          (uint32_t *)(VAR_11 + VAR_35 + VAR_5->slices * 4),
                          (VAR_36 - VAR_35 + 3) >> 2);
        FUNC_8(&VAR_20, VAR_5->slice_bits, VAR_37 * 8);

        VAR_22 = 0x80;
        for (VAR_14 = VAR_17; VAR_14 < VAR_18; VAR_14++) {
            for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
                VAR_16 = FUNC_7(&VAR_20, VAR_19.table, VAR_4, 3);
                if (VAR_16 < 0) {
                    FUNC_1(VAR_5->avctx, VAR_2, "Decoding error\n");
                    goto fail;
                }
                if (VAR_12) {
                    VAR_22 += VAR_16;
                    VAR_16 = VAR_22;
                }
                VAR_34[VAR_13] = VAR_16;
            }
            if (FUNC_6(&VAR_20) < 0) {
                FUNC_1(VAR_5->avctx, VAR_2,
                        "Slice decoding ran out of bits\n");
                goto fail;
            }
            VAR_34 += VAR_8;
        }
        if (FUNC_6(&VAR_20) > 32)
            FUNC_1(VAR_5->avctx, VAR_3,
                   "%d bits left after decoding slice\n", FUNC_6(&VAR_20));
    }

    FUNC_4(&VAR_19);

    return 0;
fail:
    FUNC_4(&VAR_19);
    return VAR_0;
}
