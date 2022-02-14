
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int int64_t ;
struct TYPE_13__ {int sb_key; scalar_t__ n_sb_blocks; int current_sb; TYPE_1__* sb_blocks; void* sb_offset; } ;
typedef TYPE_2__ VividasDemuxContext ;
struct TYPE_14__ {int * pb; TYPE_2__* priv_data; } ;
struct TYPE_12__ {int size; } ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*,int ,char*,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int,int ) ;
 int FUNC_8 (int *,int) ;
 void* FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_3__*,TYPE_2__*,int ) ;
 int * FUNC_13 (int *,int*,int,int*,int) ;
 int FUNC_14 (TYPE_2__*,TYPE_3__*,int *,int) ;
 int FUNC_15 (TYPE_2__*,TYPE_3__*,int *,int) ;

__attribute__((used)) static int FUNC_16(AVFormatContext *VAR_6)
{
    VividasDemuxContext *VAR_7 = VAR_6->priv_data;
    AVIOContext *VAR_8 = VAR_6->pb;
    int64_t VAR_9;
    int VAR_10;
    uint32_t VAR_11, VAR_12;
    uint32_t VAR_13;
    uint8_t VAR_14[187];
    uint32_t VAR_15 = 0;
    uint32_t VAR_16 = 0;
    uint8_t *VAR_17 = 0;
    int VAR_18;

    FUNC_8(VAR_8, 9);

    VAR_9 = FUNC_9(VAR_8);

    VAR_9 += FUNC_11(VAR_8);

    VAR_10 = FUNC_4(VAR_8);

    if (VAR_10 != 1) {
        FUNC_2(VAR_6, VAR_1, "number of tracks %d is not 1\n", VAR_10);
        return FUNC_0(VAR_2);
    }

    VAR_13 = FUNC_4(VAR_8);
    FUNC_7(VAR_8, VAR_13, VAR_4);

    FUNC_5(VAR_8, VAR_14, 187);
    VAR_11 = FUNC_10(VAR_14);
    VAR_7->sb_key = VAR_11;

    FUNC_6(VAR_8);

    for (;;) {
        int64_t VAR_19 = FUNC_9(VAR_8);
        int VAR_20, VAR_21;

        if (VAR_19 >= VAR_9)
            break;

        VAR_20 = FUNC_11(VAR_8);
        if (FUNC_3(VAR_8) || VAR_20 <= 0)
            return VAR_0;

        VAR_21 = FUNC_4(VAR_8);

        if (VAR_21 == 22) {
            FUNC_5(VAR_8, VAR_14, 187);
            VAR_16 = FUNC_10(VAR_14);
            VAR_15 = FUNC_6(VAR_8);
        }

        FUNC_7(VAR_8, VAR_19 + VAR_20, VAR_5);
    }

    if (VAR_15) {
        VAR_12 = VAR_16;
        VAR_17 = FUNC_13(VAR_8, &VAR_13, VAR_16, &VAR_12, 0);
        if (!VAR_17)
            return FUNC_0(VAR_3);

        FUNC_1(VAR_17);
    }

    VAR_12 = VAR_11;
    VAR_17 = FUNC_13(VAR_8, &VAR_13, VAR_11, &VAR_12, 0);
    if (!VAR_17)
        return FUNC_0(VAR_3);
    VAR_18 = FUNC_14(VAR_7, VAR_6, VAR_17, VAR_13);
    FUNC_1(VAR_17);
    if (VAR_18 < 0)
        return VAR_18;

    VAR_17 = FUNC_13(VAR_8, &VAR_13, VAR_11, &VAR_12, VAR_13);
    if (!VAR_17)
        return FUNC_0(VAR_3);
    VAR_18 = FUNC_15(VAR_7, VAR_6, VAR_17, VAR_13);
    FUNC_1(VAR_17);
    if (VAR_18 < 0)
        return VAR_18;

    VAR_7->sb_offset = FUNC_9(VAR_8);
    if (VAR_7->n_sb_blocks > 0) {
        VAR_7->current_sb = 0;
        FUNC_12(VAR_6, VAR_7, VAR_7->sb_blocks[0].size);
    } else {
        VAR_7->current_sb = -1;
    }

    return 0;
}
