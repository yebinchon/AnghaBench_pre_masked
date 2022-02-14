
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int child_relid; } ;
struct vmbus_channel {int sig_event; int is_dedicated_interrupt; TYPE_1__ offermsg; } ;
struct TYPE_4__ {scalar_t__ send_int_page; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,unsigned long*) ;
 TYPE_2__ VAR_0 ;

int FUNC_2(struct vmbus_channel *VAR_1)
{
 u32 VAR_2 = VAR_1->offermsg.child_relid;

 if (!VAR_1->is_dedicated_interrupt) {

  FUNC_1(VAR_2 & 31,
   (unsigned long *)VAR_0.send_int_page +
   (VAR_2 >> 5));
 }

 return FUNC_0(VAR_1->sig_event);
}
