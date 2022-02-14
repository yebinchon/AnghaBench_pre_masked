
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xpc_partition {scalar_t__ act_state; } ;
struct TYPE_2__ {int (* any_partition_engaged ) () ;scalar_t__ (* partition_engaged ) (short) ;int (* indicate_partition_disengaged ) (struct xpc_partition*) ;int (* request_partition_deactivation ) (struct xpc_partition*) ;int (* disallow_all_hbs ) () ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (short) ;
 int FUNC_4 (struct xpc_partition*) ;
 int FUNC_5 (struct xpc_partition*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (short) ;
 int FUNC_8 (int) ;
 short VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct xpc_partition* VAR_8 ;

__attribute__((used)) static void
FUNC_9(void)
{
 struct xpc_partition *VAR_9;
 short VAR_10;
 int VAR_11;
 long VAR_12;
 long VAR_13;

 if (FUNC_0(&VAR_4, 0, 1))
  return;


 VAR_6 = 1;

 VAR_3.disallow_all_hbs();

 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  VAR_9 = &VAR_8[VAR_10];

  if (VAR_3.partition_engaged(VAR_10) ||
      VAR_9->act_state != VAR_1) {
   VAR_3.request_partition_deactivation(VAR_9);
   VAR_3.indicate_partition_disengaged(VAR_9);
  }
 }
 VAR_12 = VAR_5 * 1000 * 5;
 VAR_13 = VAR_0 * 1000 * 5;

 while (1) {
  VAR_11 = VAR_3.any_partition_engaged();
  if (!VAR_11) {
   FUNC_1(VAR_7, "all partitions have deactivated\n");
   break;
  }

  if (!VAR_12--) {
   for (VAR_10 = 0; VAR_10 < VAR_2;
        VAR_10++) {
    if (VAR_3.partition_engaged(VAR_10)) {
     FUNC_1(VAR_7, "deactivate from "
       "remote partition %d timed "
       "out\n", VAR_10);
    }
   }
   break;
  }

  if (!VAR_13--) {
   FUNC_1(VAR_7, "waiting for remote partitions to "
     "deactivate, timeout in %ld seconds\n",
     VAR_12 / (1000 * 5));
   VAR_13 = VAR_0 *
       1000 * 5;
  }

  FUNC_8(200);
 }
}
