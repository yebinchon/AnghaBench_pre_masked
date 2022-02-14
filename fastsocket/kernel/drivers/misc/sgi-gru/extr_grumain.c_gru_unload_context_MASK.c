
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_thread_state {int ts_ctxnum; int ts_data_valid; int ts_dsr_map; int ts_cbr_map; int ts_gdata; int ts_vma; struct gru_state* ts_gru; } ;
struct gru_state {int gs_gru_base_vaddr; } ;
struct gru_context_configuration_handle {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct gru_thread_state*) ;
 scalar_t__ FUNC_2 (struct gru_context_configuration_handle*) ;
 scalar_t__ FUNC_3 (struct gru_context_configuration_handle*) ;
 struct gru_context_configuration_handle* FUNC_4 (int ,int) ;
 int FUNC_5 (int ,char*,struct gru_thread_state*,int ,int ) ;
 int FUNC_6 (struct gru_thread_state*) ;
 int FUNC_7 (int ,int ,int,int ,int ) ;
 int FUNC_8 (struct gru_state*,struct gru_thread_state*) ;
 int VAR_1 ;
 int FUNC_9 (struct gru_thread_state*) ;
 int FUNC_10 (struct gru_context_configuration_handle*) ;
 int FUNC_11 (struct gru_context_configuration_handle*) ;
 int FUNC_12 (int ,int ,int ) ;

void FUNC_13(struct gru_thread_state *VAR_2, int VAR_3)
{
 struct gru_state *VAR_4 = VAR_2->ts_gru;
 struct gru_context_configuration_handle *VAR_5;
 int VAR_6 = VAR_2->ts_ctxnum;

 if (!FUNC_9(VAR_2))
  FUNC_12(VAR_2->ts_vma, FUNC_1(VAR_2), VAR_0);
 VAR_5 = FUNC_4(VAR_4->gs_gru_base_vaddr, VAR_6);

 FUNC_5(VAR_1, "gts %p, cbrmap 0x%lx, dsrmap 0x%lx\n",
  VAR_2, VAR_2->ts_cbr_map, VAR_2->ts_dsr_map);
 FUNC_10(VAR_5);
 if (FUNC_3(VAR_5))
  FUNC_0();

 if (!FUNC_9(VAR_2))
  FUNC_8(VAR_4, VAR_2);
 if (VAR_3) {
  FUNC_7(VAR_2->ts_gdata, VAR_4->gs_gru_base_vaddr,
     VAR_6, VAR_2->ts_cbr_map,
     VAR_2->ts_dsr_map);
  VAR_2->ts_data_valid = 1;
 }

 if (FUNC_2(VAR_5))
  FUNC_0();
 FUNC_11(VAR_5);

 FUNC_6(VAR_2);
}
