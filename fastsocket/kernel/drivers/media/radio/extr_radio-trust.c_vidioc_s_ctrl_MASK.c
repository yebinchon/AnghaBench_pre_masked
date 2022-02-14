
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_control {int id; int value; } ;
struct trust {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;




 int FUNC_0 (struct trust*,int ) ;
 int FUNC_1 (struct trust*,int ) ;
 int FUNC_2 (struct trust*,int ) ;
 int FUNC_3 (struct trust*,int ) ;
 struct trust* FUNC_4 (struct file*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_1, void *VAR_2,
    struct v4l2_control *VAR_3)
{
 struct trust *VAR_4 = FUNC_4(VAR_1);

 switch (VAR_3->id) {
 case 130:
  FUNC_1(VAR_4, VAR_3->value);
  return 0;
 case 128:
  FUNC_3(VAR_4, VAR_3->value);
  return 0;
 case 131:
  FUNC_0(VAR_4, VAR_3->value);
  return 0;
 case 129:
  FUNC_2(VAR_4, VAR_3->value);
  return 0;
 }
 return -VAR_0;
}
