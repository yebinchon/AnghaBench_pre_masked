
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_queryctrl {int id; } ;
struct file {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct v4l2_queryctrl*,int ,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
     struct v4l2_queryctrl *VAR_3)
{
 switch (VAR_3->id) {
 case 129:
  return FUNC_0(VAR_3, 0, 1, 1, 1);
 case 128:
  return FUNC_0(VAR_3, 0, 0xff, 1, 0xff);
 }
 return -VAR_0;
}
