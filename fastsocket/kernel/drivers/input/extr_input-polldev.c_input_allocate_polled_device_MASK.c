
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_polled_dev {int input; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct input_polled_dev*) ;
 struct input_polled_dev* FUNC_2 (int,int ) ;

struct input_polled_dev *FUNC_3(void)
{
 struct input_polled_dev *VAR_1;

 VAR_1 = FUNC_2(sizeof(struct input_polled_dev), VAR_0);
 if (!VAR_1)
  return ((void*)0);

 VAR_1->input = FUNC_0();
 if (!VAR_1->input) {
  FUNC_1(VAR_1);
  return ((void*)0);
 }

 return VAR_1;
}
