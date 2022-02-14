
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_audio {scalar_t__ index; } ;
struct file {int dummy; } ;
struct au0828_fh {struct au0828_dev* dev; } ;
struct au0828_dev {scalar_t__ ctrl_ainput; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_1, void *VAR_2, struct v4l2_audio *VAR_3)
{
 struct au0828_fh *VAR_4 = VAR_2;
 struct au0828_dev *VAR_5 = VAR_4->dev;
 if (VAR_3->index != VAR_5->ctrl_ainput)
  return -VAR_0;
 return 0;
}
