
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ desat; int tonemap; float param; TYPE_2__* coeffs; } ;
typedef TYPE_3__ TonemapContext ;
struct TYPE_14__ {int* linesize; scalar_t__* data; } ;
struct TYPE_13__ {TYPE_1__* comp; } ;
struct TYPE_11__ {float const cr; float const cg; float const cb; } ;
struct TYPE_10__ {int step; } ;
typedef TYPE_4__ AVPixFmtDescriptor ;
typedef TYPE_5__ AVFrame ;


 float FUNC_0 (float,int) ;
 float FUNC_1 (float,float,float) ;
 float FUNC_2 (float const,float,float) ;







 float FUNC_3 (float,int ,float) ;
 float FUNC_4 (double) ;
 float FUNC_5 (float,float,double) ;
 float FUNC_6 (float,float) ;

__attribute__((used)) static void FUNC_7(TonemapContext *VAR_0, AVFrame *VAR_1, const AVFrame *VAR_2,
                    const AVPixFmtDescriptor *VAR_3, int VAR_4, int VAR_5, double VAR_6)
{
    const float *VAR_7 = (const float *)(VAR_2->data[0] + VAR_4 * VAR_3->comp[0].step + VAR_5 * VAR_2->linesize[0]);
    const float *VAR_8 = (const float *)(VAR_2->data[1] + VAR_4 * VAR_3->comp[1].step + VAR_5 * VAR_2->linesize[1]);
    const float *VAR_9 = (const float *)(VAR_2->data[2] + VAR_4 * VAR_3->comp[2].step + VAR_5 * VAR_2->linesize[2]);
    float *VAR_10 = (float *)(VAR_1->data[0] + VAR_4 * VAR_3->comp[0].step + VAR_5 * VAR_1->linesize[0]);
    float *VAR_11 = (float *)(VAR_1->data[1] + VAR_4 * VAR_3->comp[1].step + VAR_5 * VAR_1->linesize[1]);
    float *VAR_12 = (float *)(VAR_1->data[2] + VAR_4 * VAR_3->comp[2].step + VAR_5 * VAR_1->linesize[2]);
    float VAR_13, VAR_14;


    *VAR_10 = *VAR_7;
    *VAR_11 = *VAR_8;
    *VAR_12 = *VAR_9;


    if (VAR_0->desat > 0) {
        float VAR_15 = VAR_0->coeffs->cr * *VAR_7 + VAR_0->coeffs->cg * *VAR_9 + VAR_0->coeffs->cb * *VAR_8;
        float VAR_16 = FUNC_0(VAR_15 - VAR_0->desat, 1e-6) / FUNC_0(VAR_15, 1e-6);
        *VAR_10 = FUNC_2(*VAR_7, VAR_15, VAR_16);
        *VAR_12 = FUNC_2(*VAR_9, VAR_15, VAR_16);
        *VAR_11 = FUNC_2(*VAR_8, VAR_15, VAR_16);
    }




    VAR_13 = FUNC_0(FUNC_1(*VAR_10, *VAR_12, *VAR_11), 1e-6);
    VAR_14 = VAR_13;

    switch(VAR_0->tonemap) {
    default:
    case 129:

        break;
    case 131:
        VAR_13 = VAR_13 * VAR_0->param / VAR_6;
        break;
    case 133:
        VAR_13 = VAR_13 > 0.05f ? FUNC_6(VAR_13 / VAR_6, 1.0f / VAR_0->param)
                          : VAR_13 * FUNC_6(0.05f / VAR_6, 1.0f / VAR_0->param) / 0.05f;
        break;
    case 134:
        VAR_13 = FUNC_3(VAR_13 * VAR_0->param, 0, 1.0f);
        break;
    case 132:
        VAR_13 = FUNC_4(VAR_13) / FUNC_4(VAR_6);
        break;
    case 128:
        VAR_13 = VAR_13 / (VAR_13 + VAR_0->param) * (VAR_6 + VAR_0->param) / VAR_6;
        break;
    case 130:
        VAR_13 = FUNC_5(VAR_13, VAR_0->param, VAR_6);
        break;
    }



    *VAR_10 *= VAR_13 / VAR_14;
    *VAR_12 *= VAR_13 / VAR_14;
    *VAR_11 *= VAR_13 / VAR_14;
}
