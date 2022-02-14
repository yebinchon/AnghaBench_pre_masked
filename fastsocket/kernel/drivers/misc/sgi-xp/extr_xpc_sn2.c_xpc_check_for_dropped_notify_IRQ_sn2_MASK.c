
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ expires; } ;
struct xpc_partition_sn2 {TYPE_2__ dropped_notify_IRQ_timer; } ;
struct TYPE_3__ {struct xpc_partition_sn2 sn2; } ;
struct xpc_partition {TYPE_1__ sn; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct xpc_partition*) ;
 int FUNC_2 (struct xpc_partition*) ;
 scalar_t__ FUNC_3 (struct xpc_partition*) ;

__attribute__((used)) static void
FUNC_4(struct xpc_partition *VAR_2)
{
 struct xpc_partition_sn2 *VAR_3 = &VAR_2->sn.sn2;

 if (FUNC_3(VAR_2)) {
  FUNC_1(VAR_2);

  VAR_3->dropped_notify_IRQ_timer.expires = VAR_1 +
      VAR_0;
  FUNC_0(&VAR_3->dropped_notify_IRQ_timer);
  FUNC_2(VAR_2);
 }
}
