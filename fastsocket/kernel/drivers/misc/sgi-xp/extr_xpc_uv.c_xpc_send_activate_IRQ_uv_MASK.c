
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xpc_partition_uv {int flags; int cached_activate_gru_mq_desc_mutex; struct gru_message_queue_desc* cached_activate_gru_mq_desc; int flags_lock; int activate_gru_mq_desc_gpa; } ;
struct TYPE_3__ {struct xpc_partition_uv uv; } ;
struct xpc_partition {int act_state; TYPE_1__ sn; } ;
struct xpc_activate_mq_msghdr_uv {int type; int rp_ts_jiffies; int act_state; int partid; } ;
struct gru_message_queue_desc {int dummy; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;
struct TYPE_4__ {int ts_jiffies; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 struct gru_message_queue_desc* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (struct gru_message_queue_desc*,int ) ;
 TYPE_2__* VAR_6 ;
 int FUNC_8 (struct gru_message_queue_desc*,void*,size_t) ;

__attribute__((used)) static enum xp_retval
FUNC_9(struct xpc_partition *VAR_7, void *VAR_8, size_t VAR_9,
    int VAR_10)
{
 struct xpc_activate_mq_msghdr_uv *VAR_11 = VAR_8;
 struct xpc_partition_uv *VAR_12 = &VAR_7->sn.uv;
 struct gru_message_queue_desc *VAR_13;
 unsigned long VAR_14;
 enum xp_retval VAR_15;

 FUNC_0(VAR_9 > VAR_1);

 VAR_11->type = VAR_10;
 VAR_11->partid = VAR_5;
 VAR_11->act_state = VAR_7->act_state;
 VAR_11->rp_ts_jiffies = VAR_6->ts_jiffies;

 FUNC_2(&VAR_12->cached_activate_gru_mq_desc_mutex);
again:
 if (!(VAR_12->flags & VAR_2)) {
  VAR_13 = VAR_12->cached_activate_gru_mq_desc;
  if (VAR_13 == ((void*)0)) {
   VAR_13 = FUNC_1(sizeof(struct
           gru_message_queue_desc),
           VAR_0);
   if (VAR_13 == ((void*)0)) {
    VAR_15 = VAR_3;
    goto done;
   }
   VAR_12->cached_activate_gru_mq_desc = VAR_13;
  }

  VAR_15 = FUNC_7(VAR_13,
            VAR_12->
            activate_gru_mq_desc_gpa);
  if (VAR_15 != VAR_4)
   goto done;

  FUNC_5(&VAR_12->flags_lock, VAR_14);
  VAR_12->flags |= VAR_2;
  FUNC_6(&VAR_12->flags_lock, VAR_14);
 }


 VAR_15 = FUNC_8(VAR_12->cached_activate_gru_mq_desc, VAR_8,
          VAR_9);
 if (VAR_15 != VAR_4) {
  FUNC_4();
  if (!(VAR_12->flags & VAR_2))
   goto again;
 }
done:
 FUNC_3(&VAR_12->cached_activate_gru_mq_desc_mutex);
 return VAR_15;
}
