
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int suspendq; int in_process; } ;
struct raid_set {TYPE_1__ io; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct raid_set*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct raid_set *VAR_0)
{

 if (FUNC_1(&VAR_0->io.in_process))
  FUNC_3(&VAR_0->io.suspendq);
 else
  FUNC_0(FUNC_2(VAR_0) < 0);
}
