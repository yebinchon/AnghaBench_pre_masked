
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gru_tlb_fault_handle {int dummy; } ;
struct TYPE_2__ {int upm_tlbmiss; } ;
struct gru_thread_state {int ts_gru; TYPE_1__ ustats; struct gru_mm_struct* ts_gms; } ;
struct gru_mm_struct {int ms_range_active; int ms_wait_queue; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,struct gru_thread_state*,struct gru_tlb_fault_handle*,void*) ;
 int FUNC_3 (struct gru_tlb_fault_handle*) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct gru_thread_state *VAR_1,
      struct gru_tlb_fault_handle *VAR_2,
      void *VAR_3)
{
 struct gru_mm_struct *VAR_4 = VAR_1->ts_gms;
 int VAR_5;

 VAR_1->ustats.upm_tlbmiss++;
 while (1) {
  FUNC_4(VAR_4->ms_wait_queue,
      FUNC_1(&VAR_4->ms_range_active) == 0);
  FUNC_3(VAR_2);
  VAR_5 = FUNC_2(VAR_1->ts_gru, VAR_1, VAR_2, VAR_3);
  if (VAR_5 <= 0)
   return VAR_5;
  FUNC_0(VAR_0);
 }
}
