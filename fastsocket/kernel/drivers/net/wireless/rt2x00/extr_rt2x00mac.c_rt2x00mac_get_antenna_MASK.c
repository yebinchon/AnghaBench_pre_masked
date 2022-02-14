
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct antenna_setup {int rx; int tx; } ;
struct link_ant {int flags; struct antenna_setup active; } ;
struct TYPE_2__ {struct link_ant ant; } ;
struct rt2x00_dev {TYPE_1__ link; } ;
struct ieee80211_hw {struct rt2x00_dev* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(struct ieee80211_hw *VAR_3, u32 *VAR_4, u32 *VAR_5)
{
 struct rt2x00_dev *VAR_6 = VAR_3->priv;
 struct link_ant *VAR_7 = &VAR_6->link.ant;
 struct antenna_setup *VAR_8 = &VAR_6->link.ant.active;



 if (VAR_7->flags & VAR_2)
  *VAR_4 = VAR_0;
 else
  *VAR_4 = VAR_8->tx;

 if (VAR_7->flags & VAR_1)
  *VAR_5 = VAR_0;
 else
  *VAR_5 = VAR_8->rx;

 return 0;
}
