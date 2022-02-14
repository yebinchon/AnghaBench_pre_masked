
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ index; int afc; int signal; int type; } ;
struct file {int dummy; } ;
struct au0828_fh {struct au0828_dev* dev; } ;
struct au0828_dev {int v4l2_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int ,int ,struct v4l2_tuner*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_4, void *VAR_5,
    struct v4l2_tuner *VAR_6)
{
 struct au0828_fh *VAR_7 = VAR_5;
 struct au0828_dev *VAR_8 = VAR_7->dev;

 if (VAR_6->index != 0)
  return -VAR_0;

 VAR_6->type = VAR_1;
 FUNC_1(&VAR_8->v4l2_dev, 0, VAR_3, VAR_2, VAR_6);
 FUNC_0(1, "VIDIOC_S_TUNER: signal = %x, afc = %x\n", VAR_6->signal,
  VAR_6->afc);
 return 0;

}
