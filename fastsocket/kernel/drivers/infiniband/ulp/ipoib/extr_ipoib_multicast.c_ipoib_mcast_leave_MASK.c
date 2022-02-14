
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {int raw; } ;
struct TYPE_3__ {int mlid; TYPE_2__ mgid; } ;
struct ipoib_mcast {TYPE_1__ mcmember; int flags; int mc; } ;
struct ipoib_dev_priv {int qp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_2__*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ipoib_dev_priv*,char*,int ) ;
 int FUNC_4 (struct ipoib_dev_priv*,char*,int) ;
 struct ipoib_dev_priv* FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_2, struct ipoib_mcast *VAR_3)
{
 struct ipoib_dev_priv *VAR_4 = FUNC_5(VAR_2);
 int VAR_5 = 0;

 if (FUNC_6(VAR_1, &VAR_3->flags))
  FUNC_2(VAR_3->mc);

 if (FUNC_6(VAR_0, &VAR_3->flags)) {
  FUNC_3(VAR_4, "leaving MGID %pI6\n",
    VAR_3->mcmember.mgid.raw);


  VAR_5 = FUNC_1(VAR_4->qp, &VAR_3->mcmember.mgid,
          FUNC_0(VAR_3->mcmember.mlid));
  if (VAR_5)
   FUNC_4(VAR_4, "ib_detach_mcast failed (result = %d)\n", VAR_5);
 }

 return 0;
}
