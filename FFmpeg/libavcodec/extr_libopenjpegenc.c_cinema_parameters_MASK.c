
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cp_tdx; int cp_tdy; char tp_flag; int tp_on; int cblockw_init; int cblockh_init; int csty; int roi_compno; int subsampling_dx; int subsampling_dy; int irreversible; int tcp_mct; int prog_order; scalar_t__ image_offset_y0; scalar_t__ image_offset_x0; scalar_t__ cp_ty0; scalar_t__ cp_tx0; scalar_t__ tile_size_on; } ;
typedef TYPE_1__ opj_cparameters_t ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(opj_cparameters_t *VAR_1)
{
    VAR_1->tile_size_on = 0;
    VAR_1->cp_tdx = 1;
    VAR_1->cp_tdy = 1;


    VAR_1->tp_flag = 'C';
    VAR_1->tp_on = 1;


    VAR_1->cp_tx0 = 0;
    VAR_1->cp_ty0 = 0;
    VAR_1->image_offset_x0 = 0;
    VAR_1->image_offset_y0 = 0;


    VAR_1->cblockw_init = 32;
    VAR_1->cblockh_init = 32;
    VAR_1->csty |= 0x01;


    VAR_1->prog_order = VAR_0;


    VAR_1->roi_compno = -1;


    VAR_1->subsampling_dx = 1;
    VAR_1->subsampling_dy = 1;


    VAR_1->irreversible = 1;

    VAR_1->tcp_mct = 1;
}
