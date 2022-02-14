
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct jme_adapter {int old_ecmd; int flags; int rxempty_task; int rxclean_task; int txclean_task; int linkch_task; } ;


 int VAR_0 ;
 int FUNC_0 (struct jme_adapter*) ;
 int FUNC_1 (struct jme_adapter*) ;
 int FUNC_2 (struct jme_adapter*) ;
 int FUNC_3 (struct jme_adapter*) ;
 int FUNC_4 (struct jme_adapter*) ;
 int FUNC_5 (struct net_device*,int *) ;
 int FUNC_6 (struct jme_adapter*) ;
 struct jme_adapter* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ,int *) ;

__attribute__((used)) static int
FUNC_13(struct net_device *VAR_1)
{
 struct jme_adapter *VAR_2 = FUNC_7(VAR_1);
 int VAR_3;

 FUNC_1(VAR_2);
 FUNC_0(VAR_2);

 FUNC_10(&VAR_2->linkch_task);
 FUNC_10(&VAR_2->txclean_task);
 FUNC_11(&VAR_2->rxclean_task);
 FUNC_11(&VAR_2->rxempty_task);

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3)
  goto err_out;

 FUNC_6(VAR_2);

 if (FUNC_12(VAR_0, &VAR_2->flags))
  FUNC_5(VAR_1, &VAR_2->old_ecmd);
 else
  FUNC_4(VAR_2);

 FUNC_3(VAR_2);

 return 0;

err_out:
 FUNC_9(VAR_1);
 FUNC_8(VAR_1);
 return VAR_3;
}
