
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_event {int dummy; } ;
struct evdev_client {int head; int fasync; int buffer_lock; struct input_event* buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct evdev_client *VAR_3,
        struct input_event *VAR_4)
{



 FUNC_1(&VAR_3->buffer_lock);
 VAR_3->buffer[VAR_3->head++] = *VAR_4;
 VAR_3->head &= VAR_0 - 1;
 FUNC_2(&VAR_3->buffer_lock);

 FUNC_0(&VAR_3->fasync, VAR_2, VAR_1);
}
