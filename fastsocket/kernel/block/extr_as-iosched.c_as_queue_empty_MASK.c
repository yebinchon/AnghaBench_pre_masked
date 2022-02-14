
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {TYPE_1__* elevator; } ;
struct as_data {int * fifo_list; } ;
struct TYPE_2__ {struct as_data* elevator_data; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct request_queue *VAR_2)
{
 struct as_data *VAR_3 = VAR_2->elevator->elevator_data;

 return FUNC_0(&VAR_3->fifo_list[VAR_0])
  && FUNC_0(&VAR_3->fifo_list[VAR_1]);
}
