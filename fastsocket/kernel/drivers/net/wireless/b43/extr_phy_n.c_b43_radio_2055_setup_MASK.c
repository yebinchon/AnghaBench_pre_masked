
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rev; } ;
struct b43_wldev {TYPE_1__ phy; } ;
struct b43_nphy_channeltab_entry_rev2 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct b43_wldev*,struct b43_nphy_channeltab_entry_rev2 const*) ;
 int FUNC_2 (struct b43_wldev*,int ,int) ;
 int FUNC_3 (struct b43_wldev*,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct b43_wldev *VAR_2,
    const struct b43_nphy_channeltab_entry_rev2 *VAR_3)
{
 FUNC_0(VAR_2->phy.rev >= 3);

 FUNC_1(VAR_2, VAR_3);
 FUNC_4(50);
 FUNC_2(VAR_2, VAR_0, 0x05);
 FUNC_2(VAR_2, VAR_0, 0x45);
 FUNC_3(VAR_2, VAR_1);
 FUNC_2(VAR_2, VAR_0, 0x65);
 FUNC_4(300);
}
