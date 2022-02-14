
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long u64 ;
typedef unsigned long u32 ;
struct xpc_partition {int dummy; } ;
struct xpc_msg_sn2 {int dummy; } ;
struct TYPE_4__ {unsigned long put; } ;
struct xpc_channel_sn2 {unsigned long next_msg_to_pull; unsigned long remote_msgqueue_pa; scalar_t__ remote_msgqueue; int msg_to_pull_mutex; TYPE_2__ w_remote_GP; } ;
struct TYPE_3__ {struct xpc_channel_sn2 sn2; } ;
struct xpc_channel {size_t partid; unsigned long remote_nentries; unsigned long entry_size; int number; TYPE_1__ sn; } ;
typedef unsigned long s64 ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct xpc_partition*,int) ;
 int FUNC_2 (int ,char*,unsigned long,unsigned long,size_t,int ,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 struct xpc_partition* VAR_2 ;
 int FUNC_5 (struct xpc_partition*,struct xpc_msg_sn2*,unsigned long,unsigned long) ;

__attribute__((used)) static struct xpc_msg_sn2 *
FUNC_6(struct xpc_channel *VAR_3, s64 VAR_4)
{
 struct xpc_partition *VAR_5 = &VAR_2[VAR_3->partid];
 struct xpc_channel_sn2 *VAR_6 = &VAR_3->sn.sn2;
 unsigned long VAR_7;
 struct xpc_msg_sn2 *VAR_8;
 u32 VAR_9;
 u32 VAR_10;
 u64 VAR_11;
 enum xp_retval VAR_12;

 if (FUNC_3(&VAR_6->msg_to_pull_mutex) != 0) {

  return ((void*)0);
 }

 while (VAR_4 >= VAR_6->next_msg_to_pull) {



  VAR_9 = VAR_6->next_msg_to_pull % VAR_3->remote_nentries;

  FUNC_0(VAR_6->next_msg_to_pull >= VAR_6->w_remote_GP.put);
  VAR_10 = VAR_6->w_remote_GP.put - VAR_6->next_msg_to_pull;
  if (VAR_9 + VAR_10 > VAR_3->remote_nentries) {

   VAR_10 = VAR_3->remote_nentries - VAR_9;
  }

  VAR_11 = VAR_9 * VAR_3->entry_size;
  VAR_8 = (struct xpc_msg_sn2 *)((u64)VAR_6->remote_msgqueue +
      VAR_11);
  VAR_7 = VAR_6->remote_msgqueue_pa + VAR_11;

  VAR_12 = FUNC_5(VAR_5, VAR_8, VAR_7,
           VAR_10 * VAR_3->entry_size);
  if (VAR_12 != VAR_0) {

   FUNC_2(VAR_1, "failed to pull %d msgs starting with"
    " msg %lld from partition %d, channel=%d, "
    "ret=%d\n", VAR_10, VAR_6->next_msg_to_pull,
    VAR_3->partid, VAR_3->number, VAR_12);

   FUNC_1(VAR_5, VAR_12);

   FUNC_4(&VAR_6->msg_to_pull_mutex);
   return ((void*)0);
  }

  VAR_6->next_msg_to_pull += VAR_10;
 }

 FUNC_4(&VAR_6->msg_to_pull_mutex);


 VAR_11 = (VAR_4 % VAR_3->remote_nentries) * VAR_3->entry_size;
 VAR_8 = (struct xpc_msg_sn2 *)((u64)VAR_6->remote_msgqueue + VAR_11);

 return VAR_8;
}
