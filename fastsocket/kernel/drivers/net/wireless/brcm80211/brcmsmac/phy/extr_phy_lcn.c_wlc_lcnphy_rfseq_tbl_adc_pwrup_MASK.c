
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct brcms_phy {int dummy; } ;


 int FUNC_0 (struct brcms_phy*,int) ;

__attribute__((used)) static u16 FUNC_1(struct brcms_phy *VAR_0)
{
 u16 VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
 VAR_1 = ((FUNC_0(VAR_0, 0x4a5) & (0xff << 0))
       >> 0);
 VAR_2 = 1 << ((FUNC_0(VAR_0, 0x4a5) & (0x7 << 12))
     >> 12);
 VAR_3 = ((FUNC_0(VAR_0, 0x40d) & (0xff << 0))
       >> 0);
 VAR_4 = 1 << ((FUNC_0(VAR_0, 0x40d) & (0x7 << 8))
     >> 8);
 VAR_5 = ((FUNC_0(VAR_0, 0x4a2) & (0xff << 0))
       >> 0);
 VAR_6 = 1 << ((FUNC_0(VAR_0, 0x4a2) & (0x7 << 8))
     >> 8);
 VAR_7 = 2 * (VAR_1 + VAR_2 + VAR_3 + VAR_4 + 2 * (VAR_5 + VAR_6)) + 80;
 if (VAR_7 < 1600)
  VAR_7 = 1600;
 return VAR_7;
}
