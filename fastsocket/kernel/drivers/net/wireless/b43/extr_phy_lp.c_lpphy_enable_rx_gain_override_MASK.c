
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rev; } ;
struct b43_wldev {int wl; TYPE_1__ phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct b43_wldev*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct b43_wldev *VAR_3)
{
 FUNC_2(VAR_3, VAR_0, 0x1);
 FUNC_2(VAR_3, VAR_0, 0x10);
 FUNC_2(VAR_3, VAR_0, 0x40);
 if (VAR_3->phy.rev >= 2) {
  FUNC_2(VAR_3, VAR_1, 0x100);
  if (FUNC_1(VAR_3->wl) == VAR_2) {
   FUNC_2(VAR_3, VAR_1, 0x400);
   FUNC_2(VAR_3, FUNC_0(0xE5), 0x8);
  }
 } else {
  FUNC_2(VAR_3, VAR_1, 0x200);
 }
}
