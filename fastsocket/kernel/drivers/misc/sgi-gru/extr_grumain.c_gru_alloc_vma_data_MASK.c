
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct gru_vma_data {int vd_lock; int vd_head; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,struct gru_vma_data*) ;
 int VAR_1 ;
 struct gru_vma_data* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;

struct gru_vma_data *FUNC_5(struct vm_area_struct *VAR_3, int VAR_4)
{
 struct gru_vma_data *VAR_5 = ((void*)0);

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 FUNC_1(VAR_2);
 FUNC_0(&VAR_5->vd_head);
 FUNC_4(&VAR_5->vd_lock);
 FUNC_2(VAR_1, "alloc vdata %p\n", VAR_5);
 return VAR_5;
}
