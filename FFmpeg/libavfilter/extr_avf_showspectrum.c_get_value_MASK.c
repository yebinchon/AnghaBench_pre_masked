
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv; } ;
struct TYPE_4__ {float** magnitudes; float** phases; int data; int scale; } ;
typedef TYPE_1__ ShowSpectrumContext ;
typedef TYPE_2__ AVFilterContext ;
 int FUNC_0 (int ) ;
 float FUNC_1 (float,int,int) ;
 float FUNC_2 (float) ;
 float FUNC_3 (float) ;
 float FUNC_4 (float,double) ;
 float FUNC_5 (float) ;

__attribute__((used)) static float FUNC_6(AVFilterContext *VAR_0, int VAR_1, int VAR_2)
{
    ShowSpectrumContext *VAR_3 = VAR_0->priv;
    float *VAR_4 = VAR_3->magnitudes[VAR_1];
    float *VAR_5 = VAR_3->phases[VAR_1];
    float VAR_6;

    switch (VAR_3->data) {
    case 134:

        VAR_6 = VAR_4[VAR_2];
        break;
    case 133:

        VAR_6 = VAR_5[VAR_2];
        break;
    default:
        FUNC_0(0);
    }


    switch (VAR_3->scale) {
    case 130:
        VAR_6 = FUNC_1(VAR_6, 0, 1);
        break;
    case 128:
        VAR_6 = FUNC_1(FUNC_5(VAR_6), 0, 1);
        break;
    case 135:
        VAR_6 = FUNC_1(FUNC_2(VAR_6), 0, 1);
        break;
    case 131:
        VAR_6 = FUNC_1(FUNC_5(FUNC_5(VAR_6)), 0, 1);
        break;
    case 132:
        VAR_6 = FUNC_1(FUNC_4(VAR_6, 0.20), 0, 1);
        break;
    case 129:
        VAR_6 = 1.f + FUNC_3(FUNC_1(VAR_6, 1e-6, 1)) / 6.f;
        break;
    default:
        FUNC_0(0);
    }

    return VAR_6;
}
