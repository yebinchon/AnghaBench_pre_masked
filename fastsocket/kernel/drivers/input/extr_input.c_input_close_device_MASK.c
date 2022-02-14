
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_handle {int open; struct input_dev* dev; } ;
struct input_dev {int mutex; int (* close ) (struct input_dev*) ;int users; } ;


 int FUNC_0 (struct input_handle*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 () ;

void FUNC_5(struct input_handle *VAR_0)
{
 struct input_dev *VAR_1 = VAR_0->dev;

 FUNC_1(&VAR_1->mutex);

 FUNC_0(VAR_0);

 if (!--VAR_1->users && VAR_1->close)
  VAR_1->close(VAR_1);

 if (!--VAR_0->open) {





  FUNC_4();
 }

 FUNC_2(&VAR_1->mutex);
}
