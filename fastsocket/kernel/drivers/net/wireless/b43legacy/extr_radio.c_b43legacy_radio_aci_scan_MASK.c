
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct b43legacy_phy {unsigned int channel; scalar_t__ type; scalar_t__ rev; } ;
struct b43legacy_wldev {struct b43legacy_phy phy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct b43legacy_wldev*) ;
 int FUNC_2 (struct b43legacy_wldev*,int) ;
 int FUNC_3 (struct b43legacy_wldev*) ;
 int FUNC_4 (struct b43legacy_wldev*,int,int) ;
 int FUNC_5 (struct b43legacy_wldev*,unsigned int) ;
 int FUNC_6 (struct b43legacy_wldev*) ;
 int FUNC_7 (struct b43legacy_wldev*,unsigned int,int ) ;
 int FUNC_8 (struct b43legacy_wldev*) ;
 int FUNC_9 (struct b43legacy_wldev*,int,int,int) ;
 int FUNC_10 (struct b43legacy_wldev*) ;

u8 FUNC_11(struct b43legacy_wldev *VAR_2)
{
 struct b43legacy_phy *VAR_3 = &VAR_2->phy;
 u8 VAR_4[13];
 unsigned int VAR_5 = VAR_3->channel;
 unsigned int VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;

 if (!((VAR_3->type == VAR_0) && (VAR_3->rev > 0)))
  return 0;

 FUNC_1(VAR_2);
 FUNC_6(VAR_2);
 FUNC_4(VAR_2, 0x0802,
       FUNC_2(VAR_2, 0x0802) & 0xFFFC);
 FUNC_4(VAR_2, VAR_1,
       FUNC_2(VAR_2, VAR_1)
       & 0x7FFF);
 FUNC_9(VAR_2, 3, 8, 1);

 VAR_8 = (VAR_5 - 5 > 0) ? VAR_5 - 5 : 1;
 VAR_9 = (VAR_5 + 5 < 14) ? VAR_5 + 5 : 13;

 for (VAR_6 = VAR_8; VAR_6 <= VAR_9; VAR_6++) {
  if (FUNC_0(VAR_5 - VAR_6) > 2)
   VAR_4[VAR_6-1] = FUNC_5(VAR_2, VAR_6);
 }
 FUNC_7(VAR_2, VAR_5, 0);
 FUNC_4(VAR_2, 0x0802,
       (FUNC_2(VAR_2, 0x0802) & 0xFFFC)
       | 0x0003);
 FUNC_4(VAR_2, 0x0403,
       FUNC_2(VAR_2, 0x0403) & 0xFFF8);
 FUNC_4(VAR_2, VAR_1,
       FUNC_2(VAR_2, VAR_1)
       | 0x8000);
 FUNC_10(VAR_2);
 for (VAR_6 = 0; VAR_6 < 13; VAR_6++) {
  if (!VAR_4[VAR_6])
   continue;
  VAR_9 = (VAR_6 + 5 < 13) ? VAR_6 + 5 : 13;
  for (VAR_7 = VAR_6; VAR_7 < VAR_9; VAR_7++)
   VAR_4[VAR_7] = 1;
 }
 FUNC_8(VAR_2);
 FUNC_3(VAR_2);

 return VAR_4[VAR_5 - 1];
}
