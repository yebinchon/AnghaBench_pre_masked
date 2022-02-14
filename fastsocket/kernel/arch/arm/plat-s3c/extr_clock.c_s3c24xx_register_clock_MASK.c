
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ prev; scalar_t__ next; } ;
struct clk {TYPE_1__ list; int * enable; } ;


 int FUNC_0 (int) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct clk *VAR_3)
{
 if (VAR_3->enable == ((void*)0))
  VAR_3->enable = VAR_0;




 FUNC_0(VAR_3->list.prev != VAR_3->list.next);

 FUNC_2(&VAR_2);
 FUNC_1(&VAR_3->list, &VAR_1);
 FUNC_3(&VAR_2);

 return 0;
}
