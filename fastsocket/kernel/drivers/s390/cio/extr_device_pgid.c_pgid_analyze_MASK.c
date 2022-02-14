
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {scalar_t__ state2; } ;
struct TYPE_7__ {TYPE_2__ ps; } ;
struct pgid {TYPE_3__ inf; } ;
struct ccw_device {TYPE_1__* private; } ;
struct TYPE_8__ {struct pgid global_pgid; } ;
struct TYPE_5__ {int pgid_valid_mask; struct pgid* pgid; } ;


 scalar_t__ VAR_0 ;
 TYPE_4__** VAR_1 ;
 scalar_t__ FUNC_0 (struct pgid*,struct pgid*) ;
 scalar_t__ FUNC_1 (struct pgid*) ;

__attribute__((used)) static void FUNC_2(struct ccw_device *VAR_2, struct pgid **VAR_3,
    int *VAR_4, int *VAR_5, u8 *VAR_6)
{
 struct pgid *VAR_7 = &VAR_2->private->pgid[0];
 struct pgid *VAR_8 = ((void*)0);
 int VAR_9;
 int VAR_10;

 *VAR_4 = 0;
 *VAR_5 = 0;
 *VAR_6 = 0;
 for (VAR_10 = 0, VAR_9 = 0x80; VAR_10 < 8; VAR_10++, VAR_7++, VAR_9 >>= 1) {
  if ((VAR_2->private->pgid_valid_mask & VAR_9) == 0)
   continue;
  if (VAR_7->inf.ps.state2 == VAR_0)
   *VAR_5 = 1;
  if (FUNC_1(VAR_7)) {
   *VAR_6 |= VAR_9;
   continue;
  }
  if (!VAR_8) {
   VAR_8 = VAR_7;
   continue;
  }
  if (FUNC_0(VAR_7, VAR_8) != 0)
   *VAR_4 = 1;
 }
 if (!VAR_8)
  VAR_8 = &VAR_1[0]->global_pgid;
 *VAR_3 = VAR_8;
}
