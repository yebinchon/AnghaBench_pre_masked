
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {struct elevator_queue* elevator; } ;
struct elevator_queue {void* elevator_data; } ;



__attribute__((used)) static void FUNC_0(struct request_queue *VAR_0, struct elevator_queue *VAR_1,
      void *VAR_2)
{
 VAR_0->elevator = VAR_1;
 VAR_1->elevator_data = VAR_2;
}
