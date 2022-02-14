
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* FUNC_0 (int,int) ;
 int FUNC_1 (int*,int ,int) ;
 scalar_t__ FUNC_2 (float*,int) ;
 int FUNC_3 (float*,int*,int*,int,int,scalar_t__) ;

__attribute__((used)) static int *FUNC_4(float *VAR_0)
{
    int *VAR_1 = FUNC_0(19*19, sizeof(int));
    int VAR_2[19*19];
    int VAR_3, VAR_4;
    for(VAR_4 = 0; VAR_4 < 19; ++VAR_4){
        for(VAR_3 = 0; VAR_3 < 19; ++VAR_3){
            FUNC_1(VAR_2, 0, 19*19*sizeof(int));
            int VAR_5 = VAR_4*19 + VAR_3;
            if(!FUNC_2(VAR_0,VAR_5)){
                if ((VAR_3 > 0) && FUNC_2(VAR_0,VAR_5 - 1)) FUNC_3(VAR_0, VAR_1, VAR_2, VAR_4, VAR_3-1, FUNC_2(VAR_0,VAR_5-1));
                if ((VAR_3 < 18) && FUNC_2(VAR_0,VAR_5 + 1)) FUNC_3(VAR_0, VAR_1, VAR_2, VAR_4, VAR_3+1, FUNC_2(VAR_0,VAR_5+1));
                if ((VAR_4 > 0) && FUNC_2(VAR_0,VAR_5 - 19)) FUNC_3(VAR_0, VAR_1, VAR_2, VAR_4-1, VAR_3, FUNC_2(VAR_0,VAR_5-19));
                if ((VAR_4 < 18) && FUNC_2(VAR_0,VAR_5 + 19)) FUNC_3(VAR_0, VAR_1, VAR_2, VAR_4+1, VAR_3, FUNC_2(VAR_0,VAR_5+19));
            }
        }
    }
    return VAR_1;
}
