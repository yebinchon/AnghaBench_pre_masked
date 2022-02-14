
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct jme_adapter {int old_ecmd; int flags; scalar_t__ phylink; } ;


 int VAR_0 ;
 int FUNC_0 (struct jme_adapter*) ;
 int FUNC_1 (struct jme_adapter*) ;
 int FUNC_2 (struct net_device*,int *) ;
 struct jme_adapter* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void
FUNC_5(struct net_device *VAR_1)
{
 struct jme_adapter *VAR_2 = FUNC_3(VAR_1);

 VAR_2->phylink = 0;
 FUNC_1(VAR_2);
 if (FUNC_4(VAR_0, &VAR_2->flags))
  FUNC_2(VAR_1, &VAR_2->old_ecmd);




 FUNC_0(VAR_2);
}
