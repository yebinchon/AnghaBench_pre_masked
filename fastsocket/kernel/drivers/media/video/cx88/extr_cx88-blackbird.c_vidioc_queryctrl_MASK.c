
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_queryctrl {scalar_t__ id; } ;
struct file {int dummy; } ;
struct cx8802_fh {struct cx8802_dev* dev; } ;
struct cx8802_dev {int core; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cx8802_dev*,struct v4l2_queryctrl*) ;
 int VAR_1 ;
 int FUNC_1 (int ,struct v4l2_queryctrl*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4 (struct file *VAR_2, void *VAR_3,
    struct v4l2_queryctrl *VAR_4)
{
 struct cx8802_dev *VAR_5 = ((struct cx8802_fh *)VAR_3)->dev;

 if (FUNC_0(VAR_5, VAR_4) == 0)
  return 0;

 VAR_4->id = FUNC_3(VAR_1, VAR_4->id);
 if (FUNC_2(VAR_4->id == 0))
  return -VAR_0;
 return FUNC_1(VAR_5->core, VAR_4);
}
