
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ index; } ;
struct file {int dummy; } ;
struct dsbr100_device {scalar_t__ removed; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dsbr100_device* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
    struct v4l2_tuner *VAR_4)
{
 struct dsbr100_device *VAR_5 = FUNC_0(VAR_2);


 if (VAR_5->removed)
  return -VAR_1;

 if (VAR_4->index > 0)
  return -VAR_0;

 return 0;
}
