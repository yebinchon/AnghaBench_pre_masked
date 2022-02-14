
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * flags; } ;
struct xpc_partition {int chctl_lock; TYPE_1__ chctl; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct xpc_partition*) ;

__attribute__((used)) static void
FUNC_3(struct xpc_partition *VAR_1, int VAR_2)
{
 unsigned long VAR_3;

 FUNC_0(&VAR_1->chctl_lock, VAR_3);
 VAR_1->chctl.flags[VAR_2] |= VAR_0;
 FUNC_1(&VAR_1->chctl_lock, VAR_3);

 FUNC_2(VAR_1);
}
