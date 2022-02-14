
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int channel; scalar_t__ is_40mhz; } ;
struct b43_wldev {TYPE_1__ phy; int wl; } ;


 int FUNC_0 (int const) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct b43_wldev*,int ,int ) ;
 int ** VAR_1 ;

__attribute__((used)) static void FUNC_3(struct b43_wldev *VAR_2)
{
 int VAR_3, VAR_4;

 static const u16 VAR_5[] = { 0x186, 0x195, 0x2C5 };

 for (VAR_3 = 0; VAR_3 < 3; VAR_3++)
  for (VAR_4 = 0; VAR_4 < 15; VAR_4++)
   FUNC_2(VAR_2, FUNC_0(VAR_5[VAR_3] + VAR_4),
     VAR_1[VAR_3][VAR_4]);

 if (VAR_2->phy.is_40mhz) {
  for (VAR_4 = 0; VAR_4 < 15; VAR_4++)
   FUNC_2(VAR_2, FUNC_0(VAR_5[0] + VAR_4),
     VAR_1[3][VAR_4]);
 } else if (FUNC_1(VAR_2->wl) == VAR_0) {
  for (VAR_4 = 0; VAR_4 < 15; VAR_4++)
   FUNC_2(VAR_2, FUNC_0(VAR_5[0] + VAR_4),
     VAR_1[5][VAR_4]);
 }

 if (VAR_2->phy.channel == 14)
  for (VAR_4 = 0; VAR_4 < 15; VAR_4++)
   FUNC_2(VAR_2, FUNC_0(VAR_5[0] + VAR_4),
     VAR_1[6][VAR_4]);
}
