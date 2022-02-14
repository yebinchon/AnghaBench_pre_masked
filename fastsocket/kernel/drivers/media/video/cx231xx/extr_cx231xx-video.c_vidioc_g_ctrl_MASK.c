
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_control {int dummy; } ;
struct file {int dummy; } ;
struct cx231xx_fh {struct cx231xx* dev; } ;
struct cx231xx {int dummy; } ;


 int FUNC_0 (struct cx231xx*,int ,int ,struct v4l2_control*) ;
 int FUNC_1 (struct cx231xx*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
    struct v4l2_control *VAR_4)
{
 struct cx231xx_fh *VAR_5 = VAR_3;
 struct cx231xx *VAR_6 = VAR_5->dev;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_0(VAR_6, VAR_0, VAR_1, VAR_4);
 return VAR_7;
}
