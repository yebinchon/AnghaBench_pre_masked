
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* msg16; void* msg32; } ;
struct adsp_event {int type; int is16; unsigned int msg_id; size_t size; int list; TYPE_1__ data; } ;
struct adsp_device {int event_wait; int event_queue_lock; int event_queue; } ;


 size_t VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 struct adsp_event* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(void *VAR_3, unsigned VAR_4, size_t VAR_5,
         void (*VAR_6)(void *VAR_7, size_t VAR_8))
{
 struct adsp_device *VAR_9 = VAR_3;
 struct adsp_event *VAR_10;
 unsigned long VAR_11;

 if (VAR_5 > VAR_0) {
  FUNC_2("adsp_event: event too large (%d bytes)\n", VAR_5);
  return;
 }

 VAR_10 = FUNC_0(sizeof(*VAR_10), VAR_2);
 if (!VAR_10) {
  FUNC_2("adsp_event: cannot allocate buffer\n");
  return;
 }

 if (VAR_4 != VAR_1) {
  VAR_10->type = 0;
  VAR_10->is16 = 0;
  VAR_10->msg_id = VAR_4;
  VAR_10->size = VAR_5;

  VAR_6(VAR_10->data.msg16, VAR_5);
 } else {
  VAR_10->type = 1;
  VAR_10->is16 = 1;
  VAR_10->msg_id = VAR_4;
  VAR_10->size = VAR_5;
  VAR_6(VAR_10->data.msg32, VAR_5);
 }

 FUNC_3(&VAR_9->event_queue_lock, VAR_11);
 FUNC_1(&VAR_10->list, &VAR_9->event_queue);
 FUNC_4(&VAR_9->event_queue_lock, VAR_11);
 FUNC_5(&VAR_9->event_wait);
}
