
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct b43_phy {int rev; } ;
struct b43_wldev {int wl; struct b43_phy phy; } ;
struct TYPE_2__ {int gmval; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int* FUNC_2 (struct b43_wldev*) ;
 int* VAR_1 ;
 int FUNC_3 (struct b43_wldev*,int ,int) ;
 int FUNC_4 (struct b43_wldev*,int ,int,int const*) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_5(struct b43_wldev *VAR_3)
{
 struct b43_phy *VAR_4 = &VAR_3->phy;

 const u32 *VAR_5 = ((void*)0);
 u32 VAR_6;
 u8 VAR_7;
 int VAR_8;

 VAR_5 = FUNC_2(VAR_3);
 FUNC_4(VAR_3, FUNC_0(26, 192), 128, VAR_5);
 FUNC_4(VAR_3, FUNC_0(27, 192), 128, VAR_5);

 if (VAR_4->rev >= 3) {




  for (VAR_8 = 0; VAR_8 < 128; VAR_8++) {
   VAR_7 = (VAR_5[VAR_8] >> 24) & 0xF;
   if (FUNC_1(VAR_3->wl) == VAR_0)
    VAR_6 =
     VAR_1[VAR_7];
   else
    VAR_6 =
     0;
   FUNC_3(VAR_3, FUNC_0(26, 576 + VAR_8),
           VAR_6);
   FUNC_3(VAR_3, FUNC_0(27, 576 + VAR_8),
           VAR_6);
  }
 }
}
