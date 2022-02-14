
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_control {int id; int value; } ;
struct file {int dummy; } ;
struct cadet {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct cadet*) ;
 struct cadet* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2,
    struct v4l2_control *VAR_3)
{
 struct cadet *VAR_4 = FUNC_1(VAR_1);

 switch (VAR_3->id) {
 case 129:
  VAR_3->value = (FUNC_0(VAR_4) == 0);
  break;
 case 128:
  VAR_3->value = FUNC_0(VAR_4);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
