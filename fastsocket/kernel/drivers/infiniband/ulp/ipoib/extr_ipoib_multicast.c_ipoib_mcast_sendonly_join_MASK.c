
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {int raw; } ;
struct TYPE_4__ {TYPE_1__ mgid; } ;
struct ipoib_mcast {TYPE_2__ mcmember; int flags; int mc; struct net_device* dev; } ;
struct ipoib_dev_priv {int port; int ca; int pkey; int local_gid; int flags; } ;
struct ib_sa_mcmember_rec {int join_state; int pkey; int port_gid; TYPE_1__ mgid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ,struct ib_sa_mcmember_rec*,int,int ,int ,struct ipoib_mcast*) ;
 int FUNC_5 (struct ipoib_dev_priv*,char*,...) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (struct ipoib_dev_priv*,char*,int) ;
 struct ipoib_dev_priv* FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10(struct ipoib_mcast *VAR_11)
{
 struct net_device *VAR_12 = VAR_11->dev;
 struct ipoib_dev_priv *VAR_13 = FUNC_7(VAR_12);
 struct ib_sa_mcmember_rec VAR_14 = {



  .join_state = 1

 };
 int VAR_15 = 0;

 if (!FUNC_9(VAR_7, &VAR_13->flags)) {
  FUNC_5(VAR_13, "device shutting down, no multicast joins\n");
  return -VAR_1;
 }

 if (FUNC_8(VAR_8, &VAR_11->flags)) {
  FUNC_5(VAR_13, "multicast entry busy, skipping\n");
  return -VAR_0;
 }

 VAR_14.mgid = VAR_11->mcmember.mgid;
 VAR_14.port_gid = VAR_13->local_gid;
 VAR_14.pkey = FUNC_3(VAR_13->pkey);

 VAR_11->mc = FUNC_4(&VAR_10, VAR_13->ca,
      VAR_13->port, &VAR_14,
      VAR_4 |
      VAR_6 |
      VAR_5 |
      VAR_3,
      VAR_2,
      VAR_9,
      VAR_11);
 if (FUNC_0(VAR_11->mc)) {
  VAR_15 = FUNC_1(VAR_11->mc);
  FUNC_2(VAR_8, &VAR_11->flags);
  FUNC_6(VAR_13, "ib_sa_join_multicast failed (ret = %d)\n",
      VAR_15);
 } else {
  FUNC_5(VAR_13, "no multicast record for %pI6, starting join\n",
    VAR_11->mcmember.mgid.raw);
 }

 return VAR_15;
}
