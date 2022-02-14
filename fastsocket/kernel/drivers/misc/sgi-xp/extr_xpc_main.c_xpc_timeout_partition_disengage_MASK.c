
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xpc_partition {scalar_t__ disengage_timeout; } ;
struct TYPE_2__ {int (* partition_engaged ) (int ) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct xpc_partition*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 TYPE_1__ VAR_0 ;
 int FUNC_4 (struct xpc_partition*) ;

__attribute__((used)) static void
FUNC_5(unsigned long VAR_1)
{
 struct xpc_partition *VAR_2 = (struct xpc_partition *)VAR_1;

 FUNC_0(FUNC_3(VAR_2->disengage_timeout));

 (void)FUNC_4(VAR_2);

 FUNC_0(VAR_2->disengage_timeout != 0);
 FUNC_0(VAR_0.partition_engaged(FUNC_1(VAR_2)));
}
