
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct b43legacy_phy {int dummy; } ;
struct b43legacy_wldev {struct b43legacy_phy phy; } ;
struct b43legacy_lopair {int dummy; } ;


 int FUNC_0 (int) ;
 struct b43legacy_lopair* FUNC_1 (struct b43legacy_phy*,int const,int) ;

__attribute__((used)) static inline
struct b43legacy_lopair *FUNC_2(struct b43legacy_wldev *VAR_0,
            u16 VAR_1,
            u16 VAR_2,
            u16 VAR_3)
{
 static const u8 VAR_4[10] = { 11, 10, 11, 12, 13, 12, 13, 12, 13, 12 };
 struct b43legacy_phy *VAR_5 = &VAR_0->phy;

 if (VAR_1 > 6)
  VAR_1 = 6;
 FUNC_0(VAR_2 >= 10);

 if (VAR_3 == 3)
  return FUNC_1(VAR_5, VAR_2, VAR_1);
 return FUNC_1(VAR_5, VAR_4[VAR_2], VAR_1);
}
