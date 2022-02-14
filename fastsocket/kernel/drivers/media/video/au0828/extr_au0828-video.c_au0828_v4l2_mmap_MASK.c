
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct file {struct au0828_fh* private_data; } ;
struct au0828_fh {scalar_t__ type; int vb_vbiq; int vb_vidq; struct au0828_dev* dev; } ;
struct au0828_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct au0828_dev*) ;
 int FUNC_1 (int *,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, struct vm_area_struct *VAR_3)
{
 struct au0828_fh *VAR_4 = VAR_2->private_data;
 struct au0828_dev *VAR_5 = VAR_4->dev;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_4->type == VAR_1)
  VAR_6 = FUNC_1(&VAR_4->vb_vidq, VAR_3);
 else if (VAR_4->type == VAR_0)
  VAR_6 = FUNC_1(&VAR_4->vb_vbiq, VAR_3);

 return VAR_6;
}
