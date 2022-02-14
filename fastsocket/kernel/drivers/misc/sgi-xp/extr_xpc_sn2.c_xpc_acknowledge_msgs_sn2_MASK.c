
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
struct xpc_msg_sn2 {int flags; } ;
struct TYPE_5__ {int get; } ;
struct xpc_channel_sn2 {TYPE_3__* local_GP; scalar_t__ remote_msgqueue; TYPE_2__ w_local_GP; } ;
struct TYPE_4__ {struct xpc_channel_sn2 sn2; } ;
struct xpc_channel {int remote_nentries; int entry_size; int number; int partid; TYPE_1__ sn; } ;
typedef int s64 ;
struct TYPE_6__ {int get; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int*,int,int) ;
 int FUNC_2 (int ,char*,int,int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct xpc_channel*) ;

__attribute__((used)) static void
FUNC_4(struct xpc_channel *VAR_3, s64 VAR_4, u8 VAR_5)
{
 struct xpc_channel_sn2 *VAR_6 = &VAR_3->sn.sn2;
 struct xpc_msg_sn2 *VAR_7;
 s64 VAR_8 = VAR_4 + 1;
 int VAR_9 = 0;

 while (1) {

  while (1) {
   if (VAR_8 == VAR_6->w_local_GP.get)
    break;

   VAR_7 = (struct xpc_msg_sn2 *)((u64)VAR_6->
           remote_msgqueue + (VAR_8 %
           VAR_3->remote_nentries) *
           VAR_3->entry_size);

   if (!(VAR_7->flags & VAR_0))
    break;

   VAR_5 |= VAR_7->flags;
   VAR_8++;
  }

  if (VAR_8 == VAR_4) {

   break;
  }

  if (FUNC_1(&VAR_6->local_GP->get, VAR_4, VAR_8) !=
      VAR_4) {

   FUNC_0(VAR_6->local_GP->get <= VAR_4);
   break;
  }



  FUNC_2(VAR_2, "local_GP->get changed to %lld, partid=%d, "
   "channel=%d\n", VAR_8, VAR_3->partid, VAR_3->number);

  VAR_9 = (VAR_5 & VAR_1);






  VAR_4 = VAR_8;
 }

 if (VAR_9)
  FUNC_3(VAR_3);
}
