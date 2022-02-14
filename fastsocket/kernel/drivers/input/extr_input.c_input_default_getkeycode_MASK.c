
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int keycodemax; int keycodesize; } ;


 int VAR_0 ;
 int FUNC_0 (struct input_dev*,int) ;

__attribute__((used)) static int FUNC_1(struct input_dev *VAR_1,
        int VAR_2, int *VAR_3)
{
 if (!VAR_1->keycodesize)
  return -VAR_0;

 if (VAR_2 >= VAR_1->keycodemax)
  return -VAR_0;

 *VAR_3 = FUNC_0(VAR_1, VAR_2);

 return 0;
}
