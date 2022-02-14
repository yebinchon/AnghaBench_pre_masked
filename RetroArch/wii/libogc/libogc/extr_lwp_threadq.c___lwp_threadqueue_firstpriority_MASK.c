
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_5__ {TYPE_4__* priority; } ;
struct TYPE_6__ {TYPE_1__ queues; } ;
typedef TYPE_2__ lwp_thrqueue ;
typedef int lwp_cntrl ;
struct TYPE_7__ {scalar_t__ first; } ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;

lwp_cntrl* FUNC_1(lwp_thrqueue *VAR_1)
{
 u32 VAR_2;

 for(VAR_2=0;VAR_2<VAR_0;VAR_2++) {
  if(!FUNC_0(&VAR_1->queues.priority[VAR_2]))
   return (lwp_cntrl*)VAR_1->queues.priority[VAR_2].first;
 }
 return ((void*)0);
}
