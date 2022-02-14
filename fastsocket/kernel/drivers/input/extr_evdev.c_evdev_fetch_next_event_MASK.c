
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_event {int dummy; } ;
struct evdev_client {int head; int tail; int buffer_lock; struct input_event* buffer; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct evdev_client *VAR_1,
      struct input_event *VAR_2)
{
 int VAR_3;

 FUNC_0(&VAR_1->buffer_lock);

 VAR_3 = VAR_1->head != VAR_1->tail;
 if (VAR_3) {
  *VAR_2 = VAR_1->buffer[VAR_1->tail++];
  VAR_1->tail &= VAR_0 - 1;
 }

 FUNC_1(&VAR_1->buffer_lock);

 return VAR_3;
}
