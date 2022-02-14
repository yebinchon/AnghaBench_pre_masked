
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* fft_coefs_min_index; size_t fft_coefs_index; TYPE_1__* fft_coefs; } ;
struct TYPE_4__ {int sub_packet; int channel; int offset; int exp; int phase; } ;
typedef TYPE_2__ QDM2Context ;



__attribute__((used)) static void FUNC_0(QDM2Context *VAR_0, int VAR_1,
                                      int VAR_2, int VAR_3, int VAR_4,
                                      int VAR_5, int VAR_6)
{
    if (VAR_0->fft_coefs_min_index[VAR_3] < 0)
        VAR_0->fft_coefs_min_index[VAR_3] = VAR_0->fft_coefs_index;

    VAR_0->fft_coefs[VAR_0->fft_coefs_index].sub_packet =
        ((VAR_1 >= 16) ? (VAR_1 - 16) : VAR_1);
    VAR_0->fft_coefs[VAR_0->fft_coefs_index].channel = VAR_4;
    VAR_0->fft_coefs[VAR_0->fft_coefs_index].offset = VAR_2;
    VAR_0->fft_coefs[VAR_0->fft_coefs_index].exp = VAR_5;
    VAR_0->fft_coefs[VAR_0->fft_coefs_index].phase = VAR_6;
    VAR_0->fft_coefs_index++;
}
