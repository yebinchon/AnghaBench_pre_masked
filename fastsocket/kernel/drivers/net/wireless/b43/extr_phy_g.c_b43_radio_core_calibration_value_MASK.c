
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct b43_wldev {int dummy; } ;


 int FUNC_0 (struct b43_wldev*,int) ;

__attribute__((used)) static u16 FUNC_1(struct b43_wldev *VAR_0)
{
 u16 VAR_1, VAR_2, VAR_3;

 static const u8 VAR_4[] = {
  0x02, 0x03, 0x01, 0x0F,
  0x06, 0x07, 0x05, 0x0F,
  0x0A, 0x0B, 0x09, 0x0F,
  0x0E, 0x0F, 0x0D, 0x0F,
 };

 VAR_1 = FUNC_0(VAR_0, 0x60);
 VAR_2 = (VAR_1 & 0x001E) >> 1;
 VAR_3 = VAR_4[VAR_2] << 1;
 VAR_3 |= (VAR_1 & 0x0001);
 VAR_3 |= 0x0020;

 return VAR_3;
}
