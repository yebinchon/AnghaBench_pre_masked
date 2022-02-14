
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct ib_sge {int length; void* addr; } ;
struct ib_send_wr {int dummy; } ;
struct TYPE_8__ {int list; TYPE_4__* mad_queue; } ;
struct TYPE_10__ {unsigned long wr_id; } ;
struct TYPE_7__ {int mad; struct ib_mad_agent* mad_agent; } ;
struct ib_mad_send_wr_private {void* payload_mapping; void* header_mapping; TYPE_3__ mad_list; TYPE_5__ send_wr; TYPE_2__ send_buf; struct ib_sge* sg_list; TYPE_1__* mad_agent_priv; } ;
struct TYPE_9__ {scalar_t__ count; scalar_t__ max_active; int lock; struct list_head list; } ;
struct ib_mad_qp_info {TYPE_4__ send_queue; struct list_head overflow_list; } ;
struct ib_mad_agent {int device; int qp; } ;
struct TYPE_6__ {struct ib_mad_qp_info* qp_info; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,void*,int ,int ) ;
 int FUNC_2 (struct ib_mad_send_wr_private*) ;
 int FUNC_3 (int ,TYPE_5__*,struct ib_send_wr**) ;
 int FUNC_4 (int *,struct list_head*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

int FUNC_7(struct ib_mad_send_wr_private *VAR_1)
{
 struct ib_mad_qp_info *VAR_2;
 struct list_head *VAR_3;
 struct ib_send_wr *VAR_4;
 struct ib_mad_agent *VAR_5;
 struct ib_sge *VAR_6;
 unsigned long VAR_7;
 int VAR_8;


 VAR_2 = VAR_1->mad_agent_priv->qp_info;
 VAR_1->send_wr.wr_id = (unsigned long)&VAR_1->mad_list;
 VAR_1->mad_list.mad_queue = &VAR_2->send_queue;

 VAR_5 = VAR_1->send_buf.mad_agent;
 VAR_6 = VAR_1->sg_list;
 VAR_6[0].addr = FUNC_0(VAR_5->device,
     VAR_1->send_buf.mad,
     VAR_6[0].length,
     VAR_0);
 VAR_1->header_mapping = VAR_6[0].addr;

 VAR_6[1].addr = FUNC_0(VAR_5->device,
     FUNC_2(VAR_1),
     VAR_6[1].length,
     VAR_0);
 VAR_1->payload_mapping = VAR_6[1].addr;

 FUNC_5(&VAR_2->send_queue.lock, VAR_7);
 if (VAR_2->send_queue.count < VAR_2->send_queue.max_active) {
  VAR_8 = FUNC_3(VAR_5->qp, &VAR_1->send_wr,
       &VAR_4);
  VAR_3 = &VAR_2->send_queue.list;
 } else {
  VAR_8 = 0;
  VAR_3 = &VAR_2->overflow_list;
 }

 if (!VAR_8) {
  VAR_2->send_queue.count++;
  FUNC_4(&VAR_1->mad_list.list, VAR_3);
 }
 FUNC_6(&VAR_2->send_queue.lock, VAR_7);
 if (VAR_8) {
  FUNC_1(VAR_5->device,
        VAR_1->header_mapping,
        VAR_6[0].length, VAR_0);
  FUNC_1(VAR_5->device,
        VAR_1->payload_mapping,
        VAR_6[1].length, VAR_0);
 }
 return VAR_8;
}
