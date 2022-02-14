
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct xpc_msg_sn2 {int flags; } ;
struct TYPE_5__ {int put; } ;
struct xpc_channel_sn2 {TYPE_3__* local_GP; scalar_t__ local_msgqueue; TYPE_2__ w_local_GP; } ;
struct TYPE_4__ {struct xpc_channel_sn2 sn2; } ;
struct xpc_channel {int local_nentries; int entry_size; int number; int partid; TYPE_1__ sn; } ;
typedef int s64 ;
struct TYPE_6__ {int put; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int*,int,int) ;
 int FUNC_2 (int ,char*,int,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct xpc_channel*) ;

__attribute__((used)) static void
FUNC_4(struct xpc_channel *VAR_2, s64 VAR_3)
{
 struct xpc_channel_sn2 *VAR_4 = &VAR_2->sn.sn2;
 struct xpc_msg_sn2 *VAR_5;
 s64 VAR_6 = VAR_3 + 1;
 int VAR_7 = 0;

 while (1) {

  while (1) {
   if (VAR_6 == VAR_4->w_local_GP.put)
    break;

   VAR_5 = (struct xpc_msg_sn2 *)((u64)VAR_4->
           local_msgqueue + (VAR_6 %
           VAR_2->local_nentries) *
           VAR_2->entry_size);

   if (!(VAR_5->flags & VAR_0))
    break;

   VAR_6++;
  }

  if (VAR_6 == VAR_3) {

   break;
  }

  if (FUNC_1(&VAR_4->local_GP->put, VAR_3, VAR_6) !=
      VAR_3) {

   FUNC_0(VAR_4->local_GP->put < VAR_3);
   break;
  }



  FUNC_2(VAR_1, "local_GP->put changed to %lld, partid=%d, "
   "channel=%d\n", VAR_6, VAR_2->partid, VAR_2->number);

  VAR_7 = 1;






  VAR_3 = VAR_6;
 }

 if (VAR_7)
  FUNC_3(VAR_2);
}
