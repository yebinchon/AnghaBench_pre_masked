
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct fe_priv {int phyaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,int ,int ,int ) ;
 struct fe_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3)
{
 struct fe_priv *VAR_4 = FUNC_1(VAR_3);
 int VAR_5;

 FUNC_0(VAR_3, VAR_4->phyaddr, VAR_1, VAR_2);
 VAR_5 = FUNC_0(VAR_3, VAR_4->phyaddr, VAR_1, VAR_2);


 if (!(VAR_5 & VAR_0))
  return 0;
 else
  return 1;
}
