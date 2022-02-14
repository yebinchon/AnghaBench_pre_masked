
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int const uint8_t ;
typedef int int64_t ;
typedef int header ;
struct TYPE_3__ {int profile; int level; int tier; int bitdepth; int monochrome; int chroma_subsampling_x; int chroma_subsampling_y; int chroma_sample_position; } ;
typedef int PutBitContext ;
typedef int AVIOContext ;
typedef TYPE_1__ AV1SequenceParameters ;




 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int *,int const**) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int *,int const*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int const*,int) ;
 int FUNC_6 (int const*,int,int *,int*,int*,int*,int*) ;
 int FUNC_7 (TYPE_1__*,int const*,int ) ;
 int FUNC_8 (int *,int,int) ;

int FUNC_9(AVIOContext *VAR_1, const uint8_t *VAR_2, int VAR_3)
{
    AVIOContext *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
    AV1SequenceParameters VAR_6;
    PutBitContext VAR_7;
    uint8_t VAR_8[4];
    uint8_t *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
    int64_t VAR_11;
    int VAR_12, VAR_13, VAR_14, VAR_15;
    int VAR_16, VAR_17 = 0, VAR_18, VAR_19;

    if (VAR_3 <= 0)
        return VAR_0;

    VAR_16 = FUNC_2(&VAR_4);
    if (VAR_16 < 0)
        return VAR_16;
    VAR_16 = FUNC_2(&VAR_5);
    if (VAR_16 < 0)
        goto fail;

    while (VAR_3 > 0) {
        int VAR_20 = FUNC_6(VAR_2, VAR_3, &VAR_11, &VAR_12,
                                   &VAR_13, &VAR_14, &VAR_15);
        if (VAR_20 < 0) {
            VAR_16 = VAR_20;
            goto fail;
        }

        switch (VAR_13) {
        case 128:
            VAR_17++;
            if (!VAR_11 || VAR_17 > 1) {
                VAR_16 = VAR_0;
                goto fail;
            }
            VAR_16 = FUNC_7(&VAR_6, VAR_2 + VAR_12, VAR_11);
            if (VAR_16 < 0)
                goto fail;

            FUNC_3(VAR_4, VAR_2, VAR_20);
            break;
        case 129:
            if (!VAR_11) {
                VAR_16 = VAR_0;
                goto fail;
            }
            FUNC_3(VAR_5, VAR_2, VAR_20);
            break;
        default:
            break;
        }
        VAR_3 -= VAR_20;
        VAR_2 += VAR_20;
    }

    VAR_18 = FUNC_1(VAR_4, &VAR_9);
    if (!VAR_18) {
        VAR_16 = VAR_0;
        goto fail;
    }

    FUNC_5(&VAR_7, VAR_8, sizeof(VAR_8));

    FUNC_8(&VAR_7, 1, 1);
    FUNC_8(&VAR_7, 7, 1);
    FUNC_8(&VAR_7, 3, VAR_6.profile);
    FUNC_8(&VAR_7, 5, VAR_6.level);
    FUNC_8(&VAR_7, 1, VAR_6.tier);
    FUNC_8(&VAR_7, 1, VAR_6.bitdepth > 8);
    FUNC_8(&VAR_7, 1, VAR_6.bitdepth == 12);
    FUNC_8(&VAR_7, 1, VAR_6.monochrome);
    FUNC_8(&VAR_7, 1, VAR_6.chroma_subsampling_x);
    FUNC_8(&VAR_7, 1, VAR_6.chroma_subsampling_y);
    FUNC_8(&VAR_7, 2, VAR_6.chroma_sample_position);
    FUNC_8(&VAR_7, 8, 0);
    FUNC_4(&VAR_7);

    FUNC_3(VAR_1, VAR_8, sizeof(VAR_8));
    FUNC_3(VAR_1, VAR_9, VAR_18);

    VAR_19 = FUNC_1(VAR_5, &VAR_10);
    if (VAR_19)
        FUNC_3(VAR_1, VAR_10, VAR_19);

fail:
    if (!VAR_9)
        FUNC_1(VAR_4, &VAR_9);
    if (!VAR_10)
        FUNC_1(VAR_5, &VAR_10);
    FUNC_0(VAR_9);
    FUNC_0(VAR_10);

    return VAR_16;
}
