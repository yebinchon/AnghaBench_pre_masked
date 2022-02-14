
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_tlb_global_handle {int dummy; } ;
struct gru_state {int gs_gid; } ;


 scalar_t__ VAR_0 ;
 struct gru_tlb_global_handle* FUNC_0 (struct gru_state*) ;
 int FUNC_1 (struct gru_tlb_global_handle*) ;
 int FUNC_2 (int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct gru_tlb_global_handle*,int ,int ,int ,int,int,scalar_t__,int) ;

void FUNC_4(struct gru_state *VAR_2)
{
 struct gru_tlb_global_handle *VAR_3;

 FUNC_2(VAR_1, "gid %d\n", VAR_2->gs_gid);
 VAR_3 = FUNC_0(VAR_2);
 FUNC_3(VAR_3, 0, ~0, 0, 1, 1, VAR_0 - 1, 0xffff);
 FUNC_1(VAR_3);
}
