
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int* kx; int spectrum_params; TYPE_1__* data; scalar_t__* m; scalar_t__ ready_for_dequant; scalar_t__ start; } ;
struct TYPE_4__ {int* e_a; } ;
typedef int SpectrumParameters ;
typedef TYPE_2__ SpectralBandReplication ;


 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static void FUNC_1(SpectralBandReplication *VAR_0) {
    VAR_0->start = 0;
    VAR_0->ready_for_dequant = 0;

    VAR_0->kx[1] = 32;
    VAR_0->m[1] = 0;

    VAR_0->data[0].e_a[1] = VAR_0->data[1].e_a[1] = -1;
    FUNC_0(&VAR_0->spectrum_params, -1, sizeof(SpectrumParameters));
}
