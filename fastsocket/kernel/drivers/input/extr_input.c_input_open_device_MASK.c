
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_handle {int open; struct input_dev* dev; } ;
struct input_dev {int (* open ) (struct input_dev*) ;int mutex; int users; scalar_t__ going_away; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 () ;

int FUNC_4(struct input_handle *VAR_1)
{
 struct input_dev *VAR_2 = VAR_1->dev;
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_2->mutex);
 if (VAR_3)
  return VAR_3;

 if (VAR_2->going_away) {
  VAR_3 = -VAR_0;
  goto out;
 }

 VAR_1->open++;

 if (!VAR_2->users++ && VAR_2->open)
  VAR_3 = VAR_2->open(VAR_2);

 if (VAR_3) {
  VAR_2->users--;
  if (!--VAR_1->open) {




   FUNC_3();
  }
 }

 out:
 FUNC_1(&VAR_2->mutex);
 return VAR_3;
}
