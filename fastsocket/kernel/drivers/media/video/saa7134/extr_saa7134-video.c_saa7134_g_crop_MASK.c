
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_crop {scalar_t__ type; int c; } ;
struct saa7134_fh {struct saa7134_dev* dev; } ;
struct saa7134_dev {int crop_current; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_3, void *VAR_4, struct v4l2_crop *VAR_5)
{
 struct saa7134_fh *VAR_6 = VAR_4;
 struct saa7134_dev *VAR_7 = VAR_6->dev;

 if (VAR_5->type != VAR_1 &&
     VAR_5->type != VAR_2)
  return -VAR_0;
 VAR_5->c = VAR_7->crop_current;
 return 0;
}
