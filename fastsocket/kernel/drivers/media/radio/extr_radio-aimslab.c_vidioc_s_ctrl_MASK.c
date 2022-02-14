
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_control {int id; int value; } ;
struct rtrack {int curvol; } ;
struct file {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct rtrack*) ;
 int FUNC_1 (struct rtrack*,int ) ;
 struct rtrack* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, void *VAR_2,
     struct v4l2_control *VAR_3)
{
 struct rtrack *VAR_4 = FUNC_2(VAR_1);

 switch (VAR_3->id) {
 case 129:
  if (VAR_3->value)
   FUNC_0(VAR_4);
  else
   FUNC_1(VAR_4, VAR_4->curvol);
  return 0;
 case 128:
  FUNC_1(VAR_4, VAR_3->value);
  return 0;
 }
 return -VAR_0;
}
