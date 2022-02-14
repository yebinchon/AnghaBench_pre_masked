
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_buffer {int dummy; } ;
struct file {int dummy; } ;
struct au0828_fh {scalar_t__ type; int vb_vbiq; int vb_vidq; struct au0828_dev* dev; } ;
struct au0828_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct au0828_dev*) ;
 int FUNC_1 (int *,struct v4l2_buffer*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
      struct v4l2_buffer *VAR_4)
{
 struct au0828_fh *VAR_5 = VAR_3;
 struct au0828_dev *VAR_6 = VAR_5->dev;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_5->type == VAR_1)
  VAR_7 = FUNC_1(&VAR_5->vb_vidq, VAR_4);
 else if (VAR_5->type == VAR_0)
  VAR_7 = FUNC_1(&VAR_5->vb_vbiq, VAR_4);

 return VAR_7;
}
