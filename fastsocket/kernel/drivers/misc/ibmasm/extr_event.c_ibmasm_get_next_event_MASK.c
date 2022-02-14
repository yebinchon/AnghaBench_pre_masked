
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct service_processor {int lock; struct event_buffer* event_buffer; } ;
struct ibmasm_event {scalar_t__ serial_number; int data_size; int data; } ;
struct event_reader {scalar_t__ next_serial_number; int data_size; int data; scalar_t__ cancelled; int wait; } ;
struct event_buffer {unsigned int next_index; struct ibmasm_event* events; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (struct event_buffer*,struct event_reader*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (int ,int) ;

int FUNC_5(struct service_processor *VAR_2, struct event_reader *VAR_3)
{
 struct event_buffer *VAR_4 = VAR_2->event_buffer;
 struct ibmasm_event *VAR_5;
 unsigned int VAR_6;
 unsigned long VAR_7;

 VAR_3->cancelled = 0;

 if (FUNC_4(VAR_3->wait,
   FUNC_0(VAR_4, VAR_3) || VAR_3->cancelled))
  return -VAR_0;

 if (!FUNC_0(VAR_4, VAR_3))
  return 0;

 FUNC_2(&VAR_2->lock, VAR_7);

 VAR_6 = VAR_4->next_index;
 VAR_5 = &VAR_4->events[VAR_6];
 while (VAR_5->serial_number < VAR_3->next_serial_number) {
  VAR_6 = (VAR_6 + 1) % VAR_1;
  VAR_5 = &VAR_4->events[VAR_6];
 }
 FUNC_1(VAR_3->data, VAR_5->data, VAR_5->data_size);
 VAR_3->data_size = VAR_5->data_size;
 VAR_3->next_serial_number = VAR_5->serial_number + 1;

 FUNC_3(&VAR_2->lock, VAR_7);

 return VAR_5->data_size;
}
