
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ** biweight_dirac_pixels_tab; int ** weight_dirac_pixels_tab; int * add_dirac_obmc; int * avg_dirac_pixels_tab; int * put_dirac_pixels_tab; } ;
struct TYPE_5__ {int weight_log2denom; int* weight; int * biweight_func; int * weight_func; TYPE_1__ diracdsp; int add_obmc; int avg_pixels_tab; int put_pixels_tab; } ;
typedef TYPE_2__ DiracContext ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(DiracContext *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5 = 0;
    if (VAR_3 > 8)
        VAR_5 = 1;
    if (VAR_3 > 16)
        VAR_5 = 2;

    FUNC_0(VAR_0->put_pixels_tab, VAR_0->diracdsp.put_dirac_pixels_tab[VAR_5], sizeof(VAR_0->put_pixels_tab));
    FUNC_0(VAR_0->avg_pixels_tab, VAR_0->diracdsp.avg_dirac_pixels_tab[VAR_5], sizeof(VAR_0->avg_pixels_tab));
    VAR_0->add_obmc = VAR_0->diracdsp.add_dirac_obmc[VAR_5];
    if (VAR_0->weight_log2denom > 1 || VAR_0->weight[0] != 1 || VAR_0->weight[1] != 1) {
        VAR_0->weight_func = VAR_0->diracdsp.weight_dirac_pixels_tab[VAR_5];
        VAR_0->biweight_func = VAR_0->diracdsp.biweight_dirac_pixels_tab[VAR_5];
    } else {
        VAR_0->weight_func = ((void*)0);
        VAR_0->biweight_func = ((void*)0);
    }
}
