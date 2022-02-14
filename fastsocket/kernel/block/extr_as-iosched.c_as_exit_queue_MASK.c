
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elevator_queue {struct as_data* elevator_data; } ;
struct as_data {int io_context; int * fifo_list; int antic_work; int antic_timer; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct as_data*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct elevator_queue *VAR_2)
{
 struct as_data *VAR_3 = VAR_2->elevator_data;

 FUNC_2(&VAR_3->antic_timer);
 FUNC_1(&VAR_3->antic_work);

 FUNC_0(!FUNC_4(&VAR_3->fifo_list[VAR_1]));
 FUNC_0(!FUNC_4(&VAR_3->fifo_list[VAR_0]));

 FUNC_5(VAR_3->io_context);
 FUNC_3(VAR_3);
}
