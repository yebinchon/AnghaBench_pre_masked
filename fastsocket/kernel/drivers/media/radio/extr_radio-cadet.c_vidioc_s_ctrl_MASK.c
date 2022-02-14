
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_control {int id; int value; } ;
struct file {int dummy; } ;
struct cadet {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct cadet*,int) ;
 struct cadet* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2,
    struct v4l2_control *VAR_3)
{
 struct cadet *VAR_4 = FUNC_1(VAR_1);

 switch (VAR_3->id){
 case 129:
  if (VAR_3->value)
   FUNC_0(VAR_4, 0);
  else
   FUNC_0(VAR_4, 0xffff);
  break;
 case 128:
  FUNC_0(VAR_4, VAR_3->value);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
