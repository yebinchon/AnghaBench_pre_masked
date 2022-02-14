
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v2i64 ;
typedef scalar_t__ v16u8 ;
typedef int const uint8_t ;
typedef int uint64_t ;
typedef int int32_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int const*,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,int ,int ,int ,int const*,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(const uint8_t *VAR_0, int32_t VAR_1,
                           uint8_t *VAR_2, int32_t VAR_3,
                           int32_t VAR_4)
{
    int32_t VAR_5;
    uint64_t VAR_6, VAR_7, VAR_8, VAR_9;
    v16u8 VAR_10, VAR_11, VAR_12, VAR_13;
    v16u8 VAR_14, VAR_15, VAR_16, VAR_17;

    for (VAR_5 = (VAR_4 / 4); VAR_5--;) {
        FUNC_1(VAR_0, VAR_1, VAR_10, VAR_11, VAR_12, VAR_13);
        VAR_0 += (4 * VAR_1);
        FUNC_1(VAR_2, VAR_3, VAR_14, VAR_15, VAR_16, VAR_17);

        FUNC_0(VAR_10, VAR_14, VAR_11, VAR_15, VAR_12, VAR_16, VAR_13, VAR_17,
                    VAR_14, VAR_15, VAR_16, VAR_17);

        VAR_6 = FUNC_3((v2i64) VAR_14, 0);
        VAR_7 = FUNC_3((v2i64) VAR_15, 0);
        VAR_8 = FUNC_3((v2i64) VAR_16, 0);
        VAR_9 = FUNC_3((v2i64) VAR_17, 0);
        FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9, VAR_2, VAR_3);
        VAR_2 += (4 * VAR_3);
    }
}
