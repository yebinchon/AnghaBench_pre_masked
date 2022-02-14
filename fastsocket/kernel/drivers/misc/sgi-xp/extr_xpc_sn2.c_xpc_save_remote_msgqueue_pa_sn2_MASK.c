
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long remote_msgqueue_pa; } ;
struct TYPE_4__ {TYPE_1__ sn2; } ;
struct xpc_channel {TYPE_2__ sn; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;


 int VAR_0 ;

__attribute__((used)) static enum xp_retval
FUNC_0(struct xpc_channel *VAR_1,
    unsigned long VAR_2)
{
 VAR_1->sn.sn2.remote_msgqueue_pa = VAR_2;
 return VAR_0;
}
