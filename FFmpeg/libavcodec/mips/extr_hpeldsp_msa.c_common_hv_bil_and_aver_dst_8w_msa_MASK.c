
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_1__ ;


typedef int v8u16 ;
typedef int v16u8 ;
struct TYPE_32__ {int member_0; } ;
typedef TYPE_1__ v16i8 ;
typedef int uint8_t ;
typedef int int32_t ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,int ,int ) ;
 int FUNC_4 (TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,int ,int ,int ) ;
 TYPE_1__ FUNC_5 (int const*) ;
 int FUNC_6 (int const*,int,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__) ;
 int FUNC_7 (int*,int,int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ,int ,int ,int ,int ,int ,int*,int) ;
 int FUNC_9 (TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,int,TYPE_1__,TYPE_1__) ;
 int FUNC_10 (TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,int,TYPE_1__,TYPE_1__,TYPE_1__) ;
 int FUNC_11 (int ,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_12(const uint8_t *VAR_0,
                                              int32_t VAR_1,
                                              uint8_t *VAR_2, int32_t VAR_3,
                                              uint8_t VAR_4)
{
    uint8_t VAR_5;
    v16i8 VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
    v16i8 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    v16u8 VAR_16, VAR_17, VAR_18, VAR_19;
    v16u8 VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
    v8u16 VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;
    v8u16 VAR_30, VAR_31, VAR_32, VAR_33;
    v16i8 VAR_34 = { 0 };

    VAR_6 = FUNC_5(VAR_0);
    VAR_0 += VAR_1;

    for (VAR_5 = (VAR_4 >> 2); VAR_5--;) {
        FUNC_6(VAR_0, VAR_1, VAR_7, VAR_8, VAR_9, VAR_10);
        VAR_0 += (4 * VAR_1);

        FUNC_7(VAR_2, VAR_3, VAR_16, VAR_17, VAR_18, VAR_19);
        FUNC_10(VAR_34, VAR_6, VAR_34, VAR_7, VAR_34, VAR_8, 1, VAR_11,
                   VAR_12, VAR_13);
        FUNC_9(VAR_34, VAR_9, VAR_34, VAR_10, 1, VAR_14, VAR_15);
        FUNC_4(VAR_11, VAR_6, VAR_12, VAR_7, VAR_13, VAR_8, VAR_20,
                   VAR_21, VAR_22);
        FUNC_3(VAR_14, VAR_9, VAR_15, VAR_10, VAR_23, VAR_24);
        FUNC_2(VAR_20, VAR_21, VAR_22, VAR_25, VAR_26, VAR_27);
        FUNC_1(VAR_23, VAR_24, VAR_28, VAR_29);
        FUNC_0(VAR_25, VAR_26, VAR_26, VAR_27, VAR_27, VAR_28, VAR_28, VAR_29,
             VAR_30, VAR_31, VAR_32, VAR_33);
        FUNC_11(VAR_30, VAR_31, VAR_32, VAR_33, 2);
        FUNC_8(VAR_30, VAR_16, VAR_31, VAR_17,
                           VAR_32, VAR_18, VAR_33, VAR_19, VAR_2, VAR_3);
        VAR_2 += (4 * VAR_3);
        VAR_6 = VAR_10;
    }
}
