
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct b577xx_fcoe_rx_doorbell {int doorbell_cq_cons; } ;
struct bnx2fc_rport {int cq_cons_idx; int cq_curr_toggle_bit; int ctx_base; struct b577xx_fcoe_rx_doorbell rx_db; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(struct bnx2fc_rport *VAR_1)
{
 struct b577xx_fcoe_rx_doorbell *VAR_2 = &VAR_1->rx_db;
 u32 VAR_3;

 FUNC_2();
 VAR_2->doorbell_cq_cons = VAR_1->cq_cons_idx | (VAR_1->cq_curr_toggle_bit <<
   VAR_0);
 VAR_3 = *((u32 *)VAR_2);
 FUNC_3(FUNC_0(VAR_3), VAR_1->ctx_base);
 FUNC_1();

}
