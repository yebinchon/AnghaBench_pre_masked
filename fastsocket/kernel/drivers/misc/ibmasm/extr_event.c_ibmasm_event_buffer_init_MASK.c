
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct service_processor {struct event_buffer* event_buffer; } ;
struct ibmasm_event {scalar_t__ serial_number; } ;
struct event_buffer {int next_serial_number; int readers; struct ibmasm_event* events; scalar_t__ next_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct event_buffer* FUNC_1 (int,int ) ;

int FUNC_2(struct service_processor *VAR_2)
{
 struct event_buffer *VAR_3;
 struct ibmasm_event *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_1(sizeof(struct event_buffer), VAR_0);
 if (!VAR_3)
  return 1;

 VAR_3->next_index = 0;
 VAR_3->next_serial_number = 1;

 VAR_4 = VAR_3->events;
 for (VAR_5=0; VAR_5<VAR_1; VAR_5++, VAR_4++)
  VAR_4->serial_number = 0;

 FUNC_0(&VAR_3->readers);

 VAR_2->event_buffer = VAR_3;

 return 0;
}
