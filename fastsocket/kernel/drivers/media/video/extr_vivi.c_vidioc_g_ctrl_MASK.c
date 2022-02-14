
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vivi_fh {struct vivi_dev* dev; } ;
struct vivi_dev {int * qctl_regs; } ;
struct v4l2_control {scalar_t__ id; int value; } ;
struct file {int dummy; } ;
struct TYPE_3__ {scalar_t__ id; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
    struct v4l2_control *VAR_4)
{
 struct vivi_fh *VAR_5 = VAR_3;
 struct vivi_dev *VAR_6 = VAR_5->dev;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_1); VAR_7++)
  if (VAR_4->id == VAR_1[VAR_7].id) {
   VAR_4->value = VAR_6->qctl_regs[VAR_7];
   return 0;
  }

 return -VAR_0;
}
