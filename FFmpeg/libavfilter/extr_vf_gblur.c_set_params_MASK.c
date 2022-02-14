
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (double,int) ;
 double FUNC_1 (double) ;

__attribute__((used)) static void FUNC_2(float VAR_0, int VAR_1, float *VAR_2, float *VAR_3, float *VAR_4)
{
    double VAR_5, VAR_6;

    VAR_6 = (VAR_0 * VAR_0) / (2.0 * VAR_1);
    VAR_5 = (1.0 + 2.0 * VAR_6 - FUNC_1(1.0 + 4.0 * VAR_6)) / (2.0 * VAR_6);
    *VAR_2 = FUNC_0(VAR_5 / VAR_6, VAR_1);
    *VAR_3 = 1.0 / (1.0 - VAR_5);
    *VAR_4 = (float)VAR_5;
}
