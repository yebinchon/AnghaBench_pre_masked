
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vm_area_struct {scalar_t__ vm_end; scalar_t__ vm_start; int vm_pgoff; int vm_page_prot; } ;
struct mlx4_ib_dev {TYPE_3__* dev; } ;
struct ib_ucontext {int device; } ;
struct TYPE_5__ {scalar_t__ pfn; } ;
struct TYPE_8__ {TYPE_1__ uar; } ;
struct TYPE_6__ {scalar_t__ bf_reg_size; scalar_t__ num_uars; } ;
struct TYPE_7__ {TYPE_2__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct vm_area_struct*,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct mlx4_ib_dev* FUNC_3 (int ) ;
 TYPE_4__* FUNC_4 (struct ib_ucontext*) ;

__attribute__((used)) static int FUNC_5(struct ib_ucontext *VAR_3, struct vm_area_struct *VAR_4)
{
 struct mlx4_ib_dev *VAR_5 = FUNC_3(VAR_3->device);

 if (VAR_4->vm_end - VAR_4->vm_start != VAR_2)
  return -VAR_1;

 if (VAR_4->vm_pgoff == 0) {
  VAR_4->vm_page_prot = FUNC_1(VAR_4->vm_page_prot);

  if (FUNC_0(VAR_4, VAR_4->vm_start,
           FUNC_4(VAR_3)->uar.pfn,
           VAR_2, VAR_4->vm_page_prot))
   return -VAR_0;
 } else if (VAR_4->vm_pgoff == 1 && VAR_5->dev->caps.bf_reg_size != 0) {
  VAR_4->vm_page_prot = FUNC_2(VAR_4->vm_page_prot);

  if (FUNC_0(VAR_4, VAR_4->vm_start,
           FUNC_4(VAR_3)->uar.pfn +
           VAR_5->dev->caps.num_uars,
           VAR_2, VAR_4->vm_page_prot))
   return -VAR_0;
 } else
  return -VAR_1;

 return 0;
}
