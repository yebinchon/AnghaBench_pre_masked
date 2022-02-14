
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int (* imdct_half ) (TYPE_5__*,float*,float*) ;} ;
struct TYPE_11__ {int (* imdct_half ) (TYPE_4__*,float*,float*) ;} ;
struct TYPE_10__ {scalar_t__* extended_data; } ;
struct TYPE_9__ {float** coeffs; float** delay; float* mdct_buf; float* temp; int window_type; int const prev_window_type; int short_win; TYPE_1__* fdsp; int long_win; TYPE_4__ mdct_small; TYPE_5__ mdct; } ;
struct TYPE_8__ {int (* vector_fmul_window ) (float*,float*,float*,int ,int) ;} ;
typedef TYPE_2__ On2AVCContext ;
typedef TYPE_3__ AVFrame ;


 int VAR_0 ;




 int FUNC_0 (float*,float*,int) ;
 int FUNC_1 (TYPE_5__*,float*,float*) ;
 int FUNC_2 (float*,float*,float*,int ,int) ;
 int FUNC_3 (float*,float*,float*,int ,int) ;
 int FUNC_4 (float*,float*,float*,int ,int) ;
 int FUNC_5 (TYPE_4__*,float*,float*) ;
 int FUNC_6 (float*,float*,float*,int ,int) ;
 int FUNC_7 (float*,float*,float*,int ,int) ;
 int FUNC_8 (float*,float*,float*,int ,int) ;
 int FUNC_9 (float*,float*,float*,int ,int) ;
 int FUNC_10 (float*,float*,float*,int ,int) ;
 int FUNC_11 (float*,float*,float*,int ,int) ;
 int FUNC_12 (float*,float*,float*,int ,int) ;

__attribute__((used)) static int FUNC_13(On2AVCContext *VAR_1, int VAR_2,
                                      AVFrame *VAR_3, int VAR_4)
{
    int VAR_5;
    float *VAR_6 = (float*)VAR_3->extended_data[VAR_2] + VAR_4;
    float *VAR_7 = VAR_1->coeffs[VAR_2];
    float *VAR_8 = VAR_1->delay[VAR_2];
    float *VAR_9 = VAR_1->mdct_buf;
    float *VAR_10 = VAR_1->temp;

    switch (VAR_1->window_type) {
    case 129:
    case 128:
    case 130:
        VAR_1->mdct.imdct_half(&VAR_1->mdct, VAR_9, VAR_7);
        break;
    case 131:
        for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5 += VAR_0 / 8)
            VAR_1->mdct_small.imdct_half(&VAR_1->mdct_small, VAR_9 + VAR_5, VAR_7 + VAR_5);
        break;
    }

    if ((VAR_1->prev_window_type == 130 ||
         VAR_1->prev_window_type == 128) &&
        (VAR_1->window_type == 130 ||
         VAR_1->window_type == 129)) {
        VAR_1->fdsp->vector_fmul_window(VAR_6, VAR_8, VAR_9, VAR_1->long_win, 512);
    } else {
        float *VAR_11 = VAR_6 + 448;
        FUNC_0(VAR_6, VAR_8, 448 * sizeof(float));

        if (VAR_1->window_type == 131) {
            VAR_1->fdsp->vector_fmul_window(VAR_11 + 0*128, VAR_8 + 448, VAR_9 + 0*128, VAR_1->short_win, 64);
            VAR_1->fdsp->vector_fmul_window(VAR_11 + 1*128, VAR_9 + 0*128 + 64, VAR_9 + 1*128, VAR_1->short_win, 64);
            VAR_1->fdsp->vector_fmul_window(VAR_11 + 2*128, VAR_9 + 1*128 + 64, VAR_9 + 2*128, VAR_1->short_win, 64);
            VAR_1->fdsp->vector_fmul_window(VAR_11 + 3*128, VAR_9 + 2*128 + 64, VAR_9 + 3*128, VAR_1->short_win, 64);
            VAR_1->fdsp->vector_fmul_window(VAR_10, VAR_9 + 3*128 + 64, VAR_9 + 4*128, VAR_1->short_win, 64);
            FUNC_0(VAR_11 + 4*128, VAR_10, 64 * sizeof(float));
        } else {
            VAR_1->fdsp->vector_fmul_window(VAR_11, VAR_8 + 448, VAR_9, VAR_1->short_win, 64);
            FUNC_0(VAR_11 + 128, VAR_9 + 64, 448 * sizeof(float));
        }
    }


    switch (VAR_1->window_type) {
    case 131:
        FUNC_0(VAR_8, VAR_10 + 64, 64 * sizeof(float));
        VAR_1->fdsp->vector_fmul_window(VAR_8 + 64, VAR_9 + 4*128 + 64, VAR_9 + 5*128, VAR_1->short_win, 64);
        VAR_1->fdsp->vector_fmul_window(VAR_8 + 192, VAR_9 + 5*128 + 64, VAR_9 + 6*128, VAR_1->short_win, 64);
        VAR_1->fdsp->vector_fmul_window(VAR_8 + 320, VAR_9 + 6*128 + 64, VAR_9 + 7*128, VAR_1->short_win, 64);
        FUNC_0(VAR_8 + 448, VAR_9 + 7*128 + 64, 64 * sizeof(float));
        break;
    case 129:
        FUNC_0(VAR_8, VAR_9 + 512, 448 * sizeof(float));
        FUNC_0(VAR_8 + 448, VAR_9 + 7*128 + 64, 64 * sizeof(float));
        break;
    case 128:
    case 130:
        FUNC_0(VAR_8, VAR_9 + 512, 512 * sizeof(float));
        break;
    }
    return 0;
}
