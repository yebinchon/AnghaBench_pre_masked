
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int romsize; scalar_t__ rom; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int,scalar_t__,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_2(u32 VAR_7, u32 VAR_8)
{
 int VAR_9, VAR_10 = VAR_5, VAR_11 = VAR_6;

 if (VAR_7 == 0x400000)
 {
  VAR_5 &= 0x0e0000;
  VAR_5 |= 0x300000 & (VAR_8 << 19);
  if (VAR_5 != VAR_10)
   FUNC_1(VAR_0, "write [%06x] %02x @ %06x", VAR_7, VAR_8, VAR_2);
 }
 else if (VAR_7 == 0x402000)
 {
  VAR_6 = (VAR_8 << 17) & 0x3e0000;
  if (VAR_6 != VAR_11)
   FUNC_1(VAR_0, "write [%06x] %02x @ %06x", VAR_7, VAR_8, VAR_2);
 }
 else if (VAR_7 == 0x404000)
 {
  VAR_5 &= 0x300000;
  VAR_5 |= 0x0e0000 & (VAR_8 << 17);
  if (VAR_5 != VAR_10)
   FUNC_1(VAR_0, "write [%06x] %02x @ %06x", VAR_7, VAR_8, VAR_2);
 }
 else
  FUNC_1(VAR_0, "realtec: unexpected write [%06x] %02x @ %06x", VAR_7, VAR_8, VAR_2);

 if (VAR_5 >= 0 && VAR_6 >= 0 &&
  (VAR_5 != VAR_10 || VAR_6 != VAR_11))
 {
  FUNC_1(VAR_0, "realtec: new bank %06x, size %06x", VAR_5, VAR_6, VAR_2);
  if (VAR_6 > VAR_1.romsize - VAR_5)
  {
   FUNC_1(VAR_0, "realtec: bank too large / out of range?");
   return;
  }

  for (VAR_9 = 0; VAR_9 < 0x400000; VAR_9 += VAR_6) {
   FUNC_0(VAR_4, VAR_9, VAR_6 - 1, VAR_1.rom + VAR_5, 0);
   FUNC_0(VAR_3, VAR_9, VAR_6 - 1, VAR_1.rom + VAR_5, 0);
  }
 }
}
