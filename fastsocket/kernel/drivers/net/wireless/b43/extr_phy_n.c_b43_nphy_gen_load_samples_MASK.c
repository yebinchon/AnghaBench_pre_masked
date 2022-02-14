
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ is_40mhz; } ;
struct b43_wldev {int wl; TYPE_1__ phy; } ;
struct b43_c32 {int q; int i; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int VAR_2 ;
 struct b43_c32 FUNC_1 (int) ;
 int FUNC_2 (struct b43_wldev*,struct b43_c32*,int) ;
 int FUNC_3 (struct b43_wldev*,int ) ;
 int FUNC_4 (int ,char*) ;
 struct b43_c32* FUNC_5 (int,int,int ) ;
 int FUNC_6 (struct b43_c32*) ;

__attribute__((used)) static u16 FUNC_7(struct b43_wldev *VAR_3, u32 VAR_4, u16 VAR_5,
     bool VAR_6)
{
 int VAR_7;
 u16 VAR_8, VAR_9, VAR_10, VAR_11;
 struct b43_c32 *VAR_12;


 VAR_8 = (VAR_3->phy.is_40mhz) ? 40 : 20;
 VAR_9 = VAR_8 << 3;

 if (VAR_6) {
  if (FUNC_3(VAR_3, VAR_0) & VAR_1)
   VAR_8 = 82;
  else
   VAR_8 = 80;

  if (VAR_3->phy.is_40mhz)
   VAR_8 <<= 1;

  VAR_9 = VAR_8 << 1;
 }

 VAR_12 = FUNC_5(VAR_9, sizeof(struct b43_c32), VAR_2);
 if (!VAR_12) {
  FUNC_4(VAR_3->wl, "allocation for samples generation failed\n");
  return 0;
 }
 VAR_10 = (((VAR_4 * 36) / VAR_8) << 16) / 100;
 VAR_11 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
  VAR_12[VAR_7] = FUNC_1(VAR_11);
  VAR_11 += VAR_10;
  VAR_12[VAR_7].q = FUNC_0(VAR_12[VAR_7].q * VAR_5);
  VAR_12[VAR_7].i = FUNC_0(VAR_12[VAR_7].i * VAR_5);
 }

 VAR_7 = FUNC_2(VAR_3, VAR_12, VAR_9);
 FUNC_6(VAR_12);
 return (VAR_7 < 0) ? 0 : VAR_9;
}
