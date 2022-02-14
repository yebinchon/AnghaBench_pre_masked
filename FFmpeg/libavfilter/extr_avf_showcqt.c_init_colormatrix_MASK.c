
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int csp; double** cmatrix; int ctx; } ;
typedef TYPE_1__ ShowCQTContext ;
 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;

__attribute__((used)) static void FUNC_1(ShowCQTContext *VAR_1)
{
    double VAR_2, VAR_3, VAR_4;


    switch (VAR_1->csp) {
    default:
        FUNC_0(VAR_1->ctx, VAR_0, "unsupported colorspace, setting it to unspecified.\n");
        VAR_1->csp = 128;
    case 128:
    case 133:
    case 130:
        VAR_2 = 0.299; VAR_4 = 0.114; break;
    case 132:
        VAR_2 = 0.2126; VAR_4 = 0.0722; break;
    case 131:
        VAR_2 = 0.30; VAR_4 = 0.11; break;
    case 129:
        VAR_2 = 0.212; VAR_4 = 0.087; break;
    case 134:
        VAR_2 = 0.2627; VAR_4 = 0.0593; break;
    }

    VAR_3 = 1.0 - VAR_2 - VAR_4;
    VAR_1->cmatrix[0][0] = 219.0 * VAR_2;
    VAR_1->cmatrix[0][1] = 219.0 * VAR_3;
    VAR_1->cmatrix[0][2] = 219.0 * VAR_4;
    VAR_1->cmatrix[1][0] = -112.0 * VAR_2 / (1.0 - VAR_4);
    VAR_1->cmatrix[1][1] = -112.0 * VAR_3 / (1.0 - VAR_4);
    VAR_1->cmatrix[1][2] = 112.0;
    VAR_1->cmatrix[2][0] = 112.0;
    VAR_1->cmatrix[2][1] = -112.0 * VAR_3 / (1.0 - VAR_2);
    VAR_1->cmatrix[2][2] = -112.0 * VAR_4 / (1.0 - VAR_2);
}
