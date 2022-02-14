
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ is_40mhz; } ;
struct b43_wldev {TYPE_1__ phy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct b43_wldev*,int ) ;

__attribute__((used)) static u16 FUNC_2(struct b43_wldev *VAR_0, u16 VAR_1)
{
 if (!VAR_1)
  VAR_1 = (VAR_0->phy.is_40mhz) ? 0x159 : 0x154;
 return FUNC_1(VAR_0, FUNC_0(7, VAR_1)) & 0x7;
}
