
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int settings; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int gint ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int,float*,float*,float*,int*) ;

float
FUNC_2(signal_user_data_t *VAR_0)
{
    float VAR_1;
    gint VAR_2;
    VAR_2 = FUNC_0(VAR_0->settings, "VideoEncoder");

    switch (VAR_2)
    {
    case 128:
    case 131:
    case 130:
    case 129:
    case 132:
    case 133:
        return 20;
    case 134:
        return 45;
    case 136:
    case 135:
        return 3;
    default:
    {
        float VAR_3, VAR_4, VAR_5;
        int VAR_6;

        FUNC_1(VAR_2, &VAR_3, &VAR_4, &VAR_5, &VAR_6);


        VAR_1 = (VAR_4 - VAR_3) * 0.7;
        if (VAR_6)
            VAR_1 = VAR_4 - VAR_1;
    }
    }
    return VAR_1;
}
