
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mad_rmpp_recv {int newwin; int seg_num; int repwin; int method; int class_version; int mgmt_class; int slid; int src_qp; int tid; scalar_t__ last_ack; TYPE_4__* cur_seg_buf; struct ib_mad_recv_wc* rmpp_wc; int refcount; int state; int lock; int cleanup_work; int timeout_work; int comp; struct ib_mad_agent_private* agent; int ah; } ;
struct TYPE_9__ {TYPE_3__* mad; int grh; } ;
struct ib_mad_recv_wc {TYPE_5__* wc; TYPE_4__ recv_buf; } ;
struct ib_mad_hdr {int method; int class_version; int mgmt_class; int tid; } ;
struct TYPE_7__ {int port_num; TYPE_1__* qp; } ;
struct ib_mad_agent_private {TYPE_2__ agent; } ;
struct TYPE_10__ {int slid; int src_qp; } ;
struct TYPE_8__ {struct ib_mad_hdr mad_hdr; } ;
struct TYPE_6__ {int pd; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,TYPE_5__*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mad_rmpp_recv*) ;
 struct mad_rmpp_recv* FUNC_6 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int *) ;

__attribute__((used)) static struct mad_rmpp_recv *
FUNC_8(struct ib_mad_agent_private *VAR_4,
   struct ib_mad_recv_wc *VAR_5)
{
 struct mad_rmpp_recv *VAR_6;
 struct ib_mad_hdr *VAR_7;

 VAR_6 = FUNC_6(sizeof *VAR_6, VAR_0);
 if (!VAR_6)
  return ((void*)0);

 VAR_6->ah = FUNC_3(VAR_4->agent.qp->pd,
          VAR_5->wc,
          VAR_5->recv_buf.grh,
          VAR_4->agent.port_num);
 if (FUNC_1(VAR_6->ah))
  goto error;

 VAR_6->agent = VAR_4;
 FUNC_4(&VAR_6->comp);
 FUNC_0(&VAR_6->timeout_work, VAR_3);
 FUNC_0(&VAR_6->cleanup_work, VAR_2);
 FUNC_7(&VAR_6->lock);
 VAR_6->state = VAR_1;
 FUNC_2(&VAR_6->refcount, 1);

 VAR_6->rmpp_wc = VAR_5;
 VAR_6->cur_seg_buf = &VAR_5->recv_buf;
 VAR_6->newwin = 1;
 VAR_6->seg_num = 1;
 VAR_6->last_ack = 0;
 VAR_6->repwin = 1;

 VAR_7 = &VAR_5->recv_buf.mad->mad_hdr;
 VAR_6->tid = VAR_7->tid;
 VAR_6->src_qp = VAR_5->wc->src_qp;
 VAR_6->slid = VAR_5->wc->slid;
 VAR_6->mgmt_class = VAR_7->mgmt_class;
 VAR_6->class_version = VAR_7->class_version;
 VAR_6->method = VAR_7->method;
 return VAR_6;

error: FUNC_5(VAR_6);
 return ((void*)0);
}
