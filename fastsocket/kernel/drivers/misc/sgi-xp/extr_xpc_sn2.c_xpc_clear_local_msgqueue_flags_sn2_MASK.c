
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct xpc_msg_sn2 {int flags; } ;
struct TYPE_6__ {scalar_t__ get; } ;
struct TYPE_5__ {scalar_t__ get; } ;
struct xpc_channel_sn2 {scalar_t__ local_msgqueue; TYPE_3__ remote_GP; TYPE_2__ w_remote_GP; } ;
struct TYPE_4__ {struct xpc_channel_sn2 sn2; } ;
struct xpc_channel {scalar_t__ local_nentries; scalar_t__ entry_size; TYPE_1__ sn; } ;
typedef scalar_t__ s64 ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static inline void
FUNC_1(struct xpc_channel *VAR_1)
{
 struct xpc_channel_sn2 *VAR_2 = &VAR_1->sn.sn2;
 struct xpc_msg_sn2 *VAR_3;
 s64 VAR_4;

 VAR_4 = VAR_2->w_remote_GP.get;
 do {
  VAR_3 = (struct xpc_msg_sn2 *)((u64)VAR_2->local_msgqueue +
          (VAR_4 % VAR_1->local_nentries) *
          VAR_1->entry_size);
  FUNC_0(!(VAR_3->flags & VAR_0));
  VAR_3->flags = 0;
 } while (++VAR_4 < VAR_2->remote_GP.get);
}
