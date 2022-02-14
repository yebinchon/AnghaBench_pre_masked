
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int child_relid; scalar_t__ monitor_allocated; } ;
struct vmbus_channel {int monitor_bit; size_t monitor_grp; TYPE_2__ offermsg; } ;
struct hv_monitor_page {TYPE_1__* trigger_group; } ;
struct TYPE_6__ {struct hv_monitor_page* monitor_pages; scalar_t__ send_int_page; } ;
struct TYPE_4__ {int pending; } ;


 int FUNC_0 (int,unsigned long*) ;
 TYPE_3__ VAR_0 ;
 int FUNC_1 (struct vmbus_channel*) ;

__attribute__((used)) static void FUNC_2(struct vmbus_channel *VAR_1)
{
 struct hv_monitor_page *VAR_2;

 if (VAR_1->offermsg.monitor_allocated) {

  FUNC_0(VAR_1->offermsg.child_relid & 31,
   (unsigned long *) VAR_0.send_int_page +
   (VAR_1->offermsg.child_relid >> 5));

  VAR_2 = VAR_0.monitor_pages;
  VAR_2++;

  FUNC_0(VAR_1->monitor_bit,
   (unsigned long *)&VAR_2->trigger_group
     [VAR_1->monitor_grp].pending);

 } else {
  FUNC_1(VAR_1);
 }
}
