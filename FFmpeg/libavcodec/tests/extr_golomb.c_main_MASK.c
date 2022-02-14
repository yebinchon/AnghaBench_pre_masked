
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int PutBitContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int,int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (int *,int *,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *,int) ;
 int VAR_2 ;

int FUNC_16(void)
{
    int VAR_3, VAR_4 = 0;
    uint8_t *VAR_5;
    PutBitContext VAR_6;
    GetBitContext VAR_7;

    VAR_5 = FUNC_3(VAR_1);
    if (!VAR_5)
        return 2;

    FUNC_10(&VAR_6, VAR_5, VAR_1);
    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
        FUNC_12(&VAR_6, VAR_3);
    FUNC_4(&VAR_6);

    FUNC_9(&VAR_7, VAR_5, 8 * VAR_1);
    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        int VAR_8, VAR_9 = FUNC_14(&VAR_7, 25);

        VAR_8 = FUNC_7(&VAR_7);
        if (VAR_8 != VAR_3) {
            FUNC_5(VAR_2, "get_ue_golomb: expected %d, got %d. bits: %7x\n",
                    VAR_3, VAR_8, VAR_9);
            VAR_4 = 1;
        }
    }


    FUNC_10(&VAR_6, VAR_5, VAR_1);
    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
        FUNC_12(&VAR_6, ((VAR_3) << 3 | (VAR_3) & 7));
    FUNC_4(&VAR_6);

    FUNC_9(&VAR_7, VAR_5, 8 * VAR_1);
    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        int VAR_10, VAR_11 = FUNC_15(&VAR_7, 32);

        VAR_10 = FUNC_8(&VAR_7);
        if (VAR_10 != ((VAR_3) << 3 | (VAR_3) & 7)) {
            FUNC_5(VAR_2, "get_ue_golomb_long: expected %d, got %d. "
                    "bits: %8x\n", ((VAR_3) << 3 | (VAR_3) & 7), VAR_10, VAR_11);
            VAR_4 = 1;
        }
    }


    FUNC_10(&VAR_6, VAR_5, VAR_1);
    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
        FUNC_13(&VAR_6, ((VAR_3) << 4 | (VAR_3) & 15));
    FUNC_4(&VAR_6);

    FUNC_9(&VAR_7, VAR_5, 8 * VAR_1);
    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        int VAR_12, VAR_13 = FUNC_15(&VAR_7, 32);

        VAR_12 = FUNC_8(&VAR_7);
        if (VAR_12 != ((VAR_3) << 4 | (VAR_3) & 15)) {
            FUNC_5(VAR_2, "get_ue_golomb_long: expected %d, got %d. "
                    "bits: %8x\n", ((VAR_3) << 4 | (VAR_3) & 15), VAR_12, VAR_13);
            VAR_4 = 1;
        }
    }

    FUNC_10(&VAR_6, VAR_5, VAR_1);
    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
        FUNC_11(&VAR_6, VAR_3 - VAR_0 / 2);
    FUNC_4(&VAR_6);

    FUNC_9(&VAR_7, VAR_5, 8 * VAR_1);
    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        int VAR_14, VAR_15 = FUNC_14(&VAR_7, 25);

        VAR_14 = FUNC_6(&VAR_7);
        if (VAR_14 != VAR_3 - VAR_0 / 2) {
            FUNC_5(VAR_2, "get_se_golomb: expected %d, got %d. bits: %7x\n",
                    VAR_3 - VAR_0 / 2, VAR_14, VAR_15);
            VAR_4 = 1;
        }
    }

    FUNC_2(VAR_5);

    return VAR_4;
}
