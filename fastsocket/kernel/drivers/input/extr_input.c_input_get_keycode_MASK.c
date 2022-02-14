
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int (* getkeycode ) (struct input_dev*,int,int*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct input_dev*,int,int*) ;

int FUNC_1(struct input_dev *VAR_1, int VAR_2, int *VAR_3)
{
 if (VAR_2 < 0)
  return -VAR_0;

 return VAR_1->getkeycode(VAR_1, VAR_2, VAR_3);
}
