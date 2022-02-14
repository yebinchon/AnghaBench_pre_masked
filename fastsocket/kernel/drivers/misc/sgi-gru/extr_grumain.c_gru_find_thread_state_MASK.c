
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct gru_vma_data* vm_private_data; } ;
struct gru_vma_data {int vd_lock; } ;
struct gru_thread_state {int dummy; } ;


 int FUNC_0 (int ,char*,struct vm_area_struct*,struct gru_thread_state*) ;
 struct gru_thread_state* FUNC_1 (struct gru_vma_data*,int) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct gru_thread_state *FUNC_4(struct vm_area_struct *VAR_1,
     int VAR_2)
{
 struct gru_vma_data *VAR_3 = VAR_1->vm_private_data;
 struct gru_thread_state *VAR_4;

 FUNC_2(&VAR_3->vd_lock);
 VAR_4 = FUNC_1(VAR_3, VAR_2);
 FUNC_3(&VAR_3->vd_lock);
 FUNC_0(VAR_0, "vma %p, gts %p\n", VAR_1, VAR_4);
 return VAR_4;
}
