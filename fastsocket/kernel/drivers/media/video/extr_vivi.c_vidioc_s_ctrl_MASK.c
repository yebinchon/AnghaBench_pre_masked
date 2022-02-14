
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vivi_fh {struct vivi_dev* dev; } ;
struct vivi_dev {scalar_t__* qctl_regs; } ;
struct v4l2_control {scalar_t__ id; scalar_t__ value; } ;
struct file {int dummy; } ;
struct TYPE_3__ {scalar_t__ id; scalar_t__ minimum; scalar_t__ maximum; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_1(struct file *VAR_3, void *VAR_4,
    struct v4l2_control *VAR_5)
{
 struct vivi_fh *VAR_6 = VAR_4;
 struct vivi_dev *VAR_7 = VAR_6->dev;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_2); VAR_8++)
  if (VAR_5->id == VAR_2[VAR_8].id) {
   if (VAR_5->value < VAR_2[VAR_8].minimum ||
       VAR_5->value > VAR_2[VAR_8].maximum) {
    return -VAR_1;
   }
   VAR_7->qctl_regs[VAR_8] = VAR_5->value;
   return 0;
  }
 return -VAR_0;
}
