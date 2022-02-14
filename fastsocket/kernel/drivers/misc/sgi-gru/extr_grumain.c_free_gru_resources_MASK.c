
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_thread_state {int ts_dsr_map; int ts_cbr_map; } ;
struct gru_state {int gs_dsr_map; int gs_cbr_map; int gs_active_contexts; } ;



__attribute__((used)) static void FUNC_0(struct gru_state *VAR_0,
          struct gru_thread_state *VAR_1)
{
 VAR_0->gs_active_contexts--;
 VAR_0->gs_cbr_map |= VAR_1->ts_cbr_map;
 VAR_0->gs_dsr_map |= VAR_1->ts_dsr_map;
}
