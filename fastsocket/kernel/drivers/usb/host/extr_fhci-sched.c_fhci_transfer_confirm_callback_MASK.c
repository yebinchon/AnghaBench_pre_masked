
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fhci_hcd {TYPE_1__* process_done_task; } ;
struct TYPE_2__ {int state; } ;


 int FUNC_0 (TYPE_1__*) ;

u32 FUNC_1(struct fhci_hcd *VAR_0)
{
 if (!VAR_0->process_done_task->state)
  FUNC_0(VAR_0->process_done_task);
 return 0;
}
