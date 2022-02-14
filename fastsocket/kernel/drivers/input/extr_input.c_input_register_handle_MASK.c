
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_handler {int (* start ) (struct input_handle*) ;int h_list; } ;
struct input_handle {int h_node; int d_node; struct input_dev* dev; struct input_handler* handler; } ;
struct input_dev {int mutex; int h_list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct input_handle*) ;

int FUNC_5(struct input_handle *VAR_0)
{
 struct input_handler *VAR_1 = VAR_0->handler;
 struct input_dev *VAR_2 = VAR_0->dev;
 int VAR_3;





 VAR_3 = FUNC_2(&VAR_2->mutex);
 if (VAR_3)
  return VAR_3;
 FUNC_1(&VAR_0->d_node, &VAR_2->h_list);
 FUNC_3(&VAR_2->mutex);







 FUNC_0(&VAR_0->h_node, &VAR_1->h_list);

 if (VAR_1->start)
  VAR_1->start(VAR_0);

 return 0;
}
