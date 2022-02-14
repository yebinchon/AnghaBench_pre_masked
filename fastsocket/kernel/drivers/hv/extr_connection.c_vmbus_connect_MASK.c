
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmbus_channel_msginfo {int dummy; } ;
struct vmbus_channel_initiate_contact {int dummy; } ;
typedef int __u32 ;
struct TYPE_2__ {int * monitor_pages; int * int_page; scalar_t__ work_queue; int conn_state; void* send_int_page; int * recv_int_page; int channel_lock; int chn_list; int channelmsg_lock; int chn_msg_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned long,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (struct vmbus_channel_msginfo*) ;
 struct vmbus_channel_msginfo* FUNC_6 (int,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int ,int,int,int ,int,int,int,int) ;
 int FUNC_9 (int *) ;
 TYPE_1__ VAR_12 ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct vmbus_channel_msginfo*,int) ;
 int VAR_13 ;

int FUNC_12(void)
{
 int VAR_14 = 0;
 struct vmbus_channel_msginfo *VAR_15 = ((void*)0);
 __u32 VAR_16;


 VAR_12.conn_state = VAR_0;
 VAR_12.work_queue = FUNC_2("hv_vmbus_con");
 if (!VAR_12.work_queue) {
  VAR_14 = -VAR_2;
  goto cleanup;
 }

 FUNC_0(&VAR_12.chn_msg_list);
 FUNC_9(&VAR_12.channelmsg_lock);

 FUNC_0(&VAR_12.chn_list);
 FUNC_9(&VAR_12.channel_lock);





 VAR_12.int_page =
 (void *)FUNC_1(VAR_3|VAR_7, 0);
 if (VAR_12.int_page == ((void*)0)) {
  VAR_14 = -VAR_2;
  goto cleanup;
 }

 VAR_12.recv_int_page = VAR_12.int_page;
 VAR_12.send_int_page =
  (void *)((unsigned long)VAR_12.int_page +
   (VAR_4 >> 1));





 VAR_12.monitor_pages =
 (void *)FUNC_1((VAR_3|VAR_7), 1);
 if (VAR_12.monitor_pages == ((void*)0)) {
  VAR_14 = -VAR_2;
  goto cleanup;
 }

 VAR_15 = FUNC_6(sizeof(*VAR_15) +
     sizeof(struct vmbus_channel_initiate_contact),
     VAR_3);
 if (VAR_15 == ((void*)0)) {
  VAR_14 = -VAR_2;
  goto cleanup;
 }
 VAR_16 = VAR_5;

 do {
  VAR_14 = FUNC_11(VAR_15, VAR_16);
  if (VAR_14 == 0)
   break;

  VAR_16 = FUNC_10(VAR_16);
 } while (VAR_16 != VAR_6);

 if (VAR_16 == VAR_6)
  goto cleanup;

 VAR_13 = VAR_16;
 FUNC_8("Hyper-V Host Build:%d-%d.%d-%d-%d.%d; Vmbus version:%d.%d\n",
      VAR_8, VAR_9 >> 16,
      VAR_9 & 0xFFFF, VAR_10,
      VAR_11 >> 24, VAR_11 & 0xFFFFFF,
      VAR_16 >> 16, VAR_16 & 0xFFFF);

 FUNC_5(VAR_15);
 return 0;

cleanup:
 FUNC_7("Unable to connect to host\n");
 VAR_12.conn_state = VAR_1;

 if (VAR_12.work_queue)
  FUNC_3(VAR_12.work_queue);

 if (VAR_12.int_page) {
  FUNC_4((unsigned long)VAR_12.int_page, 0);
  VAR_12.int_page = ((void*)0);
 }

 if (VAR_12.monitor_pages) {
  FUNC_4((unsigned long)VAR_12.monitor_pages, 1);
  VAR_12.monitor_pages = ((void*)0);
 }

 FUNC_5(VAR_15);

 return VAR_14;
}
