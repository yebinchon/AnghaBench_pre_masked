
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xpc_channel_uv {int * cached_notify_gru_mq_desc; } ;
struct TYPE_2__ {struct xpc_channel_uv uv; } ;
struct xpc_channel {TYPE_1__ sn; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static enum xp_retval
FUNC_2(struct xpc_channel *VAR_0,
          unsigned long VAR_1)
{
 struct xpc_channel_uv *VAR_2 = &VAR_0->sn.uv;

 FUNC_0(VAR_2->cached_notify_gru_mq_desc == ((void*)0));
 return FUNC_1(VAR_2->cached_notify_gru_mq_desc,
            VAR_1);
}
