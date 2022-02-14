
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int prefs; int settings; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int gint ;


 float FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int,float*,float*,float*,int*) ;

void
FUNC_3(
    signal_user_data_t *VAR_0,
    float *VAR_1,
    float *VAR_2,
    float *VAR_3,
    float *VAR_4,
    gint *VAR_5,
    int *VAR_6)
{
    float VAR_7;
    gint VAR_8;
    VAR_8 = FUNC_1(VAR_0->settings, "VideoEncoder");

    *VAR_4 = 10;
    *VAR_5 = 0;
    FUNC_2(VAR_8, VAR_1, VAR_2, &VAR_7, VAR_6);
    *VAR_3 = FUNC_0(VAR_0->prefs, "VideoQualityGranularity");

    if (*VAR_3 < VAR_7)
        *VAR_3 = VAR_7;

    if ((int)(*VAR_3 * 100) % 10 != 0)
        *VAR_5 = 2;
    else if ((int)(*VAR_3 * 10) % 10 != 0)
        *VAR_5 = 1;
}
