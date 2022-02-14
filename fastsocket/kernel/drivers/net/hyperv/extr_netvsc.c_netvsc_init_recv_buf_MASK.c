
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ status; int num_sections; int sections; } ;
struct TYPE_8__ {int id; int gpadl_handle; } ;
struct TYPE_10__ {TYPE_3__ send_recv_buf_complete; TYPE_2__ send_recv_buf; } ;
struct TYPE_11__ {TYPE_4__ v1_msg; } ;
struct TYPE_7__ {int msg_type; } ;
struct nvsp_message {TYPE_5__ msg; TYPE_1__ hdr; } ;
struct nvsp_1_receive_buffer_section {int dummy; } ;
struct netvsc_device {scalar_t__ recv_buf_size; int recv_section_cnt; TYPE_6__* recv_section; int channel_init_wait; int recv_buf_gpadl_handle; struct nvsp_message channel_init_pkt; void* recv_buf; struct net_device* ndev; } ;
struct net_device {int dummy; } ;
struct hv_device {int channel; } ;
struct TYPE_12__ {scalar_t__ offset; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (scalar_t__) ;
 struct netvsc_device* FUNC_3 (struct hv_device*) ;
 TYPE_6__* FUNC_4 (int ,int,int) ;
 int FUNC_5 (struct nvsp_message*,int ,int) ;
 int FUNC_6 (struct net_device*,char*,...) ;
 int FUNC_7 (struct netvsc_device*) ;
 int FUNC_8 (int ,void*,scalar_t__,int *) ;
 int FUNC_9 (int ,struct nvsp_message*,int,unsigned long,int ,int ) ;
 int FUNC_10 (int *,int) ;

__attribute__((used)) static int FUNC_11(struct hv_device *VAR_11)
{
 int VAR_12 = 0;
 int VAR_13;
 struct netvsc_device *VAR_14;
 struct nvsp_message *VAR_15;
 struct net_device *VAR_16;

 VAR_14 = FUNC_3(VAR_11);
 if (!VAR_14)
  return -VAR_1;
 VAR_16 = VAR_14->ndev;

 VAR_14->recv_buf =
  (void *)FUNC_1(VAR_3|VAR_10,
    FUNC_2(VAR_14->recv_buf_size));
 if (!VAR_14->recv_buf) {
  FUNC_6(VAR_16, "unable to allocate receive "
   "buffer of size %d\n", VAR_14->recv_buf_size);
  VAR_12 = -VAR_2;
  goto cleanup;
 }






 VAR_12 = FUNC_8(VAR_11->channel, VAR_14->recv_buf,
        VAR_14->recv_buf_size,
        &VAR_14->recv_buf_gpadl_handle);
 if (VAR_12 != 0) {
  FUNC_6(VAR_16,
   "unable to establish receive buffer's gpadl\n");
  goto cleanup;
 }



 VAR_15 = &VAR_14->channel_init_pkt;

 FUNC_5(VAR_15, 0, sizeof(struct nvsp_message));

 VAR_15->hdr.msg_type = VAR_6;
 VAR_15->msg.v1_msg.send_recv_buf.
  gpadl_handle = VAR_14->recv_buf_gpadl_handle;
 VAR_15->msg.v1_msg.
  send_recv_buf.id = VAR_5;


 VAR_12 = FUNC_9(VAR_11->channel, VAR_15,
          sizeof(struct nvsp_message),
          (unsigned long)VAR_15,
          VAR_9,
          VAR_8);
 if (VAR_12 != 0) {
  FUNC_6(VAR_16,
   "unable to send receive buffer's gpadl to netvsp\n");
  goto cleanup;
 }

 VAR_13 = FUNC_10(&VAR_14->channel_init_wait, 5*VAR_4);
 FUNC_0(VAR_13 == 0);



 if (VAR_15->msg.v1_msg.
     send_recv_buf_complete.status != VAR_7) {
  FUNC_6(VAR_16, "Unable to complete receive buffer "
      "initialization with NetVsp - status %d\n",
      VAR_15->msg.v1_msg.
      send_recv_buf_complete.status);
  VAR_12 = -VAR_0;
  goto cleanup;
 }



 VAR_14->recv_section_cnt = VAR_15->msg.
  v1_msg.send_recv_buf_complete.num_sections;

 VAR_14->recv_section = FUNC_4(
  VAR_15->msg.v1_msg.send_recv_buf_complete.sections,
  VAR_14->recv_section_cnt *
  sizeof(struct nvsp_1_receive_buffer_section),
  VAR_3);
 if (VAR_14->recv_section == ((void*)0)) {
  VAR_12 = -VAR_0;
  goto cleanup;
 }





 if (VAR_14->recv_section_cnt != 1 ||
     VAR_14->recv_section->offset != 0) {
  VAR_12 = -VAR_0;
  goto cleanup;
 }

 goto exit;

cleanup:
 FUNC_7(VAR_14);

exit:
 return VAR_12;
}
