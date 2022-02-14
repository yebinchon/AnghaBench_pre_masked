
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct brcms_phy {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct brcms_phy*,int) ;

__attribute__((used)) static u8 FUNC_1(struct brcms_phy *VAR_1, u8 VAR_2)
{
 u16 VAR_3;
 VAR_3 = FUNC_0(VAR_1, ((VAR_2 == VAR_0) ? 0x1ed : 0x1ee));

 VAR_3 = (VAR_3 & (0x7f << 8)) >> 8;
 return (u8) VAR_3;
}
