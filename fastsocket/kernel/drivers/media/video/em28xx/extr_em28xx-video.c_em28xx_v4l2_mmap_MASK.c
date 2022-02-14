
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {scalar_t__ vm_start; scalar_t__ vm_end; } ;
struct file {struct em28xx_fh* private_data; } ;
struct em28xx_fh {scalar_t__ type; int vb_vbiq; int vb_vidq; struct em28xx* dev; } ;
struct em28xx {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct em28xx*) ;
 int FUNC_1 (char*,unsigned long,unsigned long,int) ;
 int FUNC_2 (int *,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, struct vm_area_struct *VAR_3)
{
 struct em28xx_fh *VAR_4 = VAR_2->private_data;
 struct em28xx *VAR_5 = VAR_4->dev;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_4->type == VAR_1)
  VAR_6 = FUNC_2(&VAR_4->vb_vidq, VAR_3);
 else if (VAR_4->type == VAR_0)
  VAR_6 = FUNC_2(&VAR_4->vb_vbiq, VAR_3);

 FUNC_1("vma start=0x%08lx, size=%ld, ret=%d\n",
  (unsigned long)VAR_3->vm_start,
  (unsigned long)VAR_3->vm_end-(unsigned long)VAR_3->vm_start,
  VAR_6);

 return VAR_6;
}
