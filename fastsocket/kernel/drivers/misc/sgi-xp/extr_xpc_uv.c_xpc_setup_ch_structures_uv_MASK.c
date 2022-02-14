
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xpc_partition {int nchannels; TYPE_2__* channels; } ;
struct xpc_channel_uv {int recv_msg_list; int msg_slot_free_list; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;
struct TYPE_3__ {struct xpc_channel_uv uv; } ;
struct TYPE_4__ {TYPE_1__ sn; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static enum xp_retval
FUNC_1(struct xpc_partition *VAR_1)
{
 struct xpc_channel_uv *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->nchannels; VAR_3++) {
  VAR_2 = &VAR_1->channels[VAR_3].sn.uv;

  FUNC_0(&VAR_2->msg_slot_free_list);
  FUNC_0(&VAR_2->recv_msg_list);
 }

 return VAR_0;
}
