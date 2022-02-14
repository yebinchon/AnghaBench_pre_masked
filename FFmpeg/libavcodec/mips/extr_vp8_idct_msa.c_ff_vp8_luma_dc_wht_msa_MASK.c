
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef scalar_t__ v4i32 ;
typedef int int16_t ;


 int FUNC_0 (scalar_t__,int,scalar_t__,int,scalar_t__,int,scalar_t__,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (int *,int,int ,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_4 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int *,int ,int) ;

void FUNC_8(int16_t VAR_0[4][4][16], int16_t VAR_1[16])
{
    int16_t *VAR_2 = &VAR_0[0][0][0];
    v8i16 VAR_3, VAR_4;
    v4i32 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    v4i32 VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;


    FUNC_2(VAR_1, 8, VAR_3, VAR_4);
    FUNC_5(VAR_3, VAR_5, VAR_6);
    FUNC_5(VAR_4, VAR_7, VAR_8);
    FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
    FUNC_1(VAR_9, VAR_12, VAR_11, VAR_10, VAR_13, VAR_14, VAR_16, VAR_15);

    FUNC_4(VAR_13, VAR_14, VAR_15, VAR_16, VAR_13, VAR_14, VAR_15, VAR_16);
    FUNC_1(VAR_13, VAR_14, VAR_15, VAR_16, VAR_9, VAR_10, VAR_11, VAR_12);
    FUNC_1(VAR_9, VAR_12, VAR_11, VAR_10, VAR_17, VAR_18, VAR_20, VAR_19);
    FUNC_0(VAR_17, 3, VAR_18, 3, VAR_19, 3, VAR_20, 3, VAR_17, VAR_18, VAR_19, VAR_20);
    FUNC_3(VAR_17, VAR_18, VAR_19, VAR_20, 3);
    VAR_2[0] = FUNC_6((v8i16) VAR_17, 0);
    VAR_2[16] = FUNC_6((v8i16) VAR_18, 0);
    VAR_2[32] = FUNC_6((v8i16) VAR_19, 0);
    VAR_2[48] = FUNC_6((v8i16) VAR_20, 0);
    VAR_2[64] = FUNC_6((v8i16) VAR_17, 2);
    VAR_2[80] = FUNC_6((v8i16) VAR_18, 2);
    VAR_2[96] = FUNC_6((v8i16) VAR_19, 2);
    VAR_2[112] = FUNC_6((v8i16) VAR_20, 2);
    VAR_2[128] = FUNC_6((v8i16) VAR_17, 4);
    VAR_2[144] = FUNC_6((v8i16) VAR_18, 4);
    VAR_2[160] = FUNC_6((v8i16) VAR_19, 4);
    VAR_2[176] = FUNC_6((v8i16) VAR_20, 4);
    VAR_2[192] = FUNC_6((v8i16) VAR_17, 6);
    VAR_2[208] = FUNC_6((v8i16) VAR_18, 6);
    VAR_2[224] = FUNC_6((v8i16) VAR_19, 6);
    VAR_2[240] = FUNC_6((v8i16) VAR_20, 6);

    FUNC_7(VAR_1, 0, 4 * 4 * sizeof(int16_t));
}
