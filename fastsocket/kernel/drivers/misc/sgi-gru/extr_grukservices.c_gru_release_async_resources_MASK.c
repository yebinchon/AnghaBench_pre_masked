
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_blade_state {int bs_kgts_sema; int * bs_async_wq; scalar_t__ bs_async_cbrs; scalar_t__ bs_async_dsr_bytes; } ;


 struct gru_blade_state* FUNC_0 (unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(unsigned long VAR_0)
{
 struct gru_blade_state *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->bs_kgts_sema);
 VAR_1->bs_async_dsr_bytes = 0;
 VAR_1->bs_async_cbrs = 0;
 VAR_1->bs_async_wq = ((void*)0);
 FUNC_2(&VAR_1->bs_kgts_sema);
}
