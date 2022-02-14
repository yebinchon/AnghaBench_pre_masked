
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct service_processor {int lock; struct event_buffer* event_buffer; } ;
struct ibmasm_event {unsigned int data_size; int serial_number; int data; } ;
struct event_buffer {size_t next_index; int next_serial_number; struct ibmasm_event* events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,void*,unsigned int) ;
 unsigned int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct service_processor*) ;

void FUNC_5(struct service_processor *VAR_2, void *VAR_3, unsigned int VAR_4)
{
 struct event_buffer *VAR_5 = VAR_2->event_buffer;
 struct ibmasm_event *VAR_6;
 unsigned long VAR_7;

 VAR_4 = FUNC_1(VAR_4, VAR_0);

 FUNC_2(&VAR_2->lock, VAR_7);

 VAR_6 = &VAR_5->events[VAR_5->next_index];
 FUNC_0(VAR_6->data, VAR_3, VAR_4);
 VAR_6->data_size = VAR_4;
 VAR_6->serial_number = VAR_5->next_serial_number;


 VAR_5->next_index = (VAR_5->next_index + 1) % VAR_1;
 VAR_5->next_serial_number++;
 FUNC_3(&VAR_2->lock, VAR_7);

 FUNC_4(VAR_2);
}
