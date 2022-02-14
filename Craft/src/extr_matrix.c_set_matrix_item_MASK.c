
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (float*) ;
 int FUNC_1 (float*,float*,float*) ;
 int FUNC_2 (float*,float,float,float,float,int,int) ;
 int FUNC_3 (float*,int,int,int ,int) ;
 int FUNC_4 (float*,float,float,int ) ;

void FUNC_5(float *VAR_1, int VAR_2, int VAR_3, int VAR_4) {
    float VAR_5[16];
    float VAR_6[16];
    float VAR_7 = (float)VAR_2 / VAR_3;
    float VAR_8 = 64 * VAR_4;
    float VAR_9 = VAR_3 / VAR_8 / 2;
    float VAR_10 = 1 - VAR_8 / VAR_2 * 2;
    float VAR_11 = 1 - VAR_8 / VAR_3 * 2;
    FUNC_0(VAR_5);
    FUNC_3(VAR_6, 0, 1, 0, -VAR_0 / 4);
    FUNC_1(VAR_5, VAR_6, VAR_5);
    FUNC_3(VAR_6, 1, 0, 0, -VAR_0 / 10);
    FUNC_1(VAR_5, VAR_6, VAR_5);
    FUNC_2(VAR_6, -VAR_9 * VAR_7, VAR_9 * VAR_7, -VAR_9, VAR_9, -1, 1);
    FUNC_1(VAR_5, VAR_6, VAR_5);
    FUNC_4(VAR_6, -VAR_10, -VAR_11, 0);
    FUNC_1(VAR_5, VAR_6, VAR_5);
    FUNC_0(VAR_1);
    FUNC_1(VAR_1, VAR_5, VAR_1);
}
