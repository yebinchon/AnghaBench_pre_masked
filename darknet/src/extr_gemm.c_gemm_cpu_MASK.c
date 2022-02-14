
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int,int,float,float*,int,float*,int,float*,int) ;
 int FUNC_1 (int,int,int,float,float*,int,float*,int,float*,int) ;
 int FUNC_2 (int,int,int,float,float*,int,float*,int,float*,int) ;
 int FUNC_3 (int,int,int,float,float*,int,float*,int,float*,int) ;

void FUNC_4(int VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, float VAR_5,
        float *VAR_6, int VAR_7,
        float *VAR_8, int VAR_9,
        float VAR_10,
        float *VAR_11, int VAR_12)
{

    int VAR_13, VAR_14;
    for(VAR_13 = 0; VAR_13 < VAR_2; ++VAR_13){
        for(VAR_14 = 0; VAR_14 < VAR_3; ++VAR_14){
            VAR_11[VAR_13*VAR_12 + VAR_14] *= VAR_10;
        }
    }
    if(!VAR_0 && !VAR_1)
        FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5,VAR_6,VAR_7, VAR_8, VAR_9,VAR_11,VAR_12);
    else if(VAR_0 && !VAR_1)
        FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5,VAR_6,VAR_7, VAR_8, VAR_9,VAR_11,VAR_12);
    else if(!VAR_0 && VAR_1)
        FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5,VAR_6,VAR_7, VAR_8, VAR_9,VAR_11,VAR_12);
    else
        FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5,VAR_6,VAR_7, VAR_8, VAR_9,VAR_11,VAR_12);
}
