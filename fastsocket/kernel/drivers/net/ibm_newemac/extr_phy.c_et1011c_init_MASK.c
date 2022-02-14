
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mii_phy {int dummy; } ;


 scalar_t__ FUNC_0 (struct mii_phy*,int) ;
 int FUNC_1 (struct mii_phy*,int,int) ;

__attribute__((used)) static int FUNC_2(struct mii_phy *VAR_0)
{
 u16 VAR_1;

 VAR_1 = (u16)(FUNC_0(VAR_0, 0x16));
 VAR_1 &= ~(0x7);
 VAR_1 |= 0x6;
 FUNC_1(VAR_0, 0x16, VAR_1);

 VAR_1 = (u16)(FUNC_0(VAR_0, 0x17));
 VAR_1 &= ~(0x40);
 FUNC_1(VAR_0, 0x17, VAR_1);

 FUNC_1(VAR_0, 0x1c, 0x74f0);
 return 0;
}
