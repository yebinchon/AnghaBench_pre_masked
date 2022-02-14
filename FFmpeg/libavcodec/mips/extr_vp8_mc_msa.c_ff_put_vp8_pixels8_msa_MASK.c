
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v2i64 ;
typedef scalar_t__ v16u8 ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int ptrdiff_t ;
typedef int int32_t ;


 int FUNC_0 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,int ,int ,int ,int *,int) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(uint8_t *VAR_0, ptrdiff_t VAR_1,
                            uint8_t *VAR_2, ptrdiff_t VAR_3,
                            int VAR_4, int VAR_5, int VAR_6)
{
    int32_t VAR_7;
    uint64_t VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    v16u8 VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;

    if (0 == VAR_4 % 8) {
        for (VAR_7 = VAR_4 >> 3; VAR_7--;) {
            FUNC_1(VAR_2, VAR_3,
                   VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23);
            VAR_2 += (8 * VAR_3);

            VAR_8 = FUNC_3((v2i64) VAR_16, 0);
            VAR_9 = FUNC_3((v2i64) VAR_17, 0);
            VAR_10 = FUNC_3((v2i64) VAR_18, 0);
            VAR_11 = FUNC_3((v2i64) VAR_19, 0);
            VAR_12 = FUNC_3((v2i64) VAR_20, 0);
            VAR_13 = FUNC_3((v2i64) VAR_21, 0);
            VAR_14 = FUNC_3((v2i64) VAR_22, 0);
            VAR_15 = FUNC_3((v2i64) VAR_23, 0);

            FUNC_2(VAR_8, VAR_9, VAR_10, VAR_11, VAR_0, VAR_1);
            VAR_0 += (4 * VAR_1);
            FUNC_2(VAR_12, VAR_13, VAR_14, VAR_15, VAR_0, VAR_1);
            VAR_0 += (4 * VAR_1);
        }
    } else if (0 == VAR_4 % 4) {
        for (VAR_7 = (VAR_4 / 4); VAR_7--;) {
            FUNC_0(VAR_2, VAR_3, VAR_16, VAR_17, VAR_18, VAR_19);
            VAR_2 += (4 * VAR_3);
            VAR_8 = FUNC_3((v2i64) VAR_16, 0);
            VAR_9 = FUNC_3((v2i64) VAR_17, 0);
            VAR_10 = FUNC_3((v2i64) VAR_18, 0);
            VAR_11 = FUNC_3((v2i64) VAR_19, 0);

            FUNC_2(VAR_8, VAR_9, VAR_10, VAR_11, VAR_0, VAR_1);
            VAR_0 += (4 * VAR_1);
        }
    }
}
