
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int id; } ;
struct TYPE_8__ {TYPE_2__ revoke_recv_buf; } ;
struct TYPE_9__ {TYPE_3__ v1_msg; } ;
struct TYPE_6__ {int msg_type; } ;
struct nvsp_message {TYPE_4__ msg; TYPE_1__ hdr; } ;
struct netvsc_device {int * recv_section; scalar_t__ recv_section_cnt; int * recv_buf; int recv_buf_size; scalar_t__ recv_buf_gpadl_handle; TYPE_5__* dev; struct nvsp_message revoke_packet; struct net_device* ndev; } ;
struct net_device {int dummy; } ;
struct TYPE_10__ {int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nvsp_message*,int ,int) ;
 int FUNC_4 (struct net_device*,char*) ;
 int FUNC_5 (int ,struct nvsp_message*,int,unsigned long,int ,int ) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct netvsc_device *VAR_3)
{
 struct nvsp_message *VAR_4;
 int VAR_5 = 0;
 struct net_device *VAR_6 = VAR_3->ndev;







 if (VAR_3->recv_section_cnt) {

  VAR_4 = &VAR_3->revoke_packet;
  FUNC_3(VAR_4, 0, sizeof(struct nvsp_message));

  VAR_4->hdr.msg_type =
   VAR_1;
  VAR_4->msg.v1_msg.
  revoke_recv_buf.id = VAR_0;

  VAR_5 = FUNC_5(VAR_3->dev->channel,
           VAR_4,
           sizeof(struct nvsp_message),
           (unsigned long)VAR_4,
           VAR_2, 0);




  if (VAR_5 != 0) {
   FUNC_4(VAR_6, "unable to send "
    "revoke receive buffer to netvsp\n");
   return VAR_5;
  }
 }


 if (VAR_3->recv_buf_gpadl_handle) {
  VAR_5 = FUNC_6(VAR_3->dev->channel,
      VAR_3->recv_buf_gpadl_handle);




  if (VAR_5 != 0) {
   FUNC_4(VAR_6,
       "unable to teardown receive buffer's gpadl\n");
   return VAR_5;
  }
  VAR_3->recv_buf_gpadl_handle = 0;
 }

 if (VAR_3->recv_buf) {

  FUNC_0((unsigned long)VAR_3->recv_buf,
   FUNC_1(VAR_3->recv_buf_size));
  VAR_3->recv_buf = ((void*)0);
 }

 if (VAR_3->recv_section) {
  VAR_3->recv_section_cnt = 0;
  FUNC_2(VAR_3->recv_section);
  VAR_3->recv_section = ((void*)0);
 }

 return VAR_5;
}
