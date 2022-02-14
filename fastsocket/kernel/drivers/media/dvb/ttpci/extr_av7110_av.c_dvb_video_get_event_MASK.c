
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_event {int dummy; } ;
struct dvb_video_events {size_t eventw; size_t eventr; int lock; int * events; int wait_queue; scalar_t__ overflow; } ;
struct av7110 {struct dvb_video_events video_events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct video_event*,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4 (struct av7110 *VAR_4, struct video_event *VAR_5, int VAR_6)
{
 struct dvb_video_events *VAR_7 = &VAR_4->video_events;

 if (VAR_7->overflow) {
  VAR_7->overflow = 0;
  return -VAR_0;
 }
 if (VAR_7->eventw == VAR_7->eventr) {
  int VAR_8;

  if (VAR_6 & VAR_3)
   return -VAR_1;

  VAR_8 = FUNC_3(VAR_7->wait_queue,
            VAR_7->eventw != VAR_7->eventr);
  if (VAR_8 < 0)
   return VAR_8;
 }

 FUNC_1(&VAR_7->lock);

 FUNC_0(VAR_5, &VAR_7->events[VAR_7->eventr],
        sizeof(struct video_event));
 VAR_7->eventr = (VAR_7->eventr + 1) % VAR_2;

 FUNC_2(&VAR_7->lock);

 return 0;
}
