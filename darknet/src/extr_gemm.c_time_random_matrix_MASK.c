
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ clock_t ;


 float VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (float*) ;
 int FUNC_2 (int,int,int,int,int,int,float*,int,float*,int,int,float*,int) ;
 int FUNC_3 (char*,int,int,int,int,int,int,float) ;
 float* FUNC_4 (int,int) ;

void FUNC_5(int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
    float *VAR_6;
    if(!VAR_1) VAR_6 = FUNC_4(VAR_3,VAR_4);
    else VAR_6 = FUNC_4(VAR_4,VAR_3);
    int VAR_7 = (!VAR_1)?VAR_4:VAR_3;
    float *VAR_8;
    if(!VAR_2) VAR_8 = FUNC_4(VAR_4,VAR_5);
    else VAR_8 = FUNC_4(VAR_5,VAR_4);
    int VAR_9 = (!VAR_2)?VAR_5:VAR_4;

    float *VAR_10 = FUNC_4(VAR_3,VAR_5);
    int VAR_11;
    clock_t VAR_12 = FUNC_0(), VAR_13;
    for(VAR_11 = 0; VAR_11<10; ++VAR_11){
        FUNC_2(VAR_1,VAR_2,VAR_3,VAR_5,VAR_4,1,VAR_6,VAR_7,VAR_8,VAR_9,1,VAR_10,VAR_5);
    }
    VAR_13 = FUNC_0();
    FUNC_3("Matrix Multiplication %dx%d * %dx%d, TA=%d, TB=%d: %lf ms\n",VAR_3,VAR_4,VAR_4,VAR_5, VAR_1, VAR_2, (float)(VAR_13-VAR_12)/VAR_0);
    FUNC_1(VAR_6);
    FUNC_1(VAR_8);
    FUNC_1(VAR_10);
}
