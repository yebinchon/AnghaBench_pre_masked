
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {TYPE_1__* elevator; } ;
struct noop_data {int queue; } ;
struct TYPE_2__ {struct noop_data* elevator_data; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct request_queue *VAR_0)
{
 struct noop_data *VAR_1 = VAR_0->elevator->elevator_data;

 return FUNC_0(&VAR_1->queue);
}
