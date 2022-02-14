
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct block_device {int * bd_holder; int bd_holders; TYPE_1__* bd_contains; } ;
struct TYPE_2__ {int * bd_holder; int bd_holders; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct block_device *VAR_1)
{
 FUNC_0(&VAR_0);
 if (!--VAR_1->bd_contains->bd_holders)
  VAR_1->bd_contains->bd_holder = ((void*)0);
 if (!--VAR_1->bd_holders)
  VAR_1->bd_holder = ((void*)0);
 FUNC_1(&VAR_0);
}
