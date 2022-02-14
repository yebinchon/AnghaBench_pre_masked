
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lbr_nr; int lbr_sel_map; int lbr_sel_mask; int lbr_to; int lbr_from; int lbr_tos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 TYPE_1__ VAR_5 ;

void FUNC_1(void)
{
 VAR_5.lbr_nr = 16;
 VAR_5.lbr_tos = VAR_3;
 VAR_5.lbr_from = VAR_1;
 VAR_5.lbr_to = VAR_2;

 VAR_5.lbr_sel_mask = VAR_0;
 VAR_5.lbr_sel_map = VAR_4;

 FUNC_0("16-deep LBR, ");
}
