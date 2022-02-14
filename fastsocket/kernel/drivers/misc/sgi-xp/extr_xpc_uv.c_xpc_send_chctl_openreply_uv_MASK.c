
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xpc_channel {int remote_nentries; int local_nentries; int number; } ;
struct xpc_activate_mq_msg_chctl_openreply_uv {int notify_gru_mq_desc_gpa; int remote_nentries; int local_nentries; int ch_number; } ;
typedef int msg ;
struct TYPE_2__ {int gru_mq_desc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct xpc_channel*,unsigned long*,struct xpc_activate_mq_msg_chctl_openreply_uv*,int,int ) ;

__attribute__((used)) static void
FUNC_2(struct xpc_channel *VAR_2, unsigned long *VAR_3)
{
 struct xpc_activate_mq_msg_chctl_openreply_uv VAR_4;

 VAR_4.ch_number = VAR_2->number;
 VAR_4.local_nentries = VAR_2->local_nentries;
 VAR_4.remote_nentries = VAR_2->remote_nentries;
 VAR_4.notify_gru_mq_desc_gpa = FUNC_0(VAR_1->gru_mq_desc);
 FUNC_1(VAR_2, VAR_3, &VAR_4, sizeof(VAR_4),
        VAR_0);
}
