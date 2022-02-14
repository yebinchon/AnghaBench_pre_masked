
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_polled_dev {int work; } ;
struct input_dev {int dummy; } ;


 int FUNC_0 (int *) ;
 struct input_polled_dev* FUNC_1 (struct input_dev*) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct input_dev *VAR_0)
{
 struct input_polled_dev *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->work);
 FUNC_2();
}
