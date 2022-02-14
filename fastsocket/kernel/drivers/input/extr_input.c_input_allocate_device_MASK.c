
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * class; int * type; } ;
struct input_dev {int node; int h_list; int event_lock; int mutex; TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct input_dev* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

struct input_dev *FUNC_6(void)
{
 struct input_dev *VAR_4;

 VAR_4 = FUNC_3(sizeof(struct input_dev), VAR_0);
 if (VAR_4) {
  VAR_4->dev.type = &VAR_3;
  VAR_4->dev.class = &VAR_2;
  FUNC_2(&VAR_4->dev);
  FUNC_4(&VAR_4->mutex);
  FUNC_5(&VAR_4->event_lock);
  FUNC_0(&VAR_4->h_list);
  FUNC_0(&VAR_4->node);

  FUNC_1(VAR_1);
 }

 return VAR_4;
}
