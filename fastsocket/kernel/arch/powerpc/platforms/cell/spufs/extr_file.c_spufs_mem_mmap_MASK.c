
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_start; int vm_pgoff; int vm_flags; int * vm_ops; int vm_page_prot; int vm_end; } ;
struct spu_state {scalar_t__ use_big_pages; } ;
struct spu_context {struct spu_state csa; } ;
struct file {struct spu_context* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int ,int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(struct file *VAR_5, struct vm_area_struct *VAR_6)
{
 if (!(VAR_6->vm_flags & VAR_3))
  return -VAR_0;

 VAR_6->vm_flags |= VAR_1 | VAR_2;
 VAR_6->vm_page_prot = FUNC_0(VAR_6->vm_page_prot);

 VAR_6->vm_ops = &VAR_4;
 return 0;
}
