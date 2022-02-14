
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_thread_state {int ts_ctxnum; scalar_t__ ts_user_options; scalar_t__ ts_cch_req_slice; scalar_t__ ts_tlb_int_select; int ts_dsr_map; int ts_cbr_map; struct gru_state* ts_gru; int ts_data_valid; int ts_gdata; int ts_sizeavail; } ;
struct gru_state {int gs_gid; int gs_gru_base_vaddr; } ;
struct gru_context_configuration_handle {int tfm_fault_bit_enable; int tlb_int_enable; int req_slice_set_enable; scalar_t__ req_slice; int tfm_done_bit_enable; int unmap_enable; int cb_int_enable; int* asid; int * sizeavail; scalar_t__ tlb_int_select; int cbr_allocation_map; int dsr_allocation_map; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct gru_context_configuration_handle*) ;
 scalar_t__ FUNC_2 (struct gru_context_configuration_handle*) ;
 struct gru_context_configuration_handle* FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ,char*,int,...) ;
 int FUNC_6 (int ,int ,int,int ,int ,int ) ;
 int FUNC_7 (struct gru_state*,struct gru_thread_state*) ;
 int VAR_2 ;
 scalar_t__ FUNC_8 (struct gru_thread_state*) ;
 int FUNC_9 (struct gru_context_configuration_handle*) ;
 int FUNC_10 (struct gru_context_configuration_handle*) ;

void FUNC_11(struct gru_thread_state *VAR_3)
{
 struct gru_state *VAR_4 = VAR_3->ts_gru;
 struct gru_context_configuration_handle *VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9 = VAR_3->ts_ctxnum;

 VAR_5 = FUNC_3(VAR_4->gs_gru_base_vaddr, VAR_9);
 FUNC_9(VAR_5);
 VAR_5->tfm_fault_bit_enable =
     (VAR_3->ts_user_options == VAR_1
      || VAR_3->ts_user_options == VAR_0);
 VAR_5->tlb_int_enable = (VAR_3->ts_user_options == VAR_0);
 if (VAR_5->tlb_int_enable) {
  VAR_3->ts_tlb_int_select = FUNC_4();
  VAR_5->tlb_int_select = VAR_3->ts_tlb_int_select;
 }
 if (VAR_3->ts_cch_req_slice >= 0) {
  VAR_5->req_slice_set_enable = 1;
  VAR_5->req_slice = VAR_3->ts_cch_req_slice;
 } else {
  VAR_5->req_slice_set_enable =0;
 }
 VAR_5->tfm_done_bit_enable = 0;
 VAR_5->dsr_allocation_map = VAR_3->ts_dsr_map;
 VAR_5->cbr_allocation_map = VAR_3->ts_cbr_map;

 if (FUNC_8(VAR_3)) {
  VAR_5->unmap_enable = 1;
  VAR_5->tfm_done_bit_enable = 1;
  VAR_5->cb_int_enable = 1;
  VAR_5->tlb_int_select = 0;
 } else {
  VAR_5->unmap_enable = 0;
  VAR_5->tfm_done_bit_enable = 0;
  VAR_5->cb_int_enable = 0;
  VAR_8 = FUNC_7(VAR_4, VAR_3);
  for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
   VAR_5->asid[VAR_6] = VAR_8 + VAR_6;
   VAR_5->sizeavail[VAR_6] = VAR_3->ts_sizeavail;
  }
 }

 VAR_7 = FUNC_1(VAR_5);
 if (VAR_7) {
  FUNC_5(VAR_2,
   "err %d: cch %p, gts %p, cbr 0x%lx, dsr 0x%lx\n",
   VAR_7, VAR_5, VAR_3, VAR_3->ts_cbr_map, VAR_3->ts_dsr_map);
  FUNC_0();
 }

 FUNC_6(VAR_3->ts_gdata, VAR_4->gs_gru_base_vaddr, VAR_9,
   VAR_3->ts_cbr_map, VAR_3->ts_dsr_map, VAR_3->ts_data_valid);

 if (FUNC_2(VAR_5))
  FUNC_0();
 FUNC_10(VAR_5);

 FUNC_5(VAR_2, "gid %d, gts %p, cbrmap 0x%lx, dsrmap 0x%lx, tie %d, tis %d\n",
  VAR_3->ts_gru->gs_gid, VAR_3, VAR_3->ts_cbr_map, VAR_3->ts_dsr_map,
  (VAR_3->ts_user_options == VAR_0), VAR_3->ts_tlb_int_select);
}
