
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v2i64 ;
typedef scalar_t__ v16u8 ;
typedef int uint8_t ;
typedef int int32_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int const*) ;
 int FUNC_2 (int const*,int,scalar_t__,scalar_t__) ;
 int FUNC_3 (int const*,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__,int ,int,int ,int,int *,int) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int,int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(const uint8_t *VAR_0,
                                                  int32_t VAR_1,
                                                  uint8_t *VAR_2,
                                                  int32_t VAR_3)
{
    v16u8 VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    v16u8 VAR_13, VAR_14, VAR_15, VAR_16;
    v16u8 VAR_17 = (v16u8) FUNC_7(20);
    v16u8 VAR_18 = (v16u8) FUNC_7(6);
    v16u8 VAR_19 = (v16u8) FUNC_7(3);

    FUNC_3(VAR_0, VAR_1, VAR_4, VAR_5, VAR_6, VAR_7);
    VAR_0 += (4 * VAR_1);
    FUNC_2(VAR_0, VAR_1, VAR_8, VAR_9);
    VAR_0 += (2 * VAR_1);
    VAR_15 = FUNC_0(VAR_4, VAR_4, VAR_5, VAR_6,
                                                 VAR_5, VAR_6, VAR_7, VAR_8,
                                                 VAR_5, VAR_4, VAR_4, VAR_5,
                                                 VAR_6, VAR_7, VAR_8, VAR_9,
                                                 VAR_17, VAR_18, VAR_19);
    FUNC_2(VAR_0, VAR_1, VAR_10, VAR_11);
    VAR_0 += (2 * VAR_1);
    VAR_16 = FUNC_0(VAR_6, VAR_5, VAR_4, VAR_4,
                                                 VAR_7, VAR_8, VAR_9, VAR_10,
                                                 VAR_7, VAR_6, VAR_5, VAR_4,
                                                 VAR_8, VAR_9, VAR_10, VAR_11,
                                                 VAR_17, VAR_18, VAR_19);
    VAR_13 = (v16u8) FUNC_6((v2i64) VAR_4, 1, (v2i64) VAR_5);
    VAR_14 = (v16u8) FUNC_6((v2i64) VAR_6, 1, (v2i64) VAR_7);
    VAR_15 = FUNC_5(VAR_15, VAR_13);
    VAR_16 = FUNC_5(VAR_16, VAR_14);
    FUNC_4(VAR_15, VAR_16, 0, 1, 0, 1, VAR_2, VAR_3);

    VAR_12 = FUNC_1(VAR_0);
    VAR_15 = FUNC_0(VAR_8, VAR_7, VAR_6, VAR_5,
                                                 VAR_9, VAR_10, VAR_11, VAR_12,
                                                 VAR_9, VAR_8, VAR_7, VAR_6,
                                                 VAR_10, VAR_11, VAR_12, VAR_12,
                                                 VAR_17, VAR_18, VAR_19);
    VAR_16 = FUNC_0(VAR_10, VAR_9, VAR_8, VAR_7,
                                                 VAR_11, VAR_12, VAR_12, VAR_11,
                                                 VAR_11, VAR_10, VAR_9, VAR_8,
                                                 VAR_12, VAR_12, VAR_11, VAR_10,
                                                 VAR_17, VAR_18, VAR_19);
    VAR_13 = (v16u8) FUNC_6((v2i64) VAR_8, 1, (v2i64) VAR_9);
    VAR_14 = (v16u8) FUNC_6((v2i64) VAR_10, 1, (v2i64) VAR_11);
    VAR_15 = FUNC_5(VAR_15, VAR_13);
    VAR_16 = FUNC_5(VAR_16, VAR_14);
    FUNC_4(VAR_15, VAR_16, 0, 1, 0, 1, VAR_2 + 4 * VAR_3, VAR_3);
}
