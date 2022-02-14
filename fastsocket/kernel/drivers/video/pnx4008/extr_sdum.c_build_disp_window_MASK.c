
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dum_ch_setup {int xmin; int xmax; int ymax; int ymin; } ;
struct disp_window {int xmin_l; int xmin_h; int xmax_l; int xmax_h; int ymax; int ymin; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct dum_ch_setup * VAR_0, struct disp_window * VAR_1)
{
 VAR_1->ymin = VAR_0->ymin;
 VAR_1->ymax = VAR_0->ymax;
 VAR_1->xmin_l = VAR_0->xmin & 0xFF;
 VAR_1->xmin_h = (VAR_0->xmin & FUNC_0(8)) >> 8;
 VAR_1->xmax_l = VAR_0->xmax & 0xFF;
 VAR_1->xmax_h = (VAR_0->xmax & FUNC_0(8)) >> 8;
}
