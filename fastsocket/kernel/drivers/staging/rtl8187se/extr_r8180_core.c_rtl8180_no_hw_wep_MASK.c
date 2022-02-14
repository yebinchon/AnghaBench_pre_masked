
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct r8180_priv {int card_8185; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct r8180_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*,int ,int) ;

void FUNC_3(struct net_device *VAR_3)
{
 struct r8180_priv *VAR_4 = FUNC_0(VAR_3);

 if (!VAR_4->card_8185) {
  u8 VAR_5;

  VAR_5 = FUNC_1(VAR_3, VAR_0);
  VAR_5 &=~(1<<VAR_2);
  VAR_5 &=~(1<<VAR_1);

  FUNC_2(VAR_3, VAR_0, VAR_5);
 }
}
