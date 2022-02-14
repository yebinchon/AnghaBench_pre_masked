
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {float re; float im; } ;
struct TYPE_7__ {float member_0; float member_1; float re; float im; } ;
struct TYPE_6__ {int cqt_len; float* h_buf; float* bar_v_buf; int fcount; int width; float* rcp_h_buf; float* sono_v_buf; scalar_t__ format; int cscheme_v; int cmatrix; int sono_g; TYPE_3__* cqt_result; int c_buf; int bar_g; int sono_count; } ;
typedef TYPE_1__ ShowCQTContext ;
typedef TYPE_2__ FFTComplex ;


 scalar_t__ VAR_0 ;
 float FUNC_0 (float,int ) ;
 int FUNC_1 (int ,TYPE_3__*,int ,int,int ) ;
 int FUNC_2 (int ,TYPE_3__*,int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_3(ShowCQTContext *VAR_1)
{
    int VAR_2, VAR_3;
    if (!VAR_1->sono_count) {
        for (VAR_2 = 0; VAR_2 < VAR_1->cqt_len; VAR_2++) {
            VAR_1->h_buf[VAR_2] = VAR_1->bar_v_buf[VAR_2] * 0.5f * (VAR_1->cqt_result[VAR_2].re + VAR_1->cqt_result[VAR_2].im);
        }
        if (VAR_1->fcount > 1) {
            float VAR_4 = 1.0f / VAR_1->fcount;
            for (VAR_2 = 0; VAR_2 < VAR_1->width; VAR_2++) {
                float VAR_5 = 0.0f;
                for (VAR_3 = 0; VAR_3 < VAR_1->fcount; VAR_3++)
                    VAR_5 += VAR_1->h_buf[VAR_1->fcount * VAR_2 + VAR_3];
                VAR_1->h_buf[VAR_2] = VAR_4 * VAR_5;
            }
        }
        for (VAR_2 = 0; VAR_2 < VAR_1->width; VAR_2++) {
            VAR_1->h_buf[VAR_2] = FUNC_0(VAR_1->h_buf[VAR_2], VAR_1->bar_g);
            VAR_1->rcp_h_buf[VAR_2] = 1.0f / (VAR_1->h_buf[VAR_2] + 0.0001f);
        }
    }

    for (VAR_2 = 0; VAR_2 < VAR_1->cqt_len; VAR_2++) {
        VAR_1->cqt_result[VAR_2].re *= VAR_1->sono_v_buf[VAR_2];
        VAR_1->cqt_result[VAR_2].im *= VAR_1->sono_v_buf[VAR_2];
    }

    if (VAR_1->fcount > 1) {
        float VAR_6 = 1.0f / VAR_1->fcount;
        for (VAR_2 = 0; VAR_2 < VAR_1->width; VAR_2++) {
            FFTComplex VAR_7 = {0.0f, 0.0f};
            for (VAR_3 = 0; VAR_3 < VAR_1->fcount; VAR_3++) {
                VAR_7.re += VAR_1->cqt_result[VAR_1->fcount * VAR_2 + VAR_3].re;
                VAR_7.im += VAR_1->cqt_result[VAR_1->fcount * VAR_2 + VAR_3].im;
            }
            VAR_1->cqt_result[VAR_2].re = VAR_6 * VAR_7.re;
            VAR_1->cqt_result[VAR_2].im = VAR_6 * VAR_7.im;
        }
    }

    if (VAR_1->format == VAR_0)
        FUNC_1(VAR_1->c_buf, VAR_1->cqt_result, VAR_1->sono_g, VAR_1->width, VAR_1->cscheme_v);
    else
        FUNC_2(VAR_1->c_buf, VAR_1->cqt_result, VAR_1->sono_g, VAR_1->width, VAR_1->cmatrix, VAR_1->cscheme_v);
}
