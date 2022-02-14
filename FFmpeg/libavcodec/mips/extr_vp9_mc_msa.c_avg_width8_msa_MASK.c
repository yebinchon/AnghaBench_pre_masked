
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v16u8 ;
typedef int const uint8_t ;
typedef int uint64_t ;
typedef int int32_t ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int const*,int,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int,int ,int,int const*,int) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int,int ,int,int ,int,int ,int,int const*,int) ;

__attribute__((used)) static void FUNC_6(const uint8_t *VAR_0, int32_t VAR_1,
                           uint8_t *VAR_2, int32_t VAR_3,
                           int32_t VAR_4)
{
    int32_t VAR_5;
    uint64_t VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    v16u8 VAR_14, VAR_15, VAR_16, VAR_17;
    v16u8 VAR_18, VAR_19, VAR_20, VAR_21;

    if (0 == (VAR_4 % 8)) {
        for (VAR_5 = (VAR_4 >> 3); VAR_5--;) {
            FUNC_3(VAR_0, VAR_1, VAR_6, VAR_7, VAR_8, VAR_9);
            VAR_0 += 4 * VAR_1;
            FUNC_3(VAR_0, VAR_1, VAR_10, VAR_11, VAR_12, VAR_13);
            VAR_0 += 4 * VAR_1;
            FUNC_2(VAR_6, VAR_7, VAR_14);
            FUNC_2(VAR_8, VAR_9, VAR_15);
            FUNC_2(VAR_10, VAR_11, VAR_16);
            FUNC_2(VAR_12, VAR_13, VAR_17);
            FUNC_3(VAR_2, VAR_3, VAR_6, VAR_7, VAR_8, VAR_9);
            FUNC_3(VAR_2 + 4 * VAR_3, VAR_3, VAR_10, VAR_11, VAR_12, VAR_13);
            FUNC_2(VAR_6, VAR_7, VAR_18);
            FUNC_2(VAR_8, VAR_9, VAR_19);
            FUNC_2(VAR_10, VAR_11, VAR_20);
            FUNC_2(VAR_12, VAR_13, VAR_21);
            FUNC_1(VAR_14, VAR_18, VAR_15, VAR_19, VAR_16, VAR_20, VAR_17, VAR_21, VAR_18,
                        VAR_19, VAR_20, VAR_21);
            FUNC_5(VAR_18, VAR_19, VAR_20, VAR_21, 0, 1, 0, 1, 0, 1, 0, 1, VAR_2, VAR_3);
            VAR_2 += 8 * VAR_3;
        }
    } else if (4 == VAR_4) {
        FUNC_3(VAR_0, VAR_1, VAR_6, VAR_7, VAR_8, VAR_9);
        FUNC_2(VAR_6, VAR_7, VAR_14);
        FUNC_2(VAR_8, VAR_9, VAR_15);
        FUNC_3(VAR_2, VAR_3, VAR_6, VAR_7, VAR_8, VAR_9);
        FUNC_2(VAR_6, VAR_7, VAR_18);
        FUNC_2(VAR_8, VAR_9, VAR_19);
        FUNC_0(VAR_14, VAR_18, VAR_15, VAR_19, VAR_18, VAR_19);
        FUNC_4(VAR_18, VAR_19, 0, 1, 0, 1, VAR_2, VAR_3);
    }
}
