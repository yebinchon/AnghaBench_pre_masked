
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ipoib_dev_priv {TYPE_1__* qp; } ;
struct ipoib_cm_data {void* mtu; void* qpn; } ;
struct ib_qp {int qp_num; } ;
struct ib_cm_req_event_param {int rnr_retry_count; } ;
struct ib_cm_rep_param {int private_data_len; unsigned int starting_psn; int qp_num; int srq; int rnr_retry_count; scalar_t__ flow_control; struct ipoib_cm_data* private_data; } ;
struct ib_cm_id {int dummy; } ;
struct TYPE_2__ {int qp_num; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct ib_cm_id*,struct ib_cm_rep_param*) ;
 int FUNC_2 (struct net_device*) ;
 struct ipoib_dev_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, struct ib_cm_id *VAR_2,
        struct ib_qp *VAR_3, struct ib_cm_req_event_param *VAR_4,
        unsigned VAR_5)
{
 struct ipoib_dev_priv *VAR_6 = FUNC_3(VAR_1);
 struct ipoib_cm_data VAR_7 = {};
 struct ib_cm_rep_param VAR_8 = {};

 VAR_7.qpn = FUNC_0(VAR_6->qp->qp_num);
 VAR_7.mtu = FUNC_0(VAR_0);

 VAR_8.private_data = &VAR_7;
 VAR_8.private_data_len = sizeof VAR_7;
 VAR_8.flow_control = 0;
 VAR_8.rnr_retry_count = VAR_4->rnr_retry_count;
 VAR_8.srq = FUNC_2(VAR_1);
 VAR_8.qp_num = VAR_3->qp_num;
 VAR_8.starting_psn = VAR_5;
 return FUNC_1(VAR_2, &VAR_8);
}
