
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ index; int type; int name; } ;
struct file {int dummy; } ;
struct cx231xx_fh {struct cx231xx* dev; } ;
struct cx231xx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cx231xx*,int ,int ,struct v4l2_tuner*) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_4, void *VAR_5, struct v4l2_tuner *VAR_6)
{
 struct cx231xx *VAR_7 = ((struct cx231xx_fh *)VAR_5)->dev;

 if (FUNC_2(VAR_6->index > 0))
  return -VAR_0;

 FUNC_1(VAR_6->name, "Radio");
 VAR_6->type = VAR_1;

 FUNC_0(VAR_7, VAR_3, VAR_2, VAR_6);

 return 0;
}
