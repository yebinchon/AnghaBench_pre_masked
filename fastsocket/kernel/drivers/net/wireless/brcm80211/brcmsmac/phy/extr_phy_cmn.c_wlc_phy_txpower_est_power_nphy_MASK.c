
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct brcms_phy {int dummy; } ;
typedef int s16 ;


 int FUNC_0 (struct brcms_phy*,int) ;

__attribute__((used)) static u32 FUNC_1(struct brcms_phy *VAR_0)
{
 s16 VAR_1, VAR_2;
 u16 VAR_3, VAR_4;
 u8 VAR_5, VAR_6, VAR_7, VAR_8;
 u32 VAR_9;

 VAR_3 = FUNC_0(VAR_0, 0x118);
 VAR_4 = FUNC_0(VAR_0, 0x119);

 if ((VAR_3 & (0x1 << 8)) == (0x1 << 8))
  VAR_5 = (u8) (VAR_3 & (0xff << 0)) >> 0;
 else
  VAR_5 = 0x80;

 if ((VAR_4 & (0x1 << 8)) == (0x1 << 8))
  VAR_6 = (u8) (VAR_4 & (0xff << 0)) >> 0;
 else
  VAR_6 = 0x80;

 VAR_1 = FUNC_0(VAR_0, 0x1ed);
 VAR_2 = FUNC_0(VAR_0, 0x1ee);

 if ((VAR_1 & (0x1 << 15)) == (0x1 << 15))
  VAR_7 = (u8) (VAR_1 & (0xff << 0)) >> 0;
 else
  VAR_7 = 0x80;
 if ((VAR_2 & (0x1 << 15)) == (0x1 << 15))
  VAR_8 = (u8) (VAR_2 & (0xff << 0)) >> 0;
 else
  VAR_8 = 0x80;

 VAR_9 = (u32) ((VAR_5 << 24) | (VAR_6 << 16) | (VAR_7 << 8) |
    VAR_8);

 return VAR_9;
}
