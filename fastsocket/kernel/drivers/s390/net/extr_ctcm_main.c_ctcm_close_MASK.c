
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct ctcm_priv* ml_priv; } ;
struct ctcm_priv {int fsm; } ;


 int FUNC_0 (int ,struct net_device*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct ctcm_priv*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,struct net_device*) ;

int FUNC_3(struct net_device *VAR_2)
{
 struct ctcm_priv *VAR_3 = VAR_2->ml_priv;

 FUNC_0(VAR_1, VAR_2, "");
 if (!FUNC_1(VAR_3))
  FUNC_2(VAR_3->fsm, VAR_0, VAR_2);
 return 0;
}
