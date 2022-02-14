
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct r8180_priv {int TransmitConfig; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct net_device*,int ) ;
 int FUNC_5 (struct net_device*,int ,int) ;
 int FUNC_6 (struct net_device*,int ,int ) ;

void FUNC_7(struct net_device *VAR_5)
{
 u8 VAR_6;

 u8 VAR_7;

 struct r8180_priv *VAR_8 = (struct r8180_priv *)FUNC_2(VAR_5);

 FUNC_6(VAR_5, VAR_4, VAR_8->TransmitConfig);
 VAR_7 = FUNC_3(VAR_5, VAR_2);
 VAR_7 |= VAR_3;
 FUNC_5(VAR_5, VAR_2, VAR_7);

 FUNC_1(VAR_5);





 VAR_6=FUNC_3(VAR_5,VAR_0);
 FUNC_5(VAR_5,VAR_0,VAR_6 | (1<<VAR_1));
}
