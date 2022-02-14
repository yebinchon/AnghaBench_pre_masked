
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct l3_process {int dummy; } ;
struct TYPE_2__ {long data; void* function; } ;
struct L3Timer {TYPE_1__ tl; struct l3_process* pc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(struct l3_process *VAR_1, struct L3Timer *VAR_2)
{
 VAR_2->pc = VAR_1;
 VAR_2->tl.function = (void *) VAR_0;
 VAR_2->tl.data = (long) VAR_2;
 FUNC_0(&VAR_2->tl);
}
