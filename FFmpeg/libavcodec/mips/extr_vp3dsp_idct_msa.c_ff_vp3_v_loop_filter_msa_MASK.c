
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_1__ ;


typedef int v8i16 ;
typedef scalar_t__ v4i32 ;
struct TYPE_23__ {int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; int member_15; int member_14; int member_13; int member_12; int member_11; int member_10; int member_9; int member_8; int member_0; } ;
typedef TYPE_1__ v16i8 ;
typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef size_t int16_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_1__,int,TYPE_1__,int,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,int,int,int,int) ;
 int FUNC_3 (TYPE_1__,int,TYPE_1__,int,scalar_t__,scalar_t__) ;
 int FUNC_4 (int *,int,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__) ;
 int FUNC_5 (int*,int,scalar_t__,scalar_t__) ;
 int FUNC_6 (TYPE_1__,int ,int *) ;
 int FUNC_7 (int,size_t*) ;
 int FUNC_8 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__) ;

void FUNC_9(uint8_t *VAR_0, ptrdiff_t VAR_1,
                              int *VAR_2)
{
    int VAR_3 = -VAR_1;
    v4i32 VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
    v16i8 VAR_10 = {0};
    v16i8 VAR_11, VAR_12, VAR_13, VAR_14;
    v8i16 VAR_15, VAR_16, VAR_17, VAR_18;
    v8i16 VAR_19;
    v8i16 VAR_20 = {3, 3, 3, 3, 3, 3, 3, 3},
          VAR_21 = {4, 4, 4, 4, 4, 4, 4, 4};
    v16i8 VAR_22 = {0, 4, 8, 12, 16, 20, 24, 28, 0, 0, 0, 0, 0, 0, 0, 0};
    int16_t VAR_23[8];
    int VAR_24[8];

    FUNC_4(VAR_0 + VAR_3 * 2, VAR_1, VAR_11, VAR_12, VAR_13, VAR_14);
    FUNC_2(VAR_10, VAR_11, VAR_10, VAR_12, VAR_10, VAR_13, VAR_10, VAR_14,
               VAR_15, VAR_16, VAR_17, VAR_18);
    VAR_19 = (VAR_15 - VAR_18) + (VAR_17 - VAR_16) * VAR_20;
    VAR_19 += VAR_21;
    VAR_19 = VAR_19 >> 3;

    FUNC_7(VAR_19, VAR_23);
    for (int VAR_25 = 0; VAR_25 < 8; VAR_25++)
        VAR_24[VAR_25] = VAR_2[VAR_23[VAR_25]];
    FUNC_5(VAR_24, 4, VAR_4, VAR_5);
    FUNC_3(VAR_10, VAR_16, VAR_10, VAR_17, VAR_6, VAR_8);
    FUNC_1(VAR_10, VAR_16, VAR_10, VAR_17, VAR_7, VAR_9);
    VAR_6 += VAR_4;
    VAR_7 += VAR_5;
    VAR_8 -= VAR_4;
    VAR_9 -= VAR_5;
    FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9);
    FUNC_8(VAR_6, VAR_7, VAR_8, VAR_9, VAR_22, VAR_22, VAR_12, VAR_13);


    FUNC_6(VAR_12, 0, VAR_0 + VAR_3);
    FUNC_6(VAR_13, 0, VAR_0);
}
