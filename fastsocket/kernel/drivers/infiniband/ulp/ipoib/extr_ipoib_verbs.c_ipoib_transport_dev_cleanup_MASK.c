
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipoib_dev_priv {int pd; int mr; int recv_cq; int send_cq; int flags; int * qp; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct ipoib_dev_priv*,char*) ;
 struct ipoib_dev_priv* FUNC_7 (struct net_device*) ;

void FUNC_8(struct net_device *VAR_1)
{
 struct ipoib_dev_priv *VAR_2 = FUNC_7(VAR_1);

 if (VAR_2->qp) {
  if (FUNC_4(VAR_2->qp))
   FUNC_6(VAR_2, "ib_qp_destroy failed\n");

  VAR_2->qp = ((void*)0);
  FUNC_0(VAR_0, &VAR_2->flags);
 }

 if (FUNC_3(VAR_2->send_cq))
  FUNC_6(VAR_2, "ib_cq_destroy (send) failed\n");

 if (FUNC_3(VAR_2->recv_cq))
  FUNC_6(VAR_2, "ib_cq_destroy (recv) failed\n");

 FUNC_5(VAR_1);

 if (FUNC_2(VAR_2->mr))
  FUNC_6(VAR_2, "ib_dereg_mr failed\n");

 if (FUNC_1(VAR_2->pd))
  FUNC_6(VAR_2, "ib_dealloc_pd failed\n");
}
