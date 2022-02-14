
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elevator_queue {scalar_t__ registered; int kobj; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct elevator_queue *VAR_1)
{
 FUNC_1(&VAR_1->kobj, VAR_0);
 FUNC_0(&VAR_1->kobj);
 VAR_1->registered = 0;
}
