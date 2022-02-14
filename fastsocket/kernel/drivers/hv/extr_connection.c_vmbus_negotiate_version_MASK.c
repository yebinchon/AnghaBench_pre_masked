
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ version_supported; } ;
struct TYPE_7__ {TYPE_2__ version_response; } ;
struct vmbus_channel_msginfo {TYPE_3__ response; int msglistentry; int waitevent; scalar_t__ msg; } ;
struct TYPE_5__ {int msgtype; } ;
struct vmbus_channel_initiate_contact {void* monitor_page2; void* monitor_page1; void* interrupt_page; int vmbus_version_requested; TYPE_1__ header; } ;
typedef int __u32 ;
struct TYPE_8__ {void* int_page; void* monitor_pages; int conn_state; int channelmsg_lock; int chn_msg_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 void* FUNC_5 (void*) ;
 TYPE_4__ VAR_6 ;
 int FUNC_6 (struct vmbus_channel_initiate_contact*,int) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static int FUNC_8(struct vmbus_channel_msginfo *VAR_7,
     __u32 VAR_8)
{
 int VAR_9 = 0;
 struct vmbus_channel_initiate_contact *VAR_10;
 unsigned long VAR_11;
 int VAR_12;

 FUNC_0(&VAR_7->waitevent);

 VAR_10 = (struct vmbus_channel_initiate_contact *)VAR_7->msg;

 VAR_10->header.msgtype = VAR_0;
 VAR_10->vmbus_version_requested = VAR_8;
 VAR_10->interrupt_page = FUNC_5(VAR_6.int_page);
 VAR_10->monitor_page1 = FUNC_5(VAR_6.monitor_pages);
 VAR_10->monitor_page2 = FUNC_5(
   (void *)((unsigned long)VAR_6.monitor_pages +
     VAR_5));





 FUNC_3(&VAR_6.channelmsg_lock, VAR_11);
 FUNC_1(&VAR_7->msglistentry,
        &VAR_6.chn_msg_list);

 FUNC_4(&VAR_6.channelmsg_lock, VAR_11);

 VAR_9 = FUNC_6(VAR_10,
          sizeof(struct vmbus_channel_initiate_contact));
 if (VAR_9 != 0) {
  FUNC_3(&VAR_6.channelmsg_lock, VAR_11);
  FUNC_2(&VAR_7->msglistentry);
  FUNC_4(&VAR_6.channelmsg_lock,
     VAR_11);
  return VAR_9;
 }


 VAR_12 = FUNC_7(&VAR_7->waitevent, 5*VAR_4);
 if (VAR_12 == 0) {
  FUNC_3(&VAR_6.channelmsg_lock,
    VAR_11);
  FUNC_2(&VAR_7->msglistentry);
  FUNC_4(&VAR_6.channelmsg_lock,
     VAR_11);
  return -VAR_3;
 }

 FUNC_3(&VAR_6.channelmsg_lock, VAR_11);
 FUNC_2(&VAR_7->msglistentry);
 FUNC_4(&VAR_6.channelmsg_lock, VAR_11);


 if (VAR_7->response.version_response.version_supported) {
  VAR_6.conn_state = VAR_1;
 } else {
  return -VAR_2;
 }

 return VAR_9;
}
