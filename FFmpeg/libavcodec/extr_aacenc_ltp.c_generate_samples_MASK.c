
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lag; float coef; scalar_t__ present; } ;
typedef TYPE_1__ LongTermPrediction ;


 int FUNC_0 (float*,int ,int) ;

__attribute__((used)) static void FUNC_1(float *VAR_0, LongTermPrediction *VAR_1)
{
    int VAR_2, VAR_3 = 2048;
    if (!VAR_1->lag) {
        VAR_1->present = 0;
        return;
    } else if (VAR_1->lag < 1024) {
        VAR_3 = VAR_1->lag + 1024;
    }
    for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
        VAR_0[VAR_2] = VAR_1->coef*VAR_0[VAR_2 + 2048 - VAR_1->lag];
    FUNC_0(&VAR_0[VAR_2], 0, (2048 - VAR_2)*sizeof(float));
}
