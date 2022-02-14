
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct ib_uverbs_file {int ucontext; TYPE_2__* device; } ;
struct file {struct ib_uverbs_file* private_data; } ;
struct TYPE_4__ {TYPE_1__* ib_dev; } ;
struct TYPE_3__ {int (* mmap ) (int ,struct vm_area_struct*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, struct vm_area_struct *VAR_2)
{
 struct ib_uverbs_file *VAR_3 = VAR_1->private_data;

 if (!VAR_3->ucontext)
  return -VAR_0;
 else
  return VAR_3->device->ib_dev->mmap(VAR_3->ucontext, VAR_2);
}
