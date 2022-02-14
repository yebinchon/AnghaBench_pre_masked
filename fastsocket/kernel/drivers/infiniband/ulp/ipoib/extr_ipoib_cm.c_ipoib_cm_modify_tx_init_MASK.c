
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipoib_dev_priv {int port; int pkey; int ca; } ;
struct ib_qp_attr {int port_num; int qp_access_flags; int qp_state; int pkey_index; } ;
struct ib_qp {int dummy; } ;
struct ib_cm_id {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (struct ib_qp*,struct ib_qp_attr*,int) ;
 int FUNC_2 (struct ipoib_dev_priv*,char*,int,...) ;
 struct ipoib_dev_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_6,
      struct ib_cm_id *VAR_7, struct ib_qp *VAR_8)
{
 struct ipoib_dev_priv *VAR_9 = FUNC_3(VAR_6);
 struct ib_qp_attr VAR_10;
 int VAR_11, VAR_12;
 VAR_12 = FUNC_0(VAR_9->ca, VAR_9->port, VAR_9->pkey, &VAR_10.pkey_index);
 if (VAR_12) {
  FUNC_2(VAR_9, "pkey 0x%x not found: %d\n", VAR_9->pkey, VAR_12);
  return VAR_12;
 }

 VAR_10.qp_state = VAR_1;
 VAR_10.qp_access_flags = VAR_0;
 VAR_10.port_num = VAR_9->port;
 VAR_11 = VAR_5 | VAR_2 | VAR_3 | VAR_4;

 VAR_12 = FUNC_1(VAR_8, &VAR_10, VAR_11);
 if (VAR_12) {
  FUNC_2(VAR_9, "failed to modify tx QP to INIT: %d\n", VAR_12);
  return VAR_12;
 }
 return 0;
}
