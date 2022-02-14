
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (double*,double*,int) ;

__attribute__((used)) static void FUNC_1(double * VAR_0, int VAR_1, int VAR_2)
{
    double * VAR_3 = &VAR_0[VAR_1];
    double * VAR_4 = &VAR_0[VAR_1 + 1];
    int VAR_5 = (VAR_2 - (VAR_1 + 1)) * sizeof(double);
    FUNC_0(VAR_3, VAR_4, VAR_5);
}
