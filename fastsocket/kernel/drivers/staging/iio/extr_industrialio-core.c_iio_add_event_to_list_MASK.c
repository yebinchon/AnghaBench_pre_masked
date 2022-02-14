
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct iio_interrupt {int ev_list_lock; } ;
struct iio_event_handler_list {scalar_t__ refcount; int exist_lock; int list; } ;


 int FUNC_0 (int *,struct list_head*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct iio_interrupt* FUNC_5 (struct list_head*) ;

void FUNC_6(struct iio_event_handler_list *VAR_0,
     struct list_head *VAR_1)
{
 unsigned long VAR_2;
 struct iio_interrupt *VAR_3 = FUNC_5(VAR_1);


 FUNC_1(&VAR_0->exist_lock);
 if (VAR_0->refcount == 0) {

  FUNC_3(&VAR_3->ev_list_lock, VAR_2);
  FUNC_0(&VAR_0->list, VAR_1);
  FUNC_4(&VAR_3->ev_list_lock, VAR_2);
 }
 VAR_0->refcount++;
 FUNC_2(&VAR_0->exist_lock);
}
