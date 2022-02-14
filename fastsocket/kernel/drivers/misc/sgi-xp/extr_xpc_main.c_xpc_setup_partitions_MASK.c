
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_4__ {unsigned long data; int function; } ;
struct xpc_partition {int references; int teardown_wq; int setup_state; TYPE_2__ disengage_timer; int act_state; int act_lock; scalar_t__ activate_IRQ_rcvd; } ;
struct TYPE_3__ {int (* setup_partitions ) () ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct xpc_partition*,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *) ;
 struct xpc_partition* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 struct xpc_partition* VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_10(void)
{
 short VAR_9;
 struct xpc_partition *VAR_10;

 VAR_7 = FUNC_7(sizeof(struct xpc_partition) *
     VAR_4, VAR_1);
 if (VAR_7 == ((void*)0)) {
  FUNC_4(VAR_6, "can't get memory for partition structure\n");
  return -VAR_0;
 }
 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  VAR_10 = &VAR_7[VAR_9];

  FUNC_0((u64)VAR_10 != FUNC_1((u64)VAR_10));

  VAR_10->activate_IRQ_rcvd = 0;
  FUNC_8(&VAR_10->act_lock);
  VAR_10->act_state = VAR_2;
  FUNC_2(VAR_10, 0, 0);

  FUNC_5(&VAR_10->disengage_timer);
  VAR_10->disengage_timer.function =
      VAR_8;
  VAR_10->disengage_timer.data = (unsigned long)VAR_10;

  VAR_10->setup_state = VAR_3;
  FUNC_6(&VAR_10->teardown_wq);
  FUNC_3(&VAR_10->references, 0);
 }

 return VAR_5.setup_partitions();
}
