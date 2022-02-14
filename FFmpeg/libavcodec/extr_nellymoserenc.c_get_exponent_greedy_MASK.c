
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int NellyMoserEncodeContext ;


 int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (float,int*,int ,int,int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_1(NellyMoserEncodeContext *VAR_5, float *VAR_6, int *VAR_7)
{
    int VAR_8, VAR_9, VAR_10 = 0;
    float VAR_11;


    FUNC_0(VAR_6[0], VAR_2, VAR_4, -20, 96);
    VAR_7[0] = VAR_9;
    VAR_10 = VAR_2[VAR_9];

    for (VAR_8 = 1; VAR_8 < VAR_0; VAR_8++) {
        VAR_11 = VAR_6[VAR_8] - VAR_10;
        FUNC_0(VAR_11, VAR_1, VAR_3, 37, 78);
        VAR_7[VAR_8] = VAR_9;
        VAR_10 += VAR_1[VAR_9];
    }
}
