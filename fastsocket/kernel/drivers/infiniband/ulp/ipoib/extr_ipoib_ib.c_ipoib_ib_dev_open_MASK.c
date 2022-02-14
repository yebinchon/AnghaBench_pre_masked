
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipoib_dev_priv {int pkey; int napi; int flags; int ah_reap_task; int pkey_index; int port; int ca; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,int ,int,int *) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct ipoib_dev_priv*,char*,int) ;
 int VAR_4 ;
 int FUNC_7 (int *) ;
 struct ipoib_dev_priv* FUNC_8 (struct net_device*) ;
 int FUNC_9 (int ,int *,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,int *) ;

int FUNC_13(struct net_device *VAR_5)
{
 struct ipoib_dev_priv *VAR_6 = FUNC_8(VAR_5);
 int VAR_7;

 if (FUNC_1(VAR_6->ca, VAR_6->port, VAR_6->pkey, &VAR_6->pkey_index)) {
  FUNC_6(VAR_6, "P_Key 0x%04x not found\n", VAR_6->pkey);
  FUNC_0(VAR_2, &VAR_6->flags);
  return -1;
 }
 FUNC_11(VAR_2, &VAR_6->flags);

 VAR_7 = FUNC_5(VAR_5);
 if (VAR_7) {
  FUNC_6(VAR_6, "ipoib_init_qp returned %d\n", VAR_7);
  return -1;
 }

 VAR_7 = FUNC_4(VAR_5);
 if (VAR_7) {
  FUNC_6(VAR_6, "ipoib_ib_post_receives returned %d\n", VAR_7);
  FUNC_3(VAR_5, 1);
  return -1;
 }

 VAR_7 = FUNC_2(VAR_5);
 if (VAR_7) {
  FUNC_6(VAR_6, "ipoib_cm_dev_open returned %d\n", VAR_7);
  FUNC_3(VAR_5, 1);
  return -1;
 }

 FUNC_0(VAR_3, &VAR_6->flags);
 FUNC_9(VAR_4, &VAR_6->ah_reap_task,
      FUNC_10(VAR_0));

 if (!FUNC_12(VAR_1, &VAR_6->flags))
  FUNC_7(&VAR_6->napi);

 return 0;
}
