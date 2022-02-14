
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct xpc_msg_sn2 {int flags; scalar_t__ number; } ;
struct TYPE_6__ {scalar_t__ put; } ;
struct TYPE_5__ {int put; } ;
struct xpc_channel_sn2 {scalar_t__ remote_msgqueue; TYPE_3__ remote_GP; TYPE_2__ w_remote_GP; } ;
struct TYPE_4__ {struct xpc_channel_sn2 sn2; } ;
struct xpc_channel {scalar_t__ remote_nentries; scalar_t__ entry_size; TYPE_1__ sn; } ;
typedef scalar_t__ s64 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_2(struct xpc_channel *VAR_2)
{
 struct xpc_channel_sn2 *VAR_3 = &VAR_2->sn.sn2;
 struct xpc_msg_sn2 *VAR_4;
 s64 VAR_5, VAR_6 = VAR_2->remote_nentries;


 if (VAR_3->remote_GP.put < VAR_6)
  return;

 VAR_5 = FUNC_1(VAR_3->w_remote_GP.put, VAR_6);
 do {
  VAR_4 = (struct xpc_msg_sn2 *)((u64)VAR_3->remote_msgqueue +
          (VAR_5 % VAR_6) *
          VAR_2->entry_size);
  FUNC_0(!(VAR_4->flags & VAR_1));
  FUNC_0(!(VAR_4->flags & VAR_0));
  FUNC_0(VAR_4->number != VAR_5 - VAR_6);
  VAR_4->flags = 0;
 } while (++VAR_5 < VAR_3->remote_GP.put);
}
