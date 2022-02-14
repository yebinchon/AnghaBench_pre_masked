
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct b43legacy_wldev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct b43legacy_wldev*,int ,int) ;
 int FUNC_1 (struct b43legacy_wldev*,int ,int,int) ;

void FUNC_2(struct b43legacy_wldev *VAR_1, u32 VAR_2)
{
 u16 VAR_3;

 VAR_2 <<= 8;
 VAR_3 = FUNC_0(VAR_1, VAR_0, 0x0022) & 0xFCFF;
 FUNC_1(VAR_1, VAR_0, 0x0022, VAR_3 | VAR_2);
 VAR_3 = FUNC_0(VAR_1, VAR_0, 0x03A8) & 0xFCFF;
 FUNC_1(VAR_1, VAR_0, 0x03A8, VAR_3 | VAR_2);
 VAR_3 = FUNC_0(VAR_1, VAR_0, 0x0054) & 0xFCFF;
 FUNC_1(VAR_1, VAR_0, 0x0054, VAR_3 | VAR_2);
}
