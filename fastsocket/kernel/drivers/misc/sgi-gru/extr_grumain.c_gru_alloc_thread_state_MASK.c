
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct gru_vma_data* vm_private_data; } ;
struct gru_vma_data {int vd_lock; int vd_head; int vd_user_options; int vd_tlb_preload_count; int vd_dsr_au_count; int vd_cbr_au_count; } ;
struct gru_thread_state {int ts_next; } ;


 scalar_t__ FUNC_0 (struct gru_thread_state*) ;
 int FUNC_1 (int ) ;
 struct gru_thread_state* FUNC_2 (struct vm_area_struct*,int ,int ,int ,int ,int) ;
 int FUNC_3 (int ,char*,struct vm_area_struct*,struct gru_thread_state*) ;
 struct gru_thread_state* FUNC_4 (struct gru_vma_data*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (struct gru_thread_state*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

struct gru_thread_state *FUNC_9(struct vm_area_struct *VAR_2,
     int VAR_3)
{
 struct gru_vma_data *VAR_4 = VAR_2->vm_private_data;
 struct gru_thread_state *VAR_5, *VAR_6;

 VAR_5 = FUNC_2(VAR_2, VAR_4->vd_cbr_au_count,
       VAR_4->vd_dsr_au_count,
       VAR_4->vd_tlb_preload_count,
       VAR_4->vd_user_options, VAR_3);
 if (FUNC_0(VAR_5))
  return VAR_5;

 FUNC_7(&VAR_4->vd_lock);
 VAR_6 = FUNC_4(VAR_4, VAR_3);
 if (VAR_6) {
  FUNC_5(VAR_5);
  VAR_5 = VAR_6;
  FUNC_1(VAR_1);
 } else {
  FUNC_6(&VAR_5->ts_next, &VAR_4->vd_head);
 }
 FUNC_8(&VAR_4->vd_lock);
 FUNC_3(VAR_0, "vma %p, gts %p\n", VAR_2, VAR_5);
 return VAR_5;
}
