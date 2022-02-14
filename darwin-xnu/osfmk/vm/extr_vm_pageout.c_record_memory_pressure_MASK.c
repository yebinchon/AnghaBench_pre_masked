
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vm_pageout_stat {int dummy; } ;
struct TYPE_5__ {scalar_t__ vm_memory_pressure; } ;
struct TYPE_4__ {scalar_t__ freed_external; scalar_t__ freed_internal; scalar_t__ freed_cleaned; scalar_t__ freed_speculative; } ;


 unsigned int FUNC_0 (unsigned int) ;
 size_t FUNC_1 (unsigned int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 () ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__* VAR_3 ;

void
FUNC_5(void)
{
 unsigned int VAR_4;
 VAR_2.vm_memory_pressure =
   VAR_3[FUNC_1(VAR_1)].freed_speculative +
   VAR_3[FUNC_1(VAR_1)].freed_cleaned +
   VAR_3[FUNC_1(VAR_1)].freed_internal +
   VAR_3[FUNC_1(VAR_1)].freed_external;

 FUNC_3( (unsigned int)VAR_2.vm_memory_pressure );


 VAR_4 = FUNC_0(VAR_1);

 FUNC_2(&VAR_3[VAR_4], sizeof(struct vm_pageout_stat));

 VAR_1 = VAR_4;
}
