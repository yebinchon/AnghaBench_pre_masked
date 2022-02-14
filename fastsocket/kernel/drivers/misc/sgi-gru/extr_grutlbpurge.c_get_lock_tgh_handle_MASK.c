
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_tlb_global_handle {int dummy; } ;
struct gru_state {scalar_t__ gs_blade_id; } ;


 int FUNC_0 (struct gru_state*) ;
 int FUNC_1 (struct gru_state*) ;
 struct gru_tlb_global_handle* FUNC_2 (struct gru_state*,int) ;
 int FUNC_3 (struct gru_tlb_global_handle*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static struct gru_tlb_global_handle *FUNC_6(struct gru_state
        *VAR_0)
{
 struct gru_tlb_global_handle *VAR_1;
 int VAR_2;

 FUNC_4();
 if (FUNC_5() == VAR_0->gs_blade_id)
  VAR_2 = FUNC_1(VAR_0);
 else
  VAR_2 = FUNC_0(VAR_0);
 VAR_1 = FUNC_2(VAR_0, VAR_2);
 FUNC_3(VAR_1);

 return VAR_1;
}
