
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_audio {unsigned int index; int capability; int name; } ;
struct file {int dummy; } ;
struct au0828_fh {struct au0828_dev* dev; } ;
struct au0828_dev {unsigned int ctrl_ainput; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3, struct v4l2_audio *VAR_4)
{
 struct au0828_fh *VAR_5 = VAR_3;
 struct au0828_dev *VAR_6 = VAR_5->dev;
 unsigned int VAR_7 = VAR_4->index;

 if (VAR_4->index > 1)
  return -VAR_0;

 VAR_7 = VAR_6->ctrl_ainput;
 if (VAR_7 == 0)
  FUNC_0(VAR_4->name, "Television");
 else
  FUNC_0(VAR_4->name, "Line in");

 VAR_4->capability = VAR_1;
 VAR_4->index = VAR_7;
 return 0;
}
