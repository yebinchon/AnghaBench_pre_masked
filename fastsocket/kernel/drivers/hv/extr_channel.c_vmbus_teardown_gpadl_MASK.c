
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct vmbus_channel_msginfo {int msglistentry; int waitevent; scalar_t__ msg; } ;
struct TYPE_4__ {int msgtype; } ;
struct vmbus_channel_gpadl_teardown {int gpadl; int child_relid; TYPE_1__ header; } ;
struct TYPE_5__ {int child_relid; } ;
struct vmbus_channel {TYPE_2__ offermsg; } ;
struct TYPE_6__ {int channelmsg_lock; int chn_msg_list; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vmbus_channel_msginfo*) ;
 struct vmbus_channel_msginfo* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 TYPE_3__ VAR_4 ;
 int FUNC_8 (struct vmbus_channel_gpadl_teardown*,int) ;
 int FUNC_9 (int *,int) ;

int FUNC_10(struct vmbus_channel *VAR_5, u32 VAR_6)
{
 struct vmbus_channel_gpadl_teardown *VAR_7;
 struct vmbus_channel_msginfo *VAR_8;
 unsigned long VAR_9;
 int VAR_10, VAR_11;

 VAR_8 = FUNC_3(sizeof(*VAR_8) +
         sizeof(struct vmbus_channel_gpadl_teardown), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 FUNC_1(&VAR_8->waitevent);

 VAR_7 = (struct vmbus_channel_gpadl_teardown *)VAR_8->msg;

 VAR_7->header.msgtype = VAR_0;
 VAR_7->child_relid = VAR_5->offermsg.child_relid;
 VAR_7->gpadl = VAR_6;

 FUNC_6(&VAR_4.channelmsg_lock, VAR_9);
 FUNC_4(&VAR_8->msglistentry,
        &VAR_4.chn_msg_list);
 FUNC_7(&VAR_4.channelmsg_lock, VAR_9);
 VAR_10 = FUNC_8(VAR_7,
          sizeof(struct vmbus_channel_gpadl_teardown));

 FUNC_0(VAR_10 != 0);
 VAR_11 = FUNC_9(&VAR_8->waitevent, 5*VAR_3);
 FUNC_0(VAR_11 == 0);


 FUNC_6(&VAR_4.channelmsg_lock, VAR_9);
 FUNC_5(&VAR_8->msglistentry);
 FUNC_7(&VAR_4.channelmsg_lock, VAR_9);

 FUNC_2(VAR_8);
 return VAR_10;
}
