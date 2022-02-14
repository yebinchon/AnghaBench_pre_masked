
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_1__ ;


typedef int v8u16 ;
typedef int v4i32 ;
typedef scalar_t__ v16u8 ;
struct TYPE_20__ {int member_0; } ;
typedef TYPE_1__ v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,int ,int ,int ) ;
 int FUNC_3 (TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,scalar_t__,scalar_t__,scalar_t__) ;
 TYPE_1__ FUNC_4 (int const*) ;
 int FUNC_5 (int const*,int,TYPE_1__,TYPE_1__) ;
 int FUNC_6 (int*,int,scalar_t__,scalar_t__) ;
 int FUNC_7 (int ,int ,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_8 (TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,int,TYPE_1__,TYPE_1__,TYPE_1__) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int ,int*) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static void FUNC_12(const uint8_t *VAR_0,
                                              int32_t VAR_1,
                                              uint8_t *VAR_2, int32_t VAR_3,
                                              uint8_t VAR_4)
{
    uint8_t VAR_5;
    uint32_t VAR_6, VAR_7;
    v16i8 VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    v16u8 VAR_14, VAR_15, VAR_16;
    v8u16 VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
    v16u8 VAR_22, VAR_23, VAR_24, VAR_25;
    v16i8 VAR_26 = { 0 };

    VAR_8 = FUNC_4(VAR_0);
    VAR_0 += VAR_1;

    for (VAR_5 = (VAR_4 >> 1); VAR_5--;) {
        FUNC_5(VAR_0, VAR_1, VAR_9, VAR_10);
        VAR_0 += (2 * VAR_1);

        FUNC_6(VAR_2, VAR_3, VAR_22, VAR_23);
        FUNC_8(VAR_26, VAR_8, VAR_26, VAR_9, VAR_26, VAR_10, 1, VAR_11,
                   VAR_12, VAR_13);
        FUNC_3(VAR_11, VAR_8, VAR_12, VAR_9, VAR_13, VAR_10, VAR_14,
                   VAR_15, VAR_16);
        FUNC_2(VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19);
        FUNC_0(VAR_17, VAR_18, VAR_18, VAR_19, VAR_20, VAR_21);
        FUNC_9(VAR_20, VAR_21, 2);
        FUNC_7(VAR_20, VAR_20, VAR_21, VAR_21, VAR_24, VAR_25);
        FUNC_1(VAR_22, VAR_24, VAR_23, VAR_25, VAR_24, VAR_25);

        VAR_6 = FUNC_11((v4i32) VAR_24, 0);
        VAR_7 = FUNC_11((v4i32) VAR_25, 0);
        FUNC_10(VAR_6, VAR_2);
        VAR_2 += VAR_3;
        FUNC_10(VAR_7, VAR_2);
        VAR_2 += VAR_3;

        VAR_8 = VAR_10;
    }
}
