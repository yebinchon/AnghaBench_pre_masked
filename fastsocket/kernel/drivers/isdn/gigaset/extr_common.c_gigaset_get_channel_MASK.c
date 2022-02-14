
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bc_state {int busy; TYPE_2__* cs; int channel; scalar_t__ use_count; } ;
struct TYPE_4__ {int lock; TYPE_1__* driver; } ;
struct TYPE_3__ {int owner; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct bc_state *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_1->cs->lock, VAR_2);
 if (VAR_1->use_count || !FUNC_3(VAR_1->cs->driver->owner)) {
  FUNC_0(VAR_0, "could not allocate channel %d",
   VAR_1->channel);
  FUNC_2(&VAR_1->cs->lock, VAR_2);
  return 0;
 }
 ++VAR_1->use_count;
 VAR_1->busy = 1;
 FUNC_0(VAR_0, "allocated channel %d", VAR_1->channel);
 FUNC_2(&VAR_1->cs->lock, VAR_2);
 return 1;
}
