
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int * srq_ring; int * srq; } ;
struct ipoib_dev_priv {TYPE_1__ cm; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*,int *) ;
 int FUNC_2 (struct ipoib_dev_priv*,char*) ;
 int FUNC_3 (struct ipoib_dev_priv*,char*,int) ;
 struct ipoib_dev_priv* FUNC_4 (struct net_device*) ;

void FUNC_5(struct net_device *VAR_0)
{
 struct ipoib_dev_priv *VAR_1 = FUNC_4(VAR_0);
 int VAR_2;

 if (!VAR_1->cm.srq)
  return;

 FUNC_2(VAR_1, "Cleanup ipoib connected mode.\n");

 VAR_2 = FUNC_0(VAR_1->cm.srq);
 if (VAR_2)
  FUNC_3(VAR_1, "ib_destroy_srq failed: %d\n", VAR_2);

 VAR_1->cm.srq = ((void*)0);
 if (!VAR_1->cm.srq_ring)
  return;

 FUNC_1(VAR_0, VAR_1->cm.srq_ring);
 VAR_1->cm.srq_ring = ((void*)0);
}
