
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct brcms_phy {int dummy; } ;


 int FUNC_0 (struct brcms_phy*,int,int,int) ;
 int FUNC_1 (struct brcms_phy*,int) ;

__attribute__((used)) static void FUNC_2(struct brcms_phy *VAR_0, u16 VAR_1)
{
 u16 VAR_2;

 VAR_2 = (FUNC_1(VAR_0, 0x439) >> 0);
 VAR_2 = VAR_2 & 0xc7f;
 VAR_2 = VAR_2 | (VAR_1 << 7);
 FUNC_0(VAR_0, 0x439, (0xfff << 0), (VAR_2) << 0);

}
