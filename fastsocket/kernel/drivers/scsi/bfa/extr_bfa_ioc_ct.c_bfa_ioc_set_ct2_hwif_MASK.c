
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bfa_ioc_s {TYPE_1__* ioc_hwif; } ;
struct TYPE_3__ {int * ioc_isr_mode_set; int ioc_lpu_read_stat; int ioc_map_port; int ioc_reg_init; int ioc_pll_init; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bfa_ioc_s*,TYPE_1__*) ;
 TYPE_1__ VAR_4 ;

void
FUNC_1(struct bfa_ioc_s *VAR_5)
{
 FUNC_0(VAR_5, &VAR_4);

 VAR_4 = VAR_2;
 VAR_4 = VAR_3;
 VAR_4 = VAR_1;
 VAR_4 = VAR_0;
 VAR_4 = ((void*)0);
 VAR_5->ioc_hwif = &VAR_4;
}
