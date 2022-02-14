
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_format {int dummy; } ;
struct file {int dummy; } ;
struct au0828_fh {struct au0828_dev* dev; } ;
struct au0828_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct au0828_dev*,int ,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
      struct v4l2_format *VAR_3)
{
 struct au0828_fh *VAR_4 = VAR_2;
 struct au0828_dev *VAR_5 = VAR_4->dev;

 return FUNC_0(VAR_5, VAR_0, VAR_3);
}
