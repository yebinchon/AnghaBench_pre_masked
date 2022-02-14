
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {scalar_t__ vm_start; scalar_t__ vm_end; } ;
struct vivi_fh {int vb_vidq; struct vivi_dev* dev; } ;
struct vivi_dev {int dummy; } ;
struct file {struct vivi_fh* private_data; } ;


 int FUNC_0 (struct vivi_dev*,int,char*,unsigned long,...) ;
 int FUNC_1 (int *,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, struct vm_area_struct *VAR_1)
{
 struct vivi_fh *VAR_2 = VAR_0->private_data;
 struct vivi_dev *VAR_3 = VAR_2->dev;
 int VAR_4;

 FUNC_0(VAR_3, 1, "mmap called, vma=0x%08lx\n", (unsigned long)VAR_1);

 VAR_4 = FUNC_1(&VAR_2->vb_vidq, VAR_1);

 FUNC_0(VAR_3, 1, "vma start=0x%08lx, size=%ld, ret=%d\n",
  (unsigned long)VAR_1->vm_start,
  (unsigned long)VAR_1->vm_end-(unsigned long)VAR_1->vm_start,
  VAR_4);

 return VAR_4;
}
