
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_control {int dummy; } ;
struct file {int dummy; } ;
struct au0828_fh {struct au0828_dev* dev; } ;
struct au0828_dev {int v4l2_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ,struct v4l2_control*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
    struct v4l2_control *VAR_4)
{
 struct au0828_fh *VAR_5 = VAR_3;
 struct au0828_dev *VAR_6 = VAR_5->dev;

 FUNC_0(&VAR_6->v4l2_dev, 0, VAR_0, VAR_1, VAR_4);
 return 0;

}
