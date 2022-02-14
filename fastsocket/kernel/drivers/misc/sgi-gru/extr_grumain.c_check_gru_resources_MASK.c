
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_state {int gs_active_contexts; int gs_dsr_map; int gs_cbr_map; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct gru_state *VAR_0, int VAR_1,
          int VAR_2, int VAR_3)
{
 return FUNC_0(VAR_0->gs_cbr_map) >= VAR_1
  && FUNC_0(VAR_0->gs_dsr_map) >= VAR_2
  && VAR_0->gs_active_contexts < VAR_3;
}
