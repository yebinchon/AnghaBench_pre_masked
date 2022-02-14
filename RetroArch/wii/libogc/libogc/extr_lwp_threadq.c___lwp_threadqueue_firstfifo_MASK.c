
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ first; } ;
struct TYPE_5__ {TYPE_4__ fifo; } ;
struct TYPE_6__ {TYPE_1__ queues; } ;
typedef TYPE_2__ lwp_thrqueue ;
typedef int lwp_cntrl ;


 int FUNC_0 (TYPE_4__*) ;

lwp_cntrl* FUNC_1(lwp_thrqueue *VAR_0)
{
 if(!FUNC_0(&VAR_0->queues.fifo))
  return (lwp_cntrl*)VAR_0->queues.fifo.first;

 return ((void*)0);
}
