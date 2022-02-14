
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message_queue {void* limit; void* start2; int* hstatus; struct message_header* next; void* start; } ;
struct message_header {int lines; int present; } ;
struct gru_message_queue_desc {struct message_queue* mq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct message_header*,int ) ;

void FUNC_1(struct gru_message_queue_desc *VAR_2, void *VAR_3)
{
 struct message_queue *VAR_4 = VAR_2->mq;
 struct message_header *VAR_5 = VAR_4->next;
 void *VAR_6, *VAR_7;
 int VAR_8 = -1;
 int VAR_9 = VAR_5->lines;

 if (VAR_9 == 2)
  FUNC_0(VAR_5, VAR_1);
 VAR_5->present = VAR_1;

 VAR_7 = VAR_4->next;
 VAR_6 = VAR_7 + VAR_0 * VAR_9;
 if (VAR_6 == VAR_4->limit) {
  VAR_6 = VAR_4->start;
  VAR_8 = 1;
 } else if (VAR_7 < VAR_4->start2 && VAR_6 >= VAR_4->start2) {
  VAR_8 = 0;
 }

 if (VAR_8 >= 0)
  VAR_4->hstatus[VAR_8] = 1;
 VAR_4->next = VAR_6;
}
