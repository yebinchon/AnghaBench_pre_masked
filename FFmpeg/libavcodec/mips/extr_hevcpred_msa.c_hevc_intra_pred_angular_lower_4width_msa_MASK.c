
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


typedef int v8i16 ;
typedef int v4i32 ;
struct TYPE_15__ {int member_0; } ;
typedef TYPE_1__ v16u8 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,int,int,int,int) ;
 int FUNC_1 (int,int,int,int,int,int) ;
 int FUNC_2 (int const*) ;
 TYPE_1__ FUNC_3 (int const*) ;
 int FUNC_4 (int,int,int,int,int,int) ;
 int FUNC_5 (int,int,int,int,scalar_t__,scalar_t__) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (TYPE_1__,int,TYPE_1__,int,TYPE_1__,int,TYPE_1__,int,int,int,int,int,int) ;
 int FUNC_8 (int,int,int) ;
 int FUNC_9 (scalar_t__,int ,int,int *,int) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (scalar_t__,scalar_t__) ;
 int* VAR_0 ;

__attribute__((used)) static void FUNC_14(const uint8_t *VAR_1,
                                                     const uint8_t *VAR_2,
                                                     uint8_t *VAR_3,
                                                     int32_t VAR_4,
                                                     int32_t VAR_5)
{
    int16_t VAR_6[] = { -4096, -1638, -910, -630, -482, -390, -315 };
    uint8_t VAR_7[3 * 32 + 4];
    uint8_t *VAR_8 = VAR_7 + 4;
    const uint8_t *VAR_9;
    int32_t VAR_10, VAR_11;
    int32_t VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
    int32_t VAR_17, VAR_18, VAR_19, VAR_20;
    int32_t VAR_21, VAR_22, VAR_23;
    uint64_t VAR_24;
    v16i8 VAR_25, VAR_26;
    v16u8 VAR_27, VAR_28, VAR_29, VAR_30;
    v16u8 VAR_31 = { 0 };
    v8i16 VAR_32, VAR_33, VAR_34, VAR_35, VAR_36, VAR_37, VAR_38, VAR_39;
    v8i16 VAR_40, VAR_41, VAR_42, VAR_43, VAR_44, VAR_45, VAR_46, VAR_47;

    VAR_21 = VAR_0[VAR_5 - 2];
    VAR_10 = VAR_21 >> 3;
    VAR_22 = VAR_21;

    VAR_9 = VAR_2 - 1;
    if (VAR_10 < -1) {
        VAR_23 = VAR_6[VAR_5 - 11];

        VAR_24 = FUNC_2(VAR_9);
        FUNC_6(VAR_24, VAR_8);

        for (VAR_12 = VAR_10; VAR_12 <= -1; VAR_12++) {
            VAR_11 = -1 + ((VAR_12 * VAR_23 + 128) >> 8);
            VAR_8[VAR_12] = VAR_1[VAR_11];
        }

        VAR_9 = VAR_8;
    }

    VAR_13 = VAR_22 >> 5;
    VAR_14 = VAR_22 & 31;
    VAR_22 += VAR_21;

    VAR_15 = VAR_22 >> 5;
    VAR_16 = VAR_22 & 31;
    VAR_22 += VAR_21;

    VAR_17 = VAR_22 >> 5;
    VAR_18 = VAR_22 & 31;
    VAR_22 += VAR_21;

    VAR_19 = VAR_22 >> 5;
    VAR_20 = VAR_22 & 31;

    VAR_27 = FUNC_3(VAR_9 + VAR_13 + 1);
    VAR_28 = FUNC_3(VAR_9 + VAR_15 + 1);
    VAR_29 = FUNC_3(VAR_9 + VAR_17 + 1);
    VAR_30 = FUNC_3(VAR_9 + VAR_19 + 1);

    VAR_40 = FUNC_10(VAR_14);
    VAR_41 = FUNC_10(32 - VAR_14);
    VAR_42 = FUNC_10(VAR_16);
    VAR_43 = FUNC_10(32 - VAR_16);
    VAR_44 = FUNC_10(VAR_18);
    VAR_45 = FUNC_10(32 - VAR_18);
    VAR_46 = FUNC_10(VAR_20);
    VAR_47 = FUNC_10(32 - VAR_20);

    FUNC_1(VAR_42, VAR_40, VAR_46, VAR_44, VAR_40, VAR_42);
    FUNC_1(VAR_43, VAR_41, VAR_47, VAR_45, VAR_41, VAR_43);
    FUNC_0(VAR_31, VAR_27, VAR_31, VAR_28, VAR_31, VAR_29, VAR_31, VAR_30,
               VAR_32, VAR_34, VAR_36, VAR_38);
    FUNC_7(VAR_31, VAR_32, VAR_31, VAR_34, VAR_31, VAR_36, VAR_31, VAR_38, 2,
               VAR_33, VAR_35, VAR_37, VAR_39);
    FUNC_1(VAR_34, VAR_32, VAR_38, VAR_36, VAR_32, VAR_34);
    FUNC_1(VAR_35, VAR_33, VAR_39, VAR_37, VAR_33, VAR_35);
    FUNC_4(VAR_33, VAR_40, VAR_35, VAR_42, VAR_33, VAR_35);

    VAR_33 += VAR_32 * VAR_41;
    VAR_35 += VAR_34 * VAR_43;

    FUNC_8(VAR_33, VAR_35, 5);
    FUNC_5(VAR_33, VAR_33, VAR_35, VAR_35, VAR_25, VAR_26);

    VAR_32 = (v8i16) FUNC_11(VAR_26, VAR_25);
    VAR_33 = (v8i16) FUNC_13(VAR_26, VAR_25);

    VAR_34 = (v8i16) FUNC_12((v4i32) VAR_33, (v4i32) VAR_32);

    VAR_25 = FUNC_11((v16i8) VAR_34, (v16i8) VAR_34);
    VAR_26 = FUNC_13((v16i8) VAR_34, (v16i8) VAR_34);

    FUNC_9(VAR_25, 0, 1, VAR_3, VAR_4);
    FUNC_9(VAR_26, 0, 1, VAR_3 + 2 * VAR_4, VAR_4);
}
