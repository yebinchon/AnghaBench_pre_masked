
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void** put_signed_rect_clamped; int * dequant_subband; int ** avg_dirac_pixels_tab; int ** put_dirac_pixels_tab; int * add_dirac_obmc; int add_rect_clamped; int dirac_hpel_filter; } ;
typedef TYPE_1__ DiracDSPContext ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

void FUNC_6(DiracDSPContext* VAR_21)
{
    int VAR_22 = FUNC_5();

    if (FUNC_0(VAR_22)) {
        VAR_21->add_dirac_obmc[0] = VAR_7;

        VAR_21->add_dirac_obmc[1] = VAR_3;
        VAR_21->add_dirac_obmc[2] = VAR_5;
        VAR_21->dirac_hpel_filter = VAR_1;
        VAR_21->add_rect_clamped = VAR_8;
        VAR_21->put_signed_rect_clamped[0] = (void *)VAR_16;

        FUNC_4(VAR_20, 0, VAR_18);
        FUNC_4(VAR_0, 0, VAR_18);
    }

    if (FUNC_1(VAR_22)) {
        FUNC_4(VAR_0, 0, VAR_19);
    }

    if (FUNC_2(VAR_22)) {
        VAR_21->dirac_hpel_filter = VAR_2;
        VAR_21->add_rect_clamped = VAR_9;
        VAR_21->put_signed_rect_clamped[0] = (void *)VAR_17;

        VAR_21->add_dirac_obmc[1] = VAR_4;
        VAR_21->add_dirac_obmc[2] = VAR_6;

        VAR_21->put_dirac_pixels_tab[1][0] = VAR_13;
        VAR_21->avg_dirac_pixels_tab[1][0] = VAR_10;
        VAR_21->put_dirac_pixels_tab[2][0] = VAR_14;
        VAR_21->avg_dirac_pixels_tab[2][0] = VAR_11;
    }

    if (FUNC_3(VAR_22)) {
        VAR_21->dequant_subband[1] = VAR_12;
        VAR_21->put_signed_rect_clamped[1] = VAR_15;
    }
}
