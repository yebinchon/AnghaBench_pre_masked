
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct au0828_fh* private_data; } ;
struct au0828_fh {scalar_t__ type; int vb_vbiq; int vb_vidq; struct au0828_dev* dev; } ;
struct au0828_dev {int dummy; } ;
typedef int poll_table ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct au0828_dev*) ;
 int FUNC_1 (struct au0828_fh*,int ) ;
 unsigned int FUNC_2 (struct file*,int *,int *) ;

__attribute__((used)) static unsigned int FUNC_3(struct file *VAR_5, poll_table *VAR_6)
{
 struct au0828_fh *VAR_7 = VAR_5->private_data;
 struct au0828_dev *VAR_8 = VAR_7->dev;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_7->type == VAR_4) {
  if (!FUNC_1(VAR_7, VAR_1))
   return VAR_2;
  return FUNC_2(VAR_5, &VAR_7->vb_vidq, VAR_6);
 } else if (VAR_7->type == VAR_3) {
  if (!FUNC_1(VAR_7, VAR_0))
   return VAR_2;
  return FUNC_2(VAR_5, &VAR_7->vb_vbiq, VAR_6);
 } else {
  return VAR_2;
 }
}
