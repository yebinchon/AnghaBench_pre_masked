
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_control {int id; int value; } ;
struct typhoon {int curvol; int muted; } ;
struct file {int dummy; } ;


 int VAR_0 ;


 struct typhoon* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
     struct v4l2_control *VAR_3)
{
 struct typhoon *VAR_4 = FUNC_0(VAR_1);

 switch (VAR_3->id) {
 case 129:
  VAR_3->value = VAR_4->muted;
  return 0;
 case 128:
  VAR_3->value = VAR_4->curvol;
  return 0;
 }
 return -VAR_0;
}
