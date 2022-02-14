
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8180_priv {TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ state; scalar_t__ iw_mode; int current_network; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct r8180_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct net_device*,short) ;
 int * VAR_7 ;
 int FUNC_6 (struct net_device*,int ,int) ;
 int FUNC_7 (struct net_device*,int,int ) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_8, short VAR_9)
{
 struct r8180_priv *VAR_10 = FUNC_3(VAR_8);
 short VAR_11 = (VAR_10->ieee80211->state == VAR_3 &&
  FUNC_1(VAR_10->ieee80211->current_network)) ||
  VAR_10->ieee80211->iw_mode == VAR_4;

 FUNC_5(VAR_8, VAR_9);

 FUNC_7(VAR_8, 0x7, VAR_7[VAR_9]);

 FUNC_0(VAR_8);
 FUNC_4(10);

 if (VAR_11) {
  FUNC_6(VAR_8, VAR_5, 0x22);
  FUNC_6(VAR_8, VAR_1, 0x14);
 } else {
  FUNC_6(VAR_8, VAR_5, 0x44);
  FUNC_6(VAR_8, VAR_1, 0x24);
 }

 if (VAR_10->ieee80211->state == VAR_3 &&
     FUNC_2(VAR_10->ieee80211->current_network))
  FUNC_6(VAR_8, VAR_6, 0x9);
 else
  FUNC_6(VAR_8, VAR_6, 0x14);

 if (VAR_11) {
  FUNC_6(VAR_8, VAR_2, 81);
  FUNC_6(VAR_8, VAR_0, 0x73);
 } else {
  FUNC_6(VAR_8, VAR_2, 81);
  FUNC_6(VAR_8, VAR_0, 0xa5);
 }
}
