
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4i32 ;
typedef scalar_t__ v16u8 ;
typedef int const uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (int const*,int,scalar_t__,scalar_t__) ;
 int FUNC_3 (int const*,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (int ,int const*) ;
 int FUNC_5 (int ,int ,int ,int ,int const*,int) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(const uint8_t *VAR_0, int32_t VAR_1,
                           uint8_t *VAR_2, int32_t VAR_3,
                           int32_t VAR_4)
{
    int32_t VAR_5;
    uint32_t VAR_6, VAR_7, VAR_8, VAR_9;
    v16u8 VAR_10, VAR_11, VAR_12, VAR_13;
    v16u8 VAR_14, VAR_15, VAR_16, VAR_17;

    if (0 == (VAR_4 % 4)) {
        for (VAR_5 = (VAR_4 / 4); VAR_5--;) {
            FUNC_3(VAR_0, VAR_1, VAR_10, VAR_11, VAR_12, VAR_13);
            VAR_0 += (4 * VAR_1);

            FUNC_3(VAR_2, VAR_3, VAR_14, VAR_15, VAR_16, VAR_17);

            FUNC_1(VAR_10, VAR_14, VAR_11, VAR_15, VAR_12, VAR_16, VAR_13, VAR_17,
                        VAR_14, VAR_15, VAR_16, VAR_17);

            VAR_6 = FUNC_6((v4i32) VAR_14, 0);
            VAR_7 = FUNC_6((v4i32) VAR_15, 0);
            VAR_8 = FUNC_6((v4i32) VAR_16, 0);
            VAR_9 = FUNC_6((v4i32) VAR_17, 0);
            FUNC_5(VAR_6, VAR_7, VAR_8, VAR_9, VAR_2, VAR_3);
            VAR_2 += (4 * VAR_3);
        }
    } else if (0 == (VAR_4 % 2)) {
        for (VAR_5 = (VAR_4 / 2); VAR_5--;) {
            FUNC_2(VAR_0, VAR_1, VAR_10, VAR_11);
            VAR_0 += (2 * VAR_1);

            FUNC_2(VAR_2, VAR_3, VAR_14, VAR_15);

            FUNC_0(VAR_10, VAR_14, VAR_11, VAR_15, VAR_14, VAR_15);

            VAR_6 = FUNC_6((v4i32) VAR_14, 0);
            VAR_7 = FUNC_6((v4i32) VAR_15, 0);
            FUNC_4(VAR_6, VAR_2);
            VAR_2 += VAR_3;
            FUNC_4(VAR_7, VAR_2);
            VAR_2 += VAR_3;
        }
    }
}
