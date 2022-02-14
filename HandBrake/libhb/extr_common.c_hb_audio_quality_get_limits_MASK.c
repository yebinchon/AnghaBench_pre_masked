
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
 float VAR_0 ;

void FUNC_0(uint32_t VAR_1, float *VAR_2, float *VAR_3,
                                 float *VAR_4, int *VAR_5)
{
    switch (VAR_1)
    {
        case 130:
            *VAR_5 = 0;
            *VAR_4 = 1.;
            *VAR_2 = 1.;
            *VAR_3 = 10.;
            break;

        case 131:
        case 132:
            *VAR_5 = 0;
            *VAR_4 = 1.;
            *VAR_2 = 1.;
            *VAR_3 = 5.;
            break;

        case 129:
            *VAR_5 = 1;
            *VAR_4 = 0.5;
            *VAR_2 = 0.;
            *VAR_3 = 10.;
            break;

        case 128:
            *VAR_5 = 0;
            *VAR_4 = 0.5;
            *VAR_2 = -2.;
            *VAR_3 = 10.;
            break;

        case 133:
            *VAR_5 = 0;
            *VAR_4 = 9.;
            *VAR_2 = 1.;
            *VAR_3 = 127.;
            break;

        default:
            *VAR_5 = 0;
            *VAR_4 = 1.;
            *VAR_2 = *VAR_3 = VAR_0;
            break;
    }
}
