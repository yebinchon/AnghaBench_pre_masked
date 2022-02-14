
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int msgtype; } ;
struct vmbus_channel_close_channel {int child_relid; TYPE_2__ header; } ;
struct TYPE_6__ {int child_relid; } ;
struct TYPE_4__ {struct vmbus_channel_close_channel msg; } ;
struct vmbus_channel {int ringbuffer_pagecount; scalar_t__ ringbuffer_pages; scalar_t__ ringbuffer_gpadlhandle; TYPE_3__ offermsg; TYPE_1__ close_msg; int inbound_lock; int * onchannel_callback; int * sc_creation_callback; int state; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct vmbus_channel_close_channel*,int) ;
 int FUNC_6 (struct vmbus_channel*,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct vmbus_channel *VAR_3)
{
 struct vmbus_channel_close_channel *VAR_4;
 int VAR_5;
 unsigned long VAR_6;

 VAR_3->state = VAR_1;
 VAR_3->sc_creation_callback = ((void*)0);

 FUNC_3(&VAR_3->inbound_lock, VAR_6);
 VAR_3->onchannel_callback = ((void*)0);
 FUNC_4(&VAR_3->inbound_lock, VAR_6);



 VAR_4 = &VAR_3->close_msg.msg;

 VAR_4->header.msgtype = VAR_0;
 VAR_4->child_relid = VAR_3->offermsg.child_relid;

 VAR_5 = FUNC_5(VAR_4, sizeof(struct vmbus_channel_close_channel));

 FUNC_0(VAR_5 != 0);

 if (VAR_3->ringbuffer_gpadlhandle)
  FUNC_6(VAR_3,
       VAR_3->ringbuffer_gpadlhandle);

 FUNC_1((unsigned long)VAR_3->ringbuffer_pages,
  FUNC_2(VAR_3->ringbuffer_pagecount * VAR_2));


}
