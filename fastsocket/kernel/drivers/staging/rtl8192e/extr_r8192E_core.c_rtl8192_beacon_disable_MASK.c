
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct r8192_priv {TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_4)
{
 struct r8192_priv *VAR_5 = (struct r8192_priv *)FUNC_0(VAR_4);
 u32 VAR_6;

 VAR_6 = FUNC_1(VAR_5->ieee80211->dev,VAR_3);


 VAR_6 &= ~(VAR_0 | VAR_0 | VAR_2 | VAR_1);
 FUNC_2(VAR_5->ieee80211->dev, VAR_3, VAR_6);
}
