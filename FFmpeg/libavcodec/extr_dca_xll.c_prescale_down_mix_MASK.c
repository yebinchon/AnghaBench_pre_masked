
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* dmix_coeff; int hier_ofs; int* dmix_scale; int* dmix_scale_inv; int nchannels; } ;
typedef TYPE_1__ DCAXllChSet ;


 void* FUNC_0 (int,int) ;
 void* FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(DCAXllChSet *VAR_0, DCAXllChSet *VAR_1)
{
    int VAR_2, VAR_3, *VAR_4 = VAR_0->dmix_coeff;

    for (VAR_2 = 0; VAR_2 < VAR_0->hier_ofs; VAR_2++) {
        int VAR_5 = VAR_1->dmix_scale[VAR_2];
        int VAR_6 = VAR_1->dmix_scale_inv[VAR_2];
        VAR_0->dmix_scale[VAR_2] = FUNC_0(VAR_0->dmix_scale[VAR_2], VAR_5);
        VAR_0->dmix_scale_inv[VAR_2] = FUNC_1(VAR_0->dmix_scale_inv[VAR_2], VAR_6);
        for (VAR_3 = 0; VAR_3 < VAR_0->nchannels; VAR_3++) {
            int VAR_7 = FUNC_1(*VAR_4, VAR_6);
            *VAR_4++ = FUNC_0(VAR_7, VAR_1->dmix_scale[VAR_0->hier_ofs + VAR_3]);
        }
    }
}
