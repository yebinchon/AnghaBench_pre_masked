
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct netvsc_device {int recv_pkt_list_lock; int recv_pkt_list; struct net_device* ndev; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int recv_completion_tid; } ;
struct TYPE_5__ {TYPE_1__ recv; } ;
struct hv_netvsc_packet {scalar_t__ status; int list_ent; TYPE_3__* xfer_page_pkt; TYPE_2__ completion; struct hv_device* device; } ;
struct hv_device {int dummy; } ;
struct TYPE_6__ {scalar_t__ count; int list_ent; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct netvsc_device* FUNC_0 (struct hv_device*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct hv_device*,int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(void *VAR_3)
{
 struct hv_netvsc_packet *VAR_4 = VAR_3;
 struct hv_device *VAR_5 = VAR_4->device;
 struct netvsc_device *VAR_6;
 u64 VAR_7 = 0;
 bool VAR_8 = 0;
 unsigned long VAR_9;
 struct net_device *VAR_10;
 u32 VAR_11 = VAR_1;






 VAR_6 = FUNC_0(VAR_5);
 if (!VAR_6)
  return;
 VAR_10 = VAR_6->ndev;


 FUNC_3(&VAR_6->recv_pkt_list_lock, VAR_9);

 if (VAR_4->status != VAR_2)
  VAR_4->xfer_page_pkt->status = VAR_0;

 VAR_4->xfer_page_pkt->count--;





 if (VAR_4->xfer_page_pkt->count == 0) {
  VAR_8 = 1;
  VAR_7 = VAR_4->completion.recv.recv_completion_tid;
  VAR_11 = VAR_4->xfer_page_pkt->status;
  FUNC_1(&VAR_4->xfer_page_pkt->list_ent,
         &VAR_6->recv_pkt_list);

 }


 FUNC_1(&VAR_4->list_ent, &VAR_6->recv_pkt_list);
 FUNC_4(&VAR_6->recv_pkt_list_lock, VAR_9);


 if (VAR_8)
  FUNC_2(VAR_5, VAR_7, VAR_11);

}
