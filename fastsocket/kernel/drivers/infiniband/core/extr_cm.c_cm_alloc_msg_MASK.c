
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ib_mad_send_buf {struct cm_id_private** context; int retries; struct ib_mad_send_buf* ah; } ;
struct ib_mad_agent {TYPE_2__* qp; } ;
struct ib_ah {struct cm_id_private** context; int retries; struct ib_ah* ah; } ;
struct TYPE_8__ {int pkey_index; int ah_attr; TYPE_1__* port; } ;
struct TYPE_7__ {int remote_cm_qpn; } ;
struct cm_id_private {int refcount; int max_cm_retries; TYPE_4__ av; TYPE_3__ id; } ;
struct TYPE_6__ {int pd; } ;
struct TYPE_5__ {struct ib_mad_agent* mad_agent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ib_mad_send_buf*) ;
 int FUNC_1 (struct ib_mad_send_buf*) ;
 int FUNC_2 (int *) ;
 struct ib_mad_send_buf* FUNC_3 (int ,int *) ;
 struct ib_mad_send_buf* FUNC_4 (struct ib_mad_agent*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (struct ib_mad_send_buf*) ;

__attribute__((used)) static int FUNC_6(struct cm_id_private *VAR_3,
   struct ib_mad_send_buf **VAR_4)
{
 struct ib_mad_agent *VAR_5;
 struct ib_mad_send_buf *VAR_6;
 struct ib_ah *VAR_7;

 VAR_5 = VAR_3->av.port->mad_agent;
 VAR_7 = FUNC_3(VAR_5->qp->pd, &VAR_3->av.ah_attr);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_6 = FUNC_4(VAR_5, VAR_3->id.remote_cm_qpn,
          VAR_3->av.pkey_index,
          0, VAR_2, VAR_1,
          VAR_0);
 if (FUNC_0(VAR_6)) {
  FUNC_5(VAR_7);
  return FUNC_1(VAR_6);
 }


 VAR_6->ah = VAR_7;
 VAR_6->retries = VAR_3->max_cm_retries;

 FUNC_2(&VAR_3->refcount);
 VAR_6->context[0] = VAR_3;
 *VAR_4 = VAR_6;
 return 0;
}
