
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_audio {int capability; int index; int name; } ;
struct file {int dummy; } ;
struct cx231xx_fh {struct cx231xx* dev; } ;
struct cx231xx {int ctl_ainput; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3, struct v4l2_audio *VAR_4)
{
 struct cx231xx_fh *VAR_5 = VAR_3;
 struct cx231xx *VAR_6 = VAR_5->dev;

 switch (VAR_4->index) {
 case 128:
  FUNC_0(VAR_4->name, "Television");
  break;
 case 129:
  FUNC_0(VAR_4->name, "Line In");
  break;
 default:
  return -VAR_0;
 }

 VAR_4->index = VAR_6->ctl_ainput;
 VAR_4->capability = VAR_1;

 return 0;
}
