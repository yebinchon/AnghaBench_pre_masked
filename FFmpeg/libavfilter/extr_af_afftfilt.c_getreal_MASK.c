
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nb_exprs; int window_size; TYPE_1__** fft_data; } ;
struct TYPE_3__ {double re; } ;
typedef TYPE_2__ AFFTFiltContext ;


 int FUNC_0 (double,int ,int) ;

__attribute__((used)) static inline double FUNC_1(void *VAR_0, double VAR_1, double VAR_2)
{
    AFFTFiltContext *VAR_3 = VAR_0;
    int VAR_4, VAR_5;

    VAR_4 = FUNC_0(VAR_2, 0, VAR_3->nb_exprs - 1);
    VAR_5 = FUNC_0(VAR_1, 0, VAR_3->window_size / 2);

    return VAR_3->fft_data[VAR_4][VAR_5].re;
}
