
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct xpc_notify_sn2 {scalar_t__ type; int key; int (* func ) (int,int ,int ,int ) ;} ;
struct TYPE_4__ {scalar_t__ get; } ;
struct TYPE_5__ {struct xpc_notify_sn2* notify_queue; TYPE_1__ w_remote_GP; } ;
struct TYPE_6__ {TYPE_2__ sn2; } ;
struct xpc_channel {scalar_t__ local_nentries; int number; int partid; int n_to_notify; TYPE_3__ sn; } ;
typedef scalar_t__ s64 ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__*,scalar_t__,int ) ;
 int FUNC_4 (int ,char*,void*,scalar_t__,int ,int ) ;
 int FUNC_5 (int,int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_6(struct xpc_channel *VAR_2, enum xp_retval VAR_3, s64 VAR_4)
{
 struct xpc_notify_sn2 *VAR_5;
 u8 VAR_6;
 s64 VAR_7 = VAR_2->sn.sn2.w_remote_GP.get - 1;

 while (++VAR_7 < VAR_4 && FUNC_2(&VAR_2->n_to_notify) > 0) {

  VAR_5 = &VAR_2->sn.sn2.notify_queue[VAR_7 % VAR_2->local_nentries];







  VAR_6 = VAR_5->type;
  if (VAR_6 == 0 ||
      FUNC_3(&VAR_5->type, VAR_6, 0) != VAR_6) {
   continue;
  }

  FUNC_0(VAR_6 != VAR_0);

  FUNC_1(&VAR_2->n_to_notify);

  if (VAR_5->func != ((void*)0)) {
   FUNC_4(VAR_1, "notify->func() called, notify=0x%p "
    "msg_number=%lld partid=%d channel=%d\n",
    (void *)VAR_5, VAR_7, VAR_2->partid, VAR_2->number);

   VAR_5->func(VAR_3, VAR_2->partid, VAR_2->number,
         VAR_5->key);

   FUNC_4(VAR_1, "notify->func() returned, notify=0x%p"
    " msg_number=%lld partid=%d channel=%d\n",
    (void *)VAR_5, VAR_7, VAR_2->partid, VAR_2->number);
  }
 }
}
