
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v8u16 ;
typedef int v8i16 ;
typedef scalar_t__ v16u8 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int int8_t ;
typedef int int32_t ;


 scalar_t__ FUNC_0 (int ,int ,int ,scalar_t__,int) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int *,int,int ,int ,int ,int ) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*,int,int ,int ,int ,int ) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int *,int) ;
 int FUNC_7 (scalar_t__,scalar_t__,int) ;
 int FUNC_8 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int const* VAR_0 ;

__attribute__((used)) static void FUNC_12(const uint8_t *VAR_1,
                                                       int32_t VAR_2,
                                                       uint8_t *VAR_3,
                                                       int32_t VAR_4,
                                                       const int8_t *VAR_5,
                                                       const int8_t *VAR_6,
                                                       int32_t VAR_7)
{
    uint32_t VAR_8;
    uint64_t VAR_9, VAR_10, VAR_11, VAR_12;
    v16i8 VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
    v16u8 VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
    v8u16 VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;
    v8i16 VAR_30;

    VAR_18 = FUNC_3(&VAR_0[0]);


    VAR_30 = FUNC_5(VAR_5);
    VAR_19 = (v16u8) FUNC_11(VAR_30, 0);

    VAR_30 = FUNC_5(VAR_6);
    VAR_20 = (v16u8) FUNC_11(VAR_30, 0);

    VAR_13 = FUNC_3(VAR_1);
    VAR_1 += VAR_2;

    VAR_24 = FUNC_0(VAR_13, VAR_13, VAR_18, VAR_19, 7);

    for (VAR_8 = (VAR_7 >> 2); VAR_8--;) {
        FUNC_4(VAR_1, VAR_2, VAR_14, VAR_15, VAR_16, VAR_17);
        VAR_1 += (4 * VAR_2);

        VAR_25 = FUNC_0(VAR_14, VAR_14, VAR_18, VAR_19, 7);
        VAR_21 = (v16u8) FUNC_10((v16i8) VAR_25, (v16i8) VAR_24);
        VAR_26 = FUNC_9(VAR_21, VAR_20);

        VAR_24 = FUNC_0(VAR_15, VAR_15, VAR_18, VAR_19, 7);
        VAR_21 = (v16u8) FUNC_10((v16i8) VAR_24, (v16i8) VAR_25);
        VAR_27 = FUNC_9(VAR_21, VAR_20);

        FUNC_8(VAR_26, VAR_27, 7);
        FUNC_7(VAR_26, VAR_27, 7);

        VAR_25 = FUNC_0(VAR_16, VAR_16, VAR_18, VAR_19, 7);
        VAR_21 = (v16u8) FUNC_10((v16i8) VAR_25, (v16i8) VAR_24);
        VAR_28 = FUNC_9(VAR_21, VAR_20);

        VAR_24 = FUNC_0(VAR_17, VAR_17, VAR_18, VAR_19, 7);
        VAR_21 = (v16u8) FUNC_10((v16i8) VAR_24, (v16i8) VAR_25);
        VAR_29 = FUNC_9(VAR_21, VAR_20);

        FUNC_8(VAR_28, VAR_29, 7);
        FUNC_7(VAR_28, VAR_29, 7);
        FUNC_2(VAR_3, VAR_4, VAR_9, VAR_10, VAR_11, VAR_12);
        FUNC_1(VAR_9, VAR_10, VAR_22);
        FUNC_1(VAR_11, VAR_12, VAR_23);
        FUNC_6(VAR_26, VAR_27, VAR_28, VAR_29, VAR_22, VAR_23, VAR_3, VAR_4);
        VAR_3 += (4 * VAR_4);
    }
}
