
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_querymenu {int dummy; } ;
struct file {int dummy; } ;
struct cx231xx_fh {struct cx231xx* dev; } ;
struct cx231xx {int dummy; } ;


 int FUNC_0 (struct cx231xx*,struct v4l2_querymenu*) ;
 int FUNC_1 (int,char*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, void *VAR_1,
    struct v4l2_querymenu *VAR_2)
{
 struct cx231xx_fh *VAR_3 = VAR_1;
 struct cx231xx *VAR_4 = VAR_3->dev;
 FUNC_1(3, "enter vidioc_querymenu()\n");
 FUNC_1(3, "exit vidioc_querymenu()\n");
 return FUNC_0(VAR_4, VAR_2);
}
