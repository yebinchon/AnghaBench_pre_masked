
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {struct b43_phy_ht* ht; } ;
struct b43_wldev {int wl; TYPE_1__ phy; } ;
struct b43_phy_ht {scalar_t__* bb_mult_save; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct b43_wldev*,int ) ;
 int FUNC_2 (struct b43_wldev*,int ,int ) ;
 int FUNC_3 (struct b43_wldev*,int ) ;
 int FUNC_4 (struct b43_wldev*,int ,int) ;
 int FUNC_5 (struct b43_wldev*,int ,int) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct b43_wldev *VAR_8, u16 VAR_9, u16 VAR_10,
       u16 VAR_11)
{
 struct b43_phy_ht *VAR_12 = VAR_8->phy.ht;
 u16 VAR_13;
 int VAR_14;

 for (VAR_14 = 0; VAR_14 < 3; VAR_14++) {
  if (VAR_12->bb_mult_save[VAR_14] < 0)
   VAR_12->bb_mult_save[VAR_14] = FUNC_1(VAR_8, FUNC_0(13, 0x63 + VAR_14 * 4));
 }

 FUNC_5(VAR_8, VAR_5, VAR_9 - 1);
 if (VAR_10 != 0xFFFF)
  VAR_10--;
 FUNC_5(VAR_8, VAR_6, VAR_10);
 FUNC_5(VAR_8, VAR_7, VAR_11);

 VAR_13 = FUNC_3(VAR_8, VAR_1);
 FUNC_4(VAR_8, VAR_1,
      VAR_2);


 FUNC_2(VAR_8, VAR_4, ~0);
 FUNC_2(VAR_8, VAR_4, ~0);
 FUNC_2(VAR_8, VAR_0, ~0);
 FUNC_4(VAR_8, VAR_4, 0x1);

 for (VAR_14 = 0; VAR_14 < 100; VAR_14++) {
  if (!(FUNC_3(VAR_8, VAR_3) & 1)) {
   VAR_14 = 0;
   break;
  }
  FUNC_7(10);
 }
 if (VAR_14)
  FUNC_6(VAR_8->wl, "run samples timeout\n");

 FUNC_5(VAR_8, VAR_1, VAR_13);
}
