
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v16u8 ;
typedef int const uint8_t ;
typedef int int32_t ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int const*,int,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int const*,int) ;

__attribute__((used)) static void FUNC_3(const uint8_t *VAR_0, int32_t VAR_1,
                            uint8_t *VAR_2, int32_t VAR_3,
                            int32_t VAR_4)
{
    int32_t VAR_5;
    uint8_t *VAR_6 = VAR_2;
    v16u8 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
    v16u8 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
    v16u8 VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30;
    v16u8 VAR_31, VAR_32, VAR_33, VAR_34, VAR_35, VAR_36, VAR_37, VAR_38;

    if (0 == (VAR_4 % 8)) {
        for (VAR_5 = (VAR_4 / 8); VAR_5--;) {
            FUNC_1(VAR_0, VAR_1, VAR_7, VAR_9, VAR_11, VAR_13);
            FUNC_1(VAR_0 + 16, VAR_1, VAR_8, VAR_10, VAR_12, VAR_14);
            VAR_0 += (4 * VAR_1);
            FUNC_1(VAR_6, VAR_3, VAR_23, VAR_25, VAR_27, VAR_29);
            FUNC_1(VAR_6 + 16, VAR_3, VAR_24, VAR_26, VAR_28, VAR_30);
            VAR_6 += (4 * VAR_3);
            FUNC_1(VAR_0, VAR_1, VAR_15, VAR_17, VAR_19, VAR_21);
            FUNC_1(VAR_0 + 16, VAR_1, VAR_16, VAR_18, VAR_20, VAR_22);
            VAR_0 += (4 * VAR_1);
            FUNC_1(VAR_6, VAR_3, VAR_31, VAR_33, VAR_35, VAR_37);
            FUNC_1(VAR_6 + 16, VAR_3, VAR_32, VAR_34, VAR_36, VAR_38);
            VAR_6 += (4 * VAR_3);

            FUNC_0(VAR_7, VAR_23, VAR_8, VAR_24, VAR_9, VAR_25, VAR_10, VAR_26,
                        VAR_23, VAR_24, VAR_25, VAR_26);
            FUNC_0(VAR_11, VAR_27, VAR_12, VAR_28, VAR_13, VAR_29, VAR_14, VAR_30,
                        VAR_27, VAR_28, VAR_29, VAR_30);
            FUNC_0(VAR_15, VAR_31, VAR_16, VAR_32, VAR_17, VAR_33, VAR_18, VAR_34,
                        VAR_31, VAR_32, VAR_33, VAR_34);
            FUNC_0(VAR_19, VAR_35, VAR_20, VAR_36, VAR_21, VAR_37, VAR_22, VAR_38,
                        VAR_35, VAR_36, VAR_37, VAR_38);

            FUNC_2(VAR_23, VAR_25, VAR_27, VAR_29, VAR_2, VAR_3);
            FUNC_2(VAR_24, VAR_26, VAR_28, VAR_30, VAR_2 + 16, VAR_3);
            VAR_2 += (4 * VAR_3);
            FUNC_2(VAR_31, VAR_33, VAR_35, VAR_37, VAR_2, VAR_3);
            FUNC_2(VAR_32, VAR_34, VAR_36, VAR_38, VAR_2 + 16, VAR_3);
            VAR_2 += (4 * VAR_3);
        }
    } else if (0 == (VAR_4 % 4)) {
        for (VAR_5 = (VAR_4 / 4); VAR_5--;) {
            FUNC_1(VAR_0, VAR_1, VAR_7, VAR_9, VAR_11, VAR_13);
            FUNC_1(VAR_0 + 16, VAR_1, VAR_8, VAR_10, VAR_12, VAR_14);
            VAR_0 += (4 * VAR_1);
            FUNC_1(VAR_6, VAR_3, VAR_23, VAR_25, VAR_27, VAR_29);
            FUNC_1(VAR_6 + 16, VAR_3, VAR_24, VAR_26, VAR_28, VAR_30);
            VAR_6 += (4 * VAR_3);

            FUNC_0(VAR_7, VAR_23, VAR_8, VAR_24, VAR_9, VAR_25, VAR_10, VAR_26,
                        VAR_23, VAR_24, VAR_25, VAR_26);
            FUNC_0(VAR_11, VAR_27, VAR_12, VAR_28, VAR_13, VAR_29, VAR_14, VAR_30,
                        VAR_27, VAR_28, VAR_29, VAR_30);

            FUNC_2(VAR_23, VAR_25, VAR_27, VAR_29, VAR_2, VAR_3);
            FUNC_2(VAR_24, VAR_26, VAR_28, VAR_30, VAR_2 + 16, VAR_3);
            VAR_2 += (4 * VAR_3);
        }
    }
}
