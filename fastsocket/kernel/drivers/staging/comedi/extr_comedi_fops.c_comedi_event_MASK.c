
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int subdev_flags; struct comedi_async* async; } ;
struct comedi_device {int async_queue; } ;
struct comedi_async {int events; int cb_mask; int cb_arg; int (* cb_func ) (int,int ) ;int wait_head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct comedi_subdevice*) ;
 int FUNC_1 (struct comedi_subdevice*,unsigned int,unsigned int) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct comedi_device *VAR_11, struct comedi_subdevice *VAR_12)
{
 struct comedi_async *VAR_13 = VAR_12->async;
 unsigned VAR_14 = 0;
 unsigned VAR_15 = 0;



 if ((FUNC_0(VAR_12) & VAR_9) == 0)
  return;

 if (VAR_12->
     async->events & (VAR_0 | VAR_1 |
        VAR_2)) {
  VAR_15 |= VAR_9;
 }


 if (VAR_12->async->events & (VAR_1 | VAR_2)) {
  VAR_15 |= VAR_8;
  VAR_14 |= VAR_8;
 }
 if (VAR_15) {

  FUNC_1(VAR_12, VAR_15, VAR_14);
 }

 if (VAR_13->cb_mask & VAR_12->async->events) {
  if (FUNC_0(VAR_12) & VAR_10) {
   FUNC_4(&VAR_13->wait_head);
   if (VAR_12->subdev_flags & VAR_5) {
    FUNC_2(&VAR_11->async_queue, VAR_7, VAR_3);
   }
   if (VAR_12->subdev_flags & VAR_6) {
    FUNC_2(&VAR_11->async_queue, VAR_7, VAR_4);
   }
  } else {
   if (VAR_13->cb_func)
    VAR_13->cb_func(VAR_12->async->events, VAR_13->cb_arg);
  }
 }
 VAR_12->async->events = 0;
}
