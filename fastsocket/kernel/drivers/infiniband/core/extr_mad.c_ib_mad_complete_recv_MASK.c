
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ib_mad_send_wr_private {int send_buf; } ;
struct ib_mad_send_wc {int * send_buf; scalar_t__ vendor_err; int status; } ;
struct TYPE_5__ {int mad; int list; } ;
struct ib_mad_recv_wc {TYPE_2__* wc; TYPE_1__ recv_buf; int rmpp_list; } ;
struct TYPE_7__ {int (* recv_handler ) (TYPE_3__*,struct ib_mad_recv_wc*) ;scalar_t__ rmpp_version; } ;
struct ib_mad_agent_private {TYPE_3__ agent; int refcount; int lock; } ;
struct TYPE_6__ {unsigned long wr_id; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ib_mad_agent_private*) ;
 struct ib_mad_send_wr_private* FUNC_3 (struct ib_mad_agent_private*,struct ib_mad_recv_wc*) ;
 int FUNC_4 (struct ib_mad_recv_wc*) ;
 int FUNC_5 (struct ib_mad_send_wr_private*,struct ib_mad_send_wc*) ;
 int FUNC_6 (struct ib_mad_send_wr_private*) ;
 struct ib_mad_recv_wc* FUNC_7 (struct ib_mad_agent_private*,struct ib_mad_recv_wc*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (TYPE_3__*,struct ib_mad_recv_wc*) ;
 int FUNC_13 (TYPE_3__*,struct ib_mad_recv_wc*) ;

__attribute__((used)) static void FUNC_14(struct ib_mad_agent_private *VAR_1,
     struct ib_mad_recv_wc *VAR_2)
{
 struct ib_mad_send_wr_private *VAR_3;
 struct ib_mad_send_wc VAR_4;
 unsigned long VAR_5;

 FUNC_0(&VAR_2->rmpp_list);
 FUNC_9(&VAR_2->recv_buf.list, &VAR_2->rmpp_list);
 if (VAR_1->agent.rmpp_version) {
  VAR_2 = FUNC_7(VAR_1,
            VAR_2);
  if (!VAR_2) {
   FUNC_2(VAR_1);
   return;
  }
 }


 if (FUNC_8(VAR_2->recv_buf.mad)) {
  FUNC_10(&VAR_1->lock, VAR_5);
  VAR_3 = FUNC_3(VAR_1, VAR_2);
  if (!VAR_3) {
   FUNC_11(&VAR_1->lock, VAR_5);
   FUNC_4(VAR_2);
   FUNC_2(VAR_1);
   return;
  }
  FUNC_6(VAR_3);
  FUNC_11(&VAR_1->lock, VAR_5);


  VAR_2->wc->wr_id = (unsigned long) &VAR_3->send_buf;
  VAR_1->agent.recv_handler(&VAR_1->agent,
         VAR_2);
  FUNC_1(&VAR_1->refcount);

  VAR_4.status = VAR_0;
  VAR_4.vendor_err = 0;
  VAR_4.send_buf = &VAR_3->send_buf;
  FUNC_5(VAR_3, &VAR_4);
 } else {
  VAR_1->agent.recv_handler(&VAR_1->agent,
         VAR_2);
  FUNC_2(VAR_1);
 }
}
