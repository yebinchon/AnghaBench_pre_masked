
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vma_data {int vm_start; int vm_end; int flags; int type; int refcnt; int lock; } ;
struct vm_area_struct {scalar_t__ vm_pgoff; int vm_flags; int vm_end; int vm_start; int * vm_ops; int vm_page_prot; struct vma_data* vm_private_data; } ;
struct file {int dummy; } ;
typedef enum mspec_page_type { ____Placeholder_mspec_page_type } mspec_page_type ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct vma_data* FUNC_1 (int,int ) ;
 int FUNC_2 (struct vma_data*,int ,int) ;
 int VAR_15 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 struct vma_data* FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct file *VAR_16, struct vm_area_struct *VAR_17,
     enum mspec_page_type VAR_18)
{
 struct vma_data *VAR_19;
 int VAR_20, VAR_21, VAR_22 = 0;

 if (VAR_17->vm_pgoff != 0)
  return -VAR_0;

 if ((VAR_17->vm_flags & VAR_13) == 0)
  return -VAR_0;

 if ((VAR_17->vm_flags & VAR_14) == 0)
  return -VAR_2;

 VAR_20 = (VAR_17->vm_end - VAR_17->vm_start) >> VAR_6;
 VAR_21 = sizeof(struct vma_data) + VAR_20 * sizeof(long);
 if (VAR_21 <= VAR_7)
  VAR_19 = FUNC_1(VAR_21, VAR_3);
 else {
  VAR_19 = FUNC_5(VAR_21);
  VAR_22 = VAR_8;
 }
 if (!VAR_19)
  return -VAR_1;
 FUNC_2(VAR_19, 0, VAR_21);

 VAR_19->vm_start = VAR_17->vm_start;
 VAR_19->vm_end = VAR_17->vm_end;
 VAR_19->flags = VAR_22;
 VAR_19->type = VAR_18;
 FUNC_4(&VAR_19->lock);
 VAR_19->refcnt = FUNC_0(1);
 VAR_17->vm_private_data = VAR_19;

 VAR_17->vm_flags |= (VAR_10 | VAR_12 | VAR_11 | VAR_9);
 if (VAR_19->type == VAR_4 || VAR_19->type == VAR_5)
  VAR_17->vm_page_prot = FUNC_3(VAR_17->vm_page_prot);
 VAR_17->vm_ops = &VAR_15;

 return 0;
}
