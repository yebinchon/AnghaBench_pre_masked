
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct noop_data {int queue; } ;
struct elevator_queue {struct noop_data* elevator_data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct noop_data*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct elevator_queue *VAR_0)
{
 struct noop_data *VAR_1 = VAR_0->elevator_data;

 FUNC_0(!FUNC_2(&VAR_1->queue));
 FUNC_1(VAR_1);
}
