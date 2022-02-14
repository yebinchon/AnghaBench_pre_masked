
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef scalar_t__ v16u8 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int int8_t ;
typedef int int64_t ;
typedef int int32_t ;


 int FUNC_0 (int ,int ,int ,int ,scalar_t__,scalar_t__,int *,int) ;
 int FUNC_1 (int ,int ,int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int *,int,int ,int ,int ,int ) ;
 int FUNC_4 (int const*,int,int ,int ,int ,int ) ;
 int FUNC_5 (int const*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,int ,int ,int) ;
 int FUNC_8 (int ,int ,int,int,int,int ,int ,int ,int ) ;
 int FUNC_9 (int ,int ,int ,int ,int) ;
 int FUNC_10 (int ,int ,int ,int ) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_11(const uint8_t *VAR_1,
                                             int32_t VAR_2,
                                             uint8_t *VAR_3, int32_t VAR_4,
                                             const int8_t *VAR_5,
                                             int32_t VAR_6)
{
    int32_t VAR_7;
    int64_t VAR_8, VAR_9, VAR_10, VAR_11;
    v16i8 VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
    v16u8 VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
    v8i16 VAR_26, VAR_27, VAR_28, VAR_29, VAR_30;

    VAR_20 = FUNC_6(&VAR_0[0]);
    VAR_1 -= 3;


    VAR_26 = FUNC_5(VAR_5);
    FUNC_8(VAR_26, 0, 1, 2, 3, VAR_16, VAR_17, VAR_18, VAR_19);

    VAR_21 = VAR_20 + 2;
    VAR_22 = VAR_20 + 4;
    VAR_23 = VAR_20 + 6;

    for (VAR_7 = (VAR_6 >> 2); VAR_7--;) {
        FUNC_4(VAR_1, VAR_2, VAR_12, VAR_13, VAR_14, VAR_15);
        FUNC_10(VAR_12, VAR_13, VAR_14, VAR_15);
        VAR_1 += (4 * VAR_2);
        FUNC_1(VAR_12, VAR_13, VAR_14, VAR_15, VAR_20, VAR_21, VAR_22,
                                   VAR_23, VAR_16, VAR_17, VAR_18, VAR_19, VAR_27,
                                   VAR_28, VAR_29, VAR_30);
        FUNC_3(VAR_3, VAR_4, VAR_8, VAR_9, VAR_10, VAR_11);
        FUNC_2(VAR_8, VAR_9, VAR_24);
        FUNC_2(VAR_10, VAR_11, VAR_25);
        FUNC_9(VAR_27, VAR_28, VAR_29, VAR_30, 7);
        FUNC_7(VAR_27, VAR_28, VAR_29, VAR_30, 7);
        FUNC_0(VAR_27, VAR_28, VAR_29, VAR_30, VAR_24, VAR_25,
                                VAR_3, VAR_4);
        VAR_3 += (4 * VAR_4);
    }
}
