
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct jme_adapter {int flags; int link_changing; struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct jme_adapter*) ;
 int FUNC_2 (struct jme_adapter*) ;
 int FUNC_3 (struct jme_adapter*) ;
 int FUNC_4 (struct jme_adapter*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void
FUNC_8(unsigned long VAR_2)
{
 struct jme_adapter *VAR_3 = (struct jme_adapter *)VAR_2;
 struct net_device *VAR_4 = VAR_3->dev;

 if (FUNC_7(FUNC_6(VAR_1, &VAR_3->flags))) {
  FUNC_2(VAR_3);
  return;
 }

 if (FUNC_7(!FUNC_5(VAR_4) ||
  (FUNC_0(&VAR_3->link_changing) != 1)
 )) {
  FUNC_4(VAR_3);
  return;
 }

 if (!(FUNC_6(VAR_0, &VAR_3->flags)))
  FUNC_1(VAR_3);

 FUNC_3(VAR_3);
}
