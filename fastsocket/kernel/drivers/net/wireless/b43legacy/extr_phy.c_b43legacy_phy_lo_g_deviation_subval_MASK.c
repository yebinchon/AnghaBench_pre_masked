
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43legacy_phy {scalar_t__ gmode; } ;
struct b43legacy_wldev {struct b43legacy_phy phy; } ;


 int FUNC_0 (struct b43legacy_wldev*,int) ;
 int FUNC_1 (struct b43legacy_wldev*,int,int) ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (int) ;

__attribute__((used)) static inline
u16 FUNC_6(struct b43legacy_wldev *VAR_0,
     u16 VAR_1)
{
 struct b43legacy_phy *VAR_2 = &VAR_0->phy;
 u16 VAR_3;
 unsigned long VAR_4;

 FUNC_4(VAR_4);
 if (VAR_2->gmode) {
  FUNC_1(VAR_0, 0x15, 0xE300);
  VAR_1 <<= 8;
  FUNC_1(VAR_0, 0x0812, VAR_1 | 0x00B0);
  FUNC_5(5);
  FUNC_1(VAR_0, 0x0812, VAR_1 | 0x00B2);
  FUNC_5(2);
  FUNC_1(VAR_0, 0x0812, VAR_1 | 0x00B3);
  FUNC_5(4);
  FUNC_1(VAR_0, 0x0015, 0xF300);
  FUNC_5(8);
 } else {
  FUNC_1(VAR_0, 0x0015, VAR_1 | 0xEFA0);
  FUNC_5(2);
  FUNC_1(VAR_0, 0x0015, VAR_1 | 0xEFE0);
  FUNC_5(4);
  FUNC_1(VAR_0, 0x0015, VAR_1 | 0xFFE0);
  FUNC_5(8);
 }
 VAR_3 = FUNC_0(VAR_0, 0x002D);
 FUNC_3(VAR_4);
 FUNC_2();

 return VAR_3;
}
