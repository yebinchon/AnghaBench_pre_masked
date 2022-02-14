
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ena_pko; int ena_dwb; int store_be; } ;
union cvmx_pko_reg_flags {int u64; TYPE_1__ s; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(void)
{
 union cvmx_pko_reg_flags VAR_1;

 VAR_1.u64 = FUNC_1(VAR_0);
 if (VAR_1.s.ena_pko)
  FUNC_0
      ("Warning: Enabling PKO when PKO already enabled.\n");

 VAR_1.s.ena_dwb = 1;
 VAR_1.s.ena_pko = 1;




 VAR_1.s.store_be = 1;
 FUNC_2(VAR_0, VAR_1.u64);
}
