
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct ipoib_dev_priv {int qp; int qkey; int flags; int pkey; int port; int ca; } ;
struct ib_qp_attr {int qkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,union ib_gid*,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (int ,struct ib_qp_attr*,int ) ;
 int FUNC_4 (struct ipoib_dev_priv*,char*,int) ;
 int FUNC_5 (struct ib_qp_attr*) ;
 struct ib_qp_attr* FUNC_6 (int,int ) ;
 struct ipoib_dev_priv* FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ,int *) ;

int FUNC_9(struct net_device *VAR_5, u16 VAR_6, union ib_gid *VAR_7, int VAR_8)
{
 struct ipoib_dev_priv *VAR_9 = FUNC_7(VAR_5);
 struct ib_qp_attr *VAR_10 = ((void*)0);
 int VAR_11;
 u16 VAR_12;

 if (FUNC_2(VAR_9->ca, VAR_9->port, VAR_9->pkey, &VAR_12)) {
  FUNC_0(VAR_4, &VAR_9->flags);
  VAR_11 = -VAR_1;
  goto out;
 }
 FUNC_8(VAR_4, &VAR_9->flags);

 if (VAR_8) {
  VAR_11 = -VAR_0;
  VAR_10 = FUNC_6(sizeof *VAR_10, VAR_2);
  if (!VAR_10)
   goto out;


  VAR_10->qkey = VAR_9->qkey;
  VAR_11 = FUNC_3(VAR_9->qp, VAR_10, VAR_3);
  if (VAR_11) {
   FUNC_4(VAR_9, "failed to modify QP, ret = %d\n", VAR_11);
   goto out;
  }
 }


 VAR_11 = FUNC_1(VAR_9->qp, VAR_7, VAR_6);
 if (VAR_11)
  FUNC_4(VAR_9, "failed to attach to multicast group, ret = %d\n", VAR_11);

out:
 FUNC_5(VAR_10);
 return VAR_11;
}
