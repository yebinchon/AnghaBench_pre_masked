
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8180_priv {TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct r8180_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (struct net_device*,int,int) ;
 int FUNC_3 (struct net_device*,int,int) ;
 int FUNC_4 (struct net_device*,int,int) ;

void FUNC_5(struct net_device *VAR_3)
{
 struct r8180_priv *VAR_4 = FUNC_0(VAR_3);

 if (VAR_4->ieee80211->mode == VAR_0) {
  FUNC_4(VAR_3, 0x5, 0x1865);
  FUNC_2(VAR_3, VAR_1, 0x10084);
  FUNC_2(VAR_3, VAR_2, 0xa8008);
  FUNC_3(VAR_3, 0x0, 0x0);
  FUNC_3(VAR_3, 0xa, 0x6);
  FUNC_3(VAR_3, 0xb, 0x99);
  FUNC_3(VAR_3, 0xf, 0x20);
  FUNC_3(VAR_3, 0x11, 0x7);

  FUNC_1(VAR_3,4);

  FUNC_3(VAR_3,0x15, 0x40);
  FUNC_3(VAR_3,0x17, 0x40);

  FUNC_2(VAR_3, 0x94,0x10000000);
 } else {
  FUNC_4(VAR_3, 0x5, 0x1864);
  FUNC_2(VAR_3, VAR_1, 0x10044);
  FUNC_2(VAR_3, VAR_2, 0xa8008);
  FUNC_3(VAR_3, 0x0, 0x1);
  FUNC_3(VAR_3, 0xa, 0x6);
  FUNC_3(VAR_3, 0xb, 0x99);
  FUNC_3(VAR_3, 0xf, 0x20);
  FUNC_3(VAR_3, 0x11, 0x7);

  FUNC_1(VAR_3,4);

  FUNC_3(VAR_3,0x15, 0x40);
  FUNC_3(VAR_3,0x17, 0x40);

  FUNC_2(VAR_3, 0x94,0x04000002);
 }
}
