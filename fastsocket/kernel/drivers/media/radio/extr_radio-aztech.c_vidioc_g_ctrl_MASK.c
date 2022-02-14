
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_control {int id; int value; } ;
struct file {int dummy; } ;
struct aztech {int curvol; } ;


 int VAR_0 ;


 struct aztech* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
       struct v4l2_control *VAR_3)
{
 struct aztech *VAR_4 = FUNC_0(VAR_1);

 switch (VAR_3->id) {
 case 129:
  if (VAR_4->curvol == 0)
   VAR_3->value = 1;
  else
   VAR_3->value = 0;
  return 0;
 case 128:
  VAR_3->value = VAR_4->curvol * 6554;
  return 0;
 }
 return -VAR_0;
}
