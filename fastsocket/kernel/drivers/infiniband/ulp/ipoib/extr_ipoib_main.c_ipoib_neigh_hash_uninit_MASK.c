
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int deleted; } ;
struct ipoib_dev_priv {TYPE_1__ ntbl; int neigh_reap_task; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ipoib_dev_priv*,char*) ;
 int FUNC_3 (struct ipoib_dev_priv*) ;
 struct ipoib_dev_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_2)
{
 struct ipoib_dev_priv *VAR_3 = FUNC_4(VAR_2);
 int VAR_4;

 FUNC_2(VAR_3, "ipoib_neigh_hash_uninit\n");
 FUNC_1(&VAR_3->ntbl.deleted);
 FUNC_5(VAR_0, &VAR_3->flags);


 VAR_4 = FUNC_6(VAR_1, &VAR_3->flags);
 if (!VAR_4)
  FUNC_0(&VAR_3->neigh_reap_task);

 FUNC_3(VAR_3);

 FUNC_7(&VAR_3->ntbl.deleted);
}
