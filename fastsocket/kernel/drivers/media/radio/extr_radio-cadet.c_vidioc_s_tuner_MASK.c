
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {int index; } ;
struct file {int dummy; } ;
struct cadet {int curtuner; } ;


 int VAR_0 ;
 struct cadet* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
    struct v4l2_tuner *VAR_3)
{
 struct cadet *VAR_4 = FUNC_0(VAR_1);

 if (VAR_3->index != 0 && VAR_3->index != 1)
  return -VAR_0;
 VAR_4->curtuner = VAR_3->index;
 return 0;
}
