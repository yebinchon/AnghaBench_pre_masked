
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct xpc_msg_sn2 {scalar_t__ flags; int number; } ;
struct TYPE_6__ {int put; } ;
struct TYPE_5__ {int get; } ;
struct xpc_channel_sn2 {scalar_t__ local_msgqueue; TYPE_3__ w_local_GP; TYPE_2__ w_remote_GP; } ;
struct TYPE_4__ {struct xpc_channel_sn2 sn2; } ;
struct xpc_channel {int local_nentries; int entry_size; int number; int partid; TYPE_1__ sn; } ;
typedef int s64 ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int*,int,int) ;
 int FUNC_2 (int ,char*,int,void*,int,int ,int ) ;
 int FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct xpc_channel*) ;
 int VAR_5 ;
 int FUNC_5 (struct xpc_channel*) ;

__attribute__((used)) static enum xp_retval
FUNC_6(struct xpc_channel *VAR_6, u32 VAR_7,
       struct xpc_msg_sn2 **VAR_8)
{
 struct xpc_channel_sn2 *VAR_9 = &VAR_6->sn.sn2;
 struct xpc_msg_sn2 *VAR_10;
 enum xp_retval VAR_11;
 s64 VAR_12;






 VAR_11 = VAR_4;

 while (1) {

  VAR_12 = VAR_9->w_local_GP.put;
  FUNC_3();
  if (VAR_12 - VAR_9->w_remote_GP.get < VAR_6->local_nentries) {







   if (FUNC_1(&VAR_9->w_local_GP.put, VAR_12, VAR_12 + 1) ==
       VAR_12) {

    break;
   }
   continue;
  }
  if (VAR_11 == VAR_4)
   FUNC_5(VAR_6);

  if (VAR_7 & VAR_0)
   return VAR_2;

  VAR_11 = FUNC_4(VAR_6);
  if (VAR_11 != VAR_1 && VAR_11 != VAR_4)
   return VAR_11;
 }


 VAR_10 = (struct xpc_msg_sn2 *)((u64)VAR_9->local_msgqueue +
         (VAR_12 % VAR_6->local_nentries) *
         VAR_6->entry_size);

 FUNC_0(VAR_10->flags != 0);
 VAR_10->number = VAR_12;

 FUNC_2(VAR_5, "w_local_GP.put changed to %lld; msg=0x%p, "
  "msg_number=%lld, partid=%d, channel=%d\n", VAR_12 + 1,
  (void *)VAR_10, VAR_10->number, VAR_6->partid, VAR_6->number);

 *VAR_8 = VAR_10;
 return VAR_3;
}
