
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (float) ;
 int FUNC_1 (float*) ;
 int FUNC_2 (float*,float*,float*) ;
 int FUNC_3 (float*,int,int,int,int,float,float) ;
 int FUNC_4 (float*,float,float,float,float) ;
 int FUNC_5 (float*,int ,int,int ,float) ;
 int FUNC_6 (float*,float,float,float) ;
 int FUNC_7 (float) ;

void FUNC_8(
    float *VAR_0, int VAR_1, int VAR_2,
    float VAR_3, float VAR_4, float VAR_5, float VAR_6, float VAR_7,
    float VAR_8, int VAR_9, int VAR_10)
{
    float VAR_11[16];
    float VAR_12[16];
    float VAR_13 = (float)VAR_1 / VAR_2;
    float VAR_14 = 0.125;
    float VAR_15 = VAR_10 * 32 + 64;
    FUNC_1(VAR_11);
    FUNC_6(VAR_12, -VAR_3, -VAR_4, -VAR_5);
    FUNC_2(VAR_11, VAR_12, VAR_11);
    FUNC_5(VAR_12, FUNC_0(VAR_6), 0, FUNC_7(VAR_6), VAR_7);
    FUNC_2(VAR_11, VAR_12, VAR_11);
    FUNC_5(VAR_12, 0, 1, 0, -VAR_6);
    FUNC_2(VAR_11, VAR_12, VAR_11);
    if (VAR_9) {
        int VAR_16 = VAR_9;
        FUNC_3(VAR_12, -VAR_16 * VAR_13, VAR_16 * VAR_13, -VAR_16, VAR_16, -VAR_15, VAR_15);
    }
    else {
        FUNC_4(VAR_12, VAR_8, VAR_13, VAR_14, VAR_15);
    }
    FUNC_2(VAR_11, VAR_12, VAR_11);
    FUNC_1(VAR_0);
    FUNC_2(VAR_0, VAR_11, VAR_0);
}
