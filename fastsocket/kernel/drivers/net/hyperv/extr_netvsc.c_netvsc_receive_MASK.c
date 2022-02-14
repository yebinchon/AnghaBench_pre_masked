
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct xferpage_packet {int count; void* status; int list_ent; } ;
struct TYPE_11__ {int trans_id; } ;
struct vmtransfer_page_packet_header {scalar_t__ xfer_pageset_id; int range_cnt; TYPE_3__* ranges; TYPE_2__ d; } ;
struct vmpacket_descriptor {int offset8; int type; } ;
struct TYPE_10__ {scalar_t__ msg_type; } ;
struct nvsp_message {TYPE_1__ hdr; } ;
struct TYPE_15__ {scalar_t__ next; } ;
struct netvsc_device {scalar_t__ recv_buf; int recv_pkt_list_lock; TYPE_6__ recv_pkt_list; struct net_device* ndev; } ;
struct net_device {int dummy; } ;
struct TYPE_13__ {struct hv_netvsc_packet* recv_completion_ctx; int recv_completion_tid; int (* recv_completion ) (struct hv_netvsc_packet*) ;} ;
struct TYPE_14__ {TYPE_4__ recv; } ;
struct hv_netvsc_packet {TYPE_5__ completion; int total_data_buflen; void* data; struct hv_device* device; struct xferpage_packet* xfer_page_pkt; void* status; int list_ent; } ;
struct hv_device {int dummy; } ;
struct TYPE_12__ {int byte_count; scalar_t__ byte_offset; } ;


 int FUNC_0 (TYPE_6__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 struct netvsc_device* FUNC_1 (struct hv_device*) ;
 TYPE_6__ VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (scalar_t__,TYPE_6__*) ;
 int FUNC_5 (struct net_device*,char*,int,...) ;
 int FUNC_6 (struct hv_netvsc_packet*) ;
 int FUNC_7 (struct hv_device*,int ,int ) ;
 int FUNC_8 (struct hv_device*,struct hv_netvsc_packet*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_11(struct hv_device *VAR_6,
       struct vmpacket_descriptor *VAR_7)
{
 struct netvsc_device *VAR_8;
 struct vmtransfer_page_packet_header *VAR_9;
 struct nvsp_message *VAR_10;
 struct hv_netvsc_packet *VAR_11 = ((void*)0);

 struct xferpage_packet *VAR_12 = ((void*)0);
 int VAR_13;
 int VAR_14 = 0;
 unsigned long VAR_15;
 struct net_device *VAR_16;

 FUNC_0(VAR_5);

 VAR_8 = FUNC_1(VAR_6);
 if (!VAR_8)
  return;
 VAR_16 = VAR_8->ndev;





 if (VAR_7->type != VAR_4) {
  FUNC_5(VAR_16, "Unknown packet type received - %d\n",
      VAR_7->type);
  return;
 }

 VAR_10 = (struct nvsp_message *)((unsigned long)VAR_7 +
   (VAR_7->offset8 << 3));


 if (VAR_10->hdr.msg_type !=
     VAR_1) {
  FUNC_5(VAR_16, "Unknown nvsp packet type received-"
   " %d\n", VAR_10->hdr.msg_type);
  return;
 }

 VAR_9 = (struct vmtransfer_page_packet_header *)VAR_7;

 if (VAR_9->xfer_pageset_id != VAR_0) {
  FUNC_5(VAR_16, "Invalid xfer page set id - "
      "expecting %x got %x\n", VAR_0,
      VAR_9->xfer_pageset_id);
  return;
 }







 FUNC_9(&VAR_8->recv_pkt_list_lock, VAR_15);
 while (!FUNC_3(&VAR_8->recv_pkt_list)) {
  FUNC_4(VAR_8->recv_pkt_list.next, &VAR_5);
  if (++VAR_14 == VAR_9->range_cnt + 1)
   break;
 }
 FUNC_10(&VAR_8->recv_pkt_list_lock, VAR_15);






 if (VAR_14 < 2) {
  FUNC_5(VAR_16, "Got only %d netvsc pkt...needed "
   "%d pkts. Dropping this xfer page packet completely!\n",
   VAR_14, VAR_9->range_cnt + 1);


  FUNC_9(&VAR_8->recv_pkt_list_lock, VAR_15);
  for (VAR_13 = VAR_14; VAR_13 != 0; VAR_13--) {
   FUNC_4(VAR_5.next,
           &VAR_8->recv_pkt_list);
  }
  FUNC_10(&VAR_8->recv_pkt_list_lock,
           VAR_15);

  FUNC_7(VAR_6,
         VAR_9->d.trans_id,
         VAR_2);

  return;
 }


 VAR_12 = (struct xferpage_packet *)VAR_5.next;
 FUNC_2(&VAR_12->list_ent);
 VAR_12->status = VAR_3;


 VAR_12->count = VAR_14 - 1;

 if (VAR_12->count != VAR_9->range_cnt) {
  FUNC_5(VAR_16, "Needed %d netvsc pkts to satisfy "
   "this xfer page...got %d\n",
   VAR_9->range_cnt, VAR_12->count);
 }


 for (VAR_13 = 0; VAR_13 < (VAR_14 - 1); VAR_13++) {
  VAR_11 = (struct hv_netvsc_packet *)VAR_5.next;
  FUNC_2(&VAR_11->list_ent);


  VAR_11->status = VAR_3;
  VAR_11->xfer_page_pkt = VAR_12;
  VAR_11->completion.recv.recv_completion =
     FUNC_6;
  VAR_11->completion.recv.recv_completion_ctx =
     VAR_11;
  VAR_11->device = VAR_6;

  VAR_11->completion.recv.recv_completion_tid =
     VAR_9->d.trans_id;

  VAR_11->data = (void *)((unsigned long)VAR_8->
   recv_buf + VAR_9->ranges[VAR_13].byte_offset);
  VAR_11->total_data_buflen =
     VAR_9->ranges[VAR_13].byte_count;


  FUNC_8(VAR_6, VAR_11);

  FUNC_6(VAR_11->
    completion.recv.recv_completion_ctx);
 }

}
