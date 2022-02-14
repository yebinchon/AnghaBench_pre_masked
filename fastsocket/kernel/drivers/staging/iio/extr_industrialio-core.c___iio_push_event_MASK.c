
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iio_shared_ev_pointer {struct iio_detected_event_list* ev_p; } ;
struct TYPE_6__ {int list; } ;
struct TYPE_4__ {int flags; } ;
struct iio_event_interface {scalar_t__ current_events; scalar_t__ max_events; int event_list_lock; int wait; TYPE_3__ det_events; TYPE_1__ handler; } ;
struct TYPE_5__ {int id; int timestamp; } ;
struct iio_detected_event_list {int list; struct iio_shared_ev_pointer* shared_pointer; TYPE_2__ ev; } ;
typedef int s64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct iio_detected_event_list* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct iio_event_interface *VAR_3,
       int VAR_4,
       s64 VAR_5,
       struct iio_shared_ev_pointer *
       VAR_6)
{
 struct iio_detected_event_list *VAR_7;
 int VAR_8 = 0;


 FUNC_2(&VAR_3->event_list_lock);
 if (FUNC_4(VAR_2, &VAR_3->handler.flags)) {
  if (VAR_3->current_events == VAR_3->max_events)
   return 0;
  VAR_7 = FUNC_0(sizeof(*VAR_7), VAR_1);
  if (VAR_7 == ((void*)0)) {
   VAR_8 = -VAR_0;
   goto error_ret;
  }
  VAR_7->ev.id = VAR_4;
  VAR_7->ev.timestamp = VAR_5;
  VAR_7->shared_pointer = VAR_6;
  if (VAR_7->shared_pointer)
   VAR_6->ev_p = VAR_7;

  FUNC_1(&VAR_7->list, &VAR_3->det_events.list);
  VAR_3->current_events++;
  FUNC_3(&VAR_3->event_list_lock);
  FUNC_5(&VAR_3->wait);
 } else
  FUNC_3(&VAR_3->event_list_lock);

error_ret:
 return VAR_8;
}
