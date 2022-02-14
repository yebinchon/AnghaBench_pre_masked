
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct r8180_priv {TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct r8180_priv* FUNC_0 (struct net_device*) ;
 scalar_t__* VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_1 (struct net_device*,int,scalar_t__ const) ;

void FUNC_2(struct net_device *VAR_4, short VAR_5)
{
 const u8 *VAR_6;
 struct r8180_priv *VAR_7 = FUNC_0(VAR_4);
 u8 VAR_8 = VAR_7->ieee80211->mode;

 if (VAR_8 == VAR_0 || VAR_8 == VAR_1)
  VAR_6 = VAR_3;
 else
  VAR_6 = VAR_2;

 FUNC_1(VAR_4, 0x0b, VAR_6[VAR_5 * 3]);
 FUNC_1(VAR_4, 0x1b, VAR_6[VAR_5 * 3 + 1]);
 FUNC_1(VAR_4, 0x1d, VAR_6[VAR_5 * 3 + 2]);
 FUNC_1(VAR_4, 0x21, 0x37);
}
