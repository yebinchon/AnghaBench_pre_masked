
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct net_device {scalar_t__ dev_addr; } ;


 int FUNC_0 (int*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(u8 *VAR_0, u16 VAR_1, struct net_device *VAR_2)
{
 FUNC_0(VAR_0, VAR_2->dev_addr, 3);
 FUNC_0(VAR_0 + 5, VAR_2->dev_addr + 3, 3);
 if (VAR_1 < 0x1000) {
  VAR_0[3] = VAR_1 >> 8;
  VAR_0[4] = VAR_1 & 0xff;
 } else {
  VAR_0[3] = 0xff;
  VAR_0[4] = 0xfe;
 }
 VAR_0[0] ^= 2;
}
