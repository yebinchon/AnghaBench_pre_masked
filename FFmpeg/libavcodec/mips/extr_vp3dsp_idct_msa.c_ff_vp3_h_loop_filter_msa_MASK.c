
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_1__ ;


typedef int v8i16 ;
typedef scalar_t__ v4i32 ;
struct TYPE_27__ {int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; int member_15; int member_14; int member_13; int member_12; int member_11; int member_10; int member_9; int member_8; int member_0; } ;
typedef TYPE_1__ v16i8 ;
typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef size_t int16_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_1__,int,TYPE_1__,int,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,int,int,int,int) ;
 int FUNC_3 (TYPE_1__,int,TYPE_1__,int,scalar_t__,scalar_t__) ;
 int FUNC_4 (int *,int,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__) ;
 int FUNC_5 (int*,int,scalar_t__,scalar_t__) ;
 int FUNC_6 (TYPE_1__,int ,int,int,int,int *,int) ;
 int FUNC_7 (int,size_t*) ;
 int FUNC_8 (int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int) ;
 int FUNC_9 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__) ;

void FUNC_10(uint8_t *VAR_0, ptrdiff_t VAR_1,
                              int *VAR_2)
{
    v16i8 VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
    v8i16 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
    v8i16 VAR_19;
    v4i32 VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
    v16i8 VAR_26 = {0};
    v8i16 VAR_27 = {3, 3, 3, 3, 3, 3, 3, 3},
          VAR_28 = {4, 4, 4, 4, 4, 4, 4, 4};
    v16i8 VAR_29 = {0, 16, 4, 20, 8, 24, 12, 28, 0, 0, 0, 0, 0, 0, 0, 0};
    int16_t VAR_30[8];
    int VAR_31[8];

    FUNC_4(VAR_0 - 2, VAR_1, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
    FUNC_2(VAR_26, VAR_3, VAR_26, VAR_4, VAR_26, VAR_5, VAR_26, VAR_6,
               VAR_11, VAR_12, VAR_13, VAR_14);
    FUNC_2(VAR_26, VAR_7, VAR_26, VAR_8, VAR_26, VAR_9, VAR_26, VAR_10,
               VAR_15, VAR_16, VAR_17, VAR_18);
    FUNC_8(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18,
                       VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18);
    VAR_19 = (VAR_11 - VAR_14) + (VAR_13 - VAR_12) * VAR_27;
    VAR_19 += VAR_28;
    VAR_19 = VAR_19 >> 3;


    FUNC_7(VAR_19, VAR_30);
    for (int VAR_32 = 0; VAR_32 < 8; VAR_32++)
        VAR_31[VAR_32] = VAR_2[VAR_30[VAR_32]];
    FUNC_5(VAR_31, 4, VAR_20, VAR_21);
    FUNC_3(VAR_26, VAR_12, VAR_26, VAR_13, VAR_22, VAR_24);
    FUNC_1(VAR_26, VAR_12, VAR_26, VAR_13, VAR_23, VAR_25);
    VAR_22 += VAR_20;
    VAR_23 += VAR_21;
    VAR_24 -= VAR_20;
    VAR_25 -= VAR_21;
    FUNC_0(VAR_22, VAR_23, VAR_24, VAR_25);
    FUNC_9(VAR_22, VAR_24, VAR_23, VAR_25, VAR_29, VAR_29, VAR_4, VAR_5);

    FUNC_6(VAR_4, 0, 1, 2, 3, VAR_0 - 1, VAR_1);
    FUNC_6(VAR_5, 0, 1, 2, 3, VAR_0 - 1 + 4 * VAR_1, VAR_1);
}
