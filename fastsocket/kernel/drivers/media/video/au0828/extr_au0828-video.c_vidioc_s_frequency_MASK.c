
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {scalar_t__ tuner; scalar_t__ type; int frequency; } ;
struct file {int dummy; } ;
struct au0828_fh {struct au0828_dev* dev; } ;
struct au0828_dev {int v4l2_dev; int ctrl_freq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct au0828_dev*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int ,int ,struct v4l2_frequency*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_4, void *VAR_5,
    struct v4l2_frequency *VAR_6)
{
 struct au0828_fh *VAR_7 = VAR_5;
 struct au0828_dev *VAR_8 = VAR_7->dev;

 if (VAR_6->tuner != 0)
  return -VAR_0;
 if (VAR_6->type != VAR_1)
  return -VAR_0;

 VAR_8->ctrl_freq = VAR_6->frequency;

 FUNC_1(&VAR_8->v4l2_dev, 0, VAR_3, VAR_2, VAR_6);

 FUNC_0(VAR_8);

 return 0;
}
