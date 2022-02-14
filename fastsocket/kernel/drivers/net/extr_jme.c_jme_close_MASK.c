
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct jme_adapter {scalar_t__ phylink; int rxempty_task; int rxclean_task; int txclean_task; int linkch_task; } ;


 int FUNC_0 (struct jme_adapter*) ;
 int FUNC_1 (struct jme_adapter*) ;
 int FUNC_2 (struct jme_adapter*) ;
 int FUNC_3 (struct jme_adapter*) ;
 int FUNC_4 (struct jme_adapter*) ;
 int FUNC_5 (struct jme_adapter*) ;
 int FUNC_6 (struct jme_adapter*) ;
 int FUNC_7 (struct jme_adapter*) ;
 int FUNC_8 (struct jme_adapter*) ;
 int FUNC_9 (struct jme_adapter*) ;
 struct jme_adapter* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int
FUNC_14(struct net_device *VAR_0)
{
 struct jme_adapter *VAR_1 = FUNC_10(VAR_0);

 FUNC_12(VAR_0);
 FUNC_11(VAR_0);

 FUNC_9(VAR_1);
 FUNC_3(VAR_1);

 FUNC_0(VAR_1);

 FUNC_13(&VAR_1->linkch_task);
 FUNC_13(&VAR_1->txclean_task);
 FUNC_13(&VAR_1->rxclean_task);
 FUNC_13(&VAR_1->rxempty_task);

 FUNC_7(VAR_1);
 FUNC_1(VAR_1);
 FUNC_2(VAR_1);
 FUNC_8(VAR_1);
 FUNC_4(VAR_1);
 FUNC_5(VAR_1);
 VAR_1->phylink = 0;
 FUNC_6(VAR_1);

 return 0;
}
