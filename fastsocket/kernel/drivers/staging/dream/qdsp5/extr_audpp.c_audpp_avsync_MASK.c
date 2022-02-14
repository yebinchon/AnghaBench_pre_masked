
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int cmd ;
struct TYPE_4__ {int object_number; unsigned int interrupt_interval_lsw; unsigned int interrupt_interval_msw; int cmd_id; } ;
typedef TYPE_1__ audpp_cmd_avsync ;
struct TYPE_5__ {int avsync_mask; int* avsync; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 TYPE_2__ VAR_1 ;

void FUNC_4(int VAR_2, unsigned VAR_3)
{
 unsigned long VAR_4;
 audpp_cmd_avsync VAR_5;

 if (FUNC_0(VAR_2))
  return;

 FUNC_3(VAR_4);
 if (VAR_3)
  VAR_1.avsync_mask |= (1 << VAR_2);
 else
  VAR_1.avsync_mask &= (~(1 << VAR_2));
 VAR_1.avsync[0] &= VAR_1.avsync_mask;
 FUNC_2(VAR_4);

 VAR_5.cmd_id = VAR_0;
 VAR_5.object_number = VAR_2;
 VAR_5.interrupt_interval_lsw = VAR_3;
 VAR_5.interrupt_interval_msw = VAR_3 >> 16;
 FUNC_1(&VAR_5, sizeof(VAR_5));
}
