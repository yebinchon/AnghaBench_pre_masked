
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_1__ ;


typedef int v8i16 ;
struct TYPE_34__ {int member_0; } ;
typedef TYPE_1__ v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,int,int) ;
 int FUNC_1 (TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,int,int,int,int) ;
 int FUNC_2 (int *,int,TYPE_1__,TYPE_1__) ;
 int FUNC_3 (int *,int,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__) ;
 int FUNC_4 (int *,int,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__) ;
 int FUNC_5 (int *,int,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__) ;
 int FUNC_6 (int,int,int,int,int) ;
 int FUNC_7 (int,int,int *,int) ;
 int FUNC_8 (int,int,int,int,int *,int) ;
 int FUNC_9 (int,int,int,int,int,int,int *,int) ;
 int FUNC_10 (int,int,int,int,int,int,int,int,int *,int) ;

__attribute__((used)) static void FUNC_11(uint8_t *VAR_0, int32_t VAR_1,
                             int16_t *VAR_2, int32_t VAR_3,
                             int32_t VAR_4)
{
    v16i8 VAR_5 = { 0 };

    if (2 == VAR_4) {
        v16i8 VAR_6, VAR_7;
        v8i16 VAR_8, VAR_9;

        FUNC_2(VAR_0, VAR_1, VAR_6, VAR_7);

        FUNC_0(VAR_5, VAR_6, VAR_5, VAR_7, VAR_8, VAR_9);
        VAR_8 <<= 6;
        VAR_9 <<= 6;
        FUNC_7(VAR_8, VAR_9, VAR_2, VAR_3);
    } else if (4 == VAR_4) {
        v16i8 VAR_10, VAR_11, VAR_12, VAR_13;
        v8i16 VAR_14, VAR_15, VAR_16, VAR_17;

        FUNC_3(VAR_0, VAR_1, VAR_10, VAR_11, VAR_12, VAR_13);

        FUNC_1(VAR_5, VAR_10, VAR_5, VAR_11, VAR_5, VAR_12, VAR_5, VAR_13,
                   VAR_14, VAR_15, VAR_16, VAR_17);
        FUNC_6(VAR_14, VAR_15, VAR_16, VAR_17, 6);
        FUNC_8(VAR_14, VAR_15, VAR_16, VAR_17, VAR_2, VAR_3);
    } else if (6 == VAR_4) {
        v16i8 VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
        v8i16 VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;

        FUNC_4(VAR_0, VAR_1, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23);

        FUNC_1(VAR_5, VAR_18, VAR_5, VAR_19, VAR_5, VAR_20, VAR_5, VAR_21,
                   VAR_24, VAR_25, VAR_26, VAR_27);
        FUNC_0(VAR_5, VAR_22, VAR_5, VAR_23, VAR_28, VAR_29);
        FUNC_6(VAR_24, VAR_25, VAR_26, VAR_27, 6);
        VAR_28 <<= 6;
        VAR_29 <<= 6;
        FUNC_9(VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_2, VAR_3);
    } else if (0 == VAR_4 % 8) {
        uint32_t VAR_30;
        v16i8 VAR_31, VAR_32, VAR_33, VAR_34, VAR_35, VAR_36, VAR_37, VAR_38;
        v8i16 VAR_39, VAR_40, VAR_41, VAR_42, VAR_43, VAR_44, VAR_45, VAR_46;

        for (VAR_30 = (VAR_4 >> 3); VAR_30--;) {
            FUNC_5(VAR_0, VAR_1,
                   VAR_31, VAR_32, VAR_33, VAR_34, VAR_35, VAR_36, VAR_37, VAR_38);
            VAR_0 += (8 * VAR_1);

            FUNC_1(VAR_5, VAR_31, VAR_5, VAR_32, VAR_5, VAR_33, VAR_5, VAR_34,
                       VAR_39, VAR_40, VAR_41, VAR_42);
            FUNC_1(VAR_5, VAR_35, VAR_5, VAR_36, VAR_5, VAR_37, VAR_5, VAR_38,
                       VAR_43, VAR_44, VAR_45, VAR_46);
            FUNC_6(VAR_39, VAR_40, VAR_41, VAR_42, 6);
            FUNC_6(VAR_43, VAR_44, VAR_45, VAR_46, 6);
            FUNC_10(VAR_39, VAR_40, VAR_41, VAR_42, VAR_43, VAR_44, VAR_45, VAR_46, VAR_2, VAR_3);
            VAR_2 += (8 * VAR_3);
        }
    }
}
