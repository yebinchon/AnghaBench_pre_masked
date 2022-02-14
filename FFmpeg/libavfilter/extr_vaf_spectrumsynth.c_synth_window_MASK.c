
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int im; scalar_t__ re; } ;
struct TYPE_8__ {TYPE_1__* priv; } ;
struct TYPE_7__ {int size; int win_size; int channels; int nb_freq; TYPE_5__** fft_data; int fft; } ;
typedef TYPE_1__ SpectrumSynthContext ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int ,TYPE_5__*) ;
 int FUNC_1 (int ,TYPE_5__*) ;
 int FUNC_2 (TYPE_2__*,int,int const,int) ;

__attribute__((used)) static void FUNC_3(AVFilterContext *VAR_0, int VAR_1)
{
    SpectrumSynthContext *VAR_2 = VAR_0->priv;
    const int VAR_3 = VAR_2->size;
    int VAR_4 = VAR_2->win_size;
    int VAR_5, VAR_6, VAR_7;

    for (VAR_7 = 0; VAR_7 < VAR_2->channels; VAR_7++) {
        FUNC_2(VAR_0, VAR_1, VAR_3, VAR_7);

        for (VAR_5 = VAR_3; VAR_5 <= VAR_2->nb_freq; VAR_5++) {
            VAR_2->fft_data[VAR_7][VAR_5].re = 0;
            VAR_2->fft_data[VAR_7][VAR_5].im = 0;
        }

        for (VAR_5 = VAR_2->nb_freq + 1, VAR_6 = VAR_2->nb_freq - 1; VAR_5 < VAR_4; VAR_5++, VAR_6--) {
            VAR_2->fft_data[VAR_7][VAR_5].re = VAR_2->fft_data[VAR_7][VAR_6].re;
            VAR_2->fft_data[VAR_7][VAR_5].im = -VAR_2->fft_data[VAR_7][VAR_6].im;
        }

        FUNC_1(VAR_2->fft, VAR_2->fft_data[VAR_7]);
        FUNC_0(VAR_2->fft, VAR_2->fft_data[VAR_7]);
    }
}
