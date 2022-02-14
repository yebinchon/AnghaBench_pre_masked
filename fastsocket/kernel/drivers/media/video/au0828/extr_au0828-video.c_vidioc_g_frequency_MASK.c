
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {int frequency; int type; } ;
struct file {int dummy; } ;
struct au0828_fh {struct au0828_dev* dev; } ;
struct au0828_dev {int ctrl_freq; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_1, void *VAR_2,
    struct v4l2_frequency *VAR_3)
{
 struct au0828_fh *VAR_4 = VAR_2;
 struct au0828_dev *VAR_5 = VAR_4->dev;

 VAR_3->type = VAR_0;
 VAR_3->frequency = VAR_5->ctrl_freq;
 return 0;
}
