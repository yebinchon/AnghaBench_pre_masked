
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (float) ;
 int** VAR_0 ;
 int FUNC_1 (float) ;

float FUNC_2(int VAR_1, int VAR_2, int VAR_3)
{
    float VAR_4 = ((float)VAR_2/VAR_3)*5;
    int VAR_5 = FUNC_1(VAR_4);
    int VAR_6 = FUNC_0(VAR_4);
    VAR_4 -= VAR_5;
    float VAR_7 = (1-VAR_4) * VAR_0[VAR_5][VAR_1] + VAR_4*VAR_0[VAR_6][VAR_1];

    return VAR_7;
}
