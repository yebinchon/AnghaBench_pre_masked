
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ib_mad_send_buf {struct ib_mad_send_buf* ah; } ;
struct TYPE_5__ {int grh; } ;
struct ib_mad_recv_wc {TYPE_4__* wc; TYPE_1__ recv_buf; } ;
struct ib_ah {struct ib_ah* ah; } ;
struct cm_port {TYPE_3__* mad_agent; int port_num; } ;
struct TYPE_8__ {int pkey_index; } ;
struct TYPE_7__ {TYPE_2__* qp; } ;
struct TYPE_6__ {int pd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ib_mad_send_buf*) ;
 int FUNC_1 (struct ib_mad_send_buf*) ;
 struct ib_mad_send_buf* FUNC_2 (int ,TYPE_4__*,int ,int ) ;
 struct ib_mad_send_buf* FUNC_3 (TYPE_3__*,int,int ,int ,int ,int ,int ) ;
 int FUNC_4 (struct ib_mad_send_buf*) ;

__attribute__((used)) static int FUNC_5(struct cm_port *VAR_3,
     struct ib_mad_recv_wc *VAR_4,
     struct ib_mad_send_buf **VAR_5)
{
 struct ib_mad_send_buf *VAR_6;
 struct ib_ah *VAR_7;

 VAR_7 = FUNC_2(VAR_3->mad_agent->qp->pd, VAR_4->wc,
      VAR_4->recv_buf.grh, VAR_3->port_num);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_6 = FUNC_3(VAR_3->mad_agent, 1, VAR_4->wc->pkey_index,
          0, VAR_2, VAR_1,
          VAR_0);
 if (FUNC_0(VAR_6)) {
  FUNC_4(VAR_7);
  return FUNC_1(VAR_6);
 }
 VAR_6->ah = VAR_7;
 *VAR_5 = VAR_6;
 return 0;
}
