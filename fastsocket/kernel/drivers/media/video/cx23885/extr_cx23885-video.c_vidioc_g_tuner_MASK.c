
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ index; int rangehigh; int signal; int capability; int type; int name; } ;
struct file {int dummy; } ;
struct cx23885_fh {struct cx23885_dev* dev; } ;
struct cx23885_dev {scalar_t__ tuner_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_4, void *VAR_5,
    struct v4l2_tuner *VAR_6)
{
 struct cx23885_dev *VAR_7 = ((struct cx23885_fh *)VAR_5)->dev;

 if (FUNC_1(VAR_1 == VAR_7->tuner_type))
  return -VAR_0;
 if (0 != VAR_6->index)
  return -VAR_0;

 FUNC_0(VAR_6->name, "Television");
 VAR_6->type = VAR_2;
 VAR_6->capability = VAR_3;
 VAR_6->rangehigh = 0xffffffffUL;
 VAR_6->signal = 0xffff ;
 return 0;
}
