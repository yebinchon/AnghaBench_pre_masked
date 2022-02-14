
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ type; int radio_ver; int radio_rev; } ;
struct b43_wldev {TYPE_1__ phy; int wl; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct b43_wldev*,int ,int ,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct b43_wldev *VAR_4, bool VAR_5)
{
 u16 VAR_6;


 if (VAR_4->phy.type == VAR_0)
  VAR_6 = 3700;
 else
  VAR_6 = 1050;
 if (FUNC_0(VAR_4->wl, VAR_3) || VAR_5)
  VAR_6 = 500;
 if ((VAR_4->phy.radio_ver == 0x2050) && (VAR_4->phy.radio_rev == 8))
  VAR_6 = FUNC_2(VAR_6, (u16)2400);

 FUNC_1(VAR_4, VAR_1, VAR_2, VAR_6);
}
