
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mimio {scalar_t__ open; scalar_t__ present; } ;
struct input_dev {int dev; } ;


 int FUNC_0 (int *,char*) ;
 struct mimio* FUNC_1 (struct input_dev*) ;
 int FUNC_2 (struct mimio*) ;

__attribute__((used)) static void FUNC_3(struct input_dev *VAR_0)
{
 struct mimio *VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (!VAR_1) {
  FUNC_0(&VAR_0->dev, "null mimio attached to input device\n");
  return;
 }

 if (VAR_1->open <= 0)
  FUNC_0(&VAR_0->dev, "mimio not open.\n");
 else
  VAR_1->open--;

 if (VAR_1->present == 0 && VAR_1->open == 0)
  FUNC_2(VAR_1);
}
