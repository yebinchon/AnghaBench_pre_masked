
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sbp2_lu {int cmd_orb_completed; TYPE_4__* ud; } ;
struct sbp2_command_info {int list; TYPE_5__* Current_SCpnt; } ;
struct TYPE_11__ {int sc_data_direction; } ;
struct TYPE_10__ {TYPE_3__* ne; } ;
struct TYPE_9__ {TYPE_2__* host; } ;
struct TYPE_7__ {int parent; } ;
struct TYPE_8__ {TYPE_1__ device; } ;


 int FUNC_0 (int ,int ,scalar_t__,int ) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_4(struct sbp2_lu *VAR_0,
         struct sbp2_command_info *VAR_1)
{
 if (FUNC_2(VAR_1->Current_SCpnt))
  FUNC_0(VAR_0->ud->ne->host->device.parent,
        FUNC_3(VAR_1->Current_SCpnt),
        FUNC_2(VAR_1->Current_SCpnt),
        VAR_1->Current_SCpnt->sc_data_direction);
 FUNC_1(&VAR_1->list, &VAR_0->cmd_orb_completed);
}
