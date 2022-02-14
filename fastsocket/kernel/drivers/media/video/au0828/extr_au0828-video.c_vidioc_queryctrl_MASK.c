
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_queryctrl {scalar_t__ type; } ;
struct file {int dummy; } ;
struct au0828_fh {struct au0828_dev* dev; } ;
struct au0828_dev {int v4l2_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int ,struct v4l2_queryctrl*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_3, void *VAR_4,
       struct v4l2_queryctrl *VAR_5)
{
 struct au0828_fh *VAR_6 = VAR_4;
 struct au0828_dev *VAR_7 = VAR_6->dev;
 FUNC_0(&VAR_7->v4l2_dev, 0, VAR_1, VAR_2, VAR_5);
 if (VAR_5->type)
  return 0;
 else
  return -VAR_0;
}
