
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_control {int id; int value; } ;
struct fmi {int curvol; } ;
struct file {int dummy; } ;


 int VAR_0 ;

 struct fmi* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
     struct v4l2_control *VAR_3)
{
 struct fmi *VAR_4 = FUNC_0(VAR_1);

 switch (VAR_3->id) {
 case 128:
  VAR_3->value = VAR_4->curvol;
  return 0;
 }
 return -VAR_0;
}
