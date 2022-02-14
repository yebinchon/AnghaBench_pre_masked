
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* zone_t ;
typedef int vm_size_t ;
typedef int thread_continue_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_4__ {int zone_replenish_thread; int async_prio_refill; int prio_refill_watermark; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*,int ,int *) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;

void
FUNC_4(zone_t VAR_4, vm_size_t VAR_5) {
 VAR_4->prio_refill_watermark = VAR_5;

 VAR_4->async_prio_refill = VAR_2;
 FUNC_0();
 kern_return_t VAR_6 = FUNC_1((thread_continue_t)VAR_3, VAR_4, VAR_1, &VAR_4->zone_replenish_thread);

 if (VAR_6 != VAR_0) {
  FUNC_2("zone_prio_refill_configure, thread create: 0x%x", VAR_6);
 }

 FUNC_3(VAR_4->zone_replenish_thread);
}
