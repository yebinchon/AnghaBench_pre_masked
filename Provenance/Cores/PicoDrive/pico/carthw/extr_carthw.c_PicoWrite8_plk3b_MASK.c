
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int romsize; scalar_t__ rom; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,int,...) ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(u32 VAR_4, u32 VAR_5)
{
  int VAR_6;

  FUNC_0(VAR_1, "prot w8  [%06x]   %02x @%06x", VAR_4, VAR_5 & 0xff, VAR_3);
  VAR_6 = VAR_5 << 15;
  if (VAR_6 + 0x8000 > VAR_2.romsize) {
    FUNC_0(VAR_1|VAR_0, "prot_lk3: bank too large: %02x", VAR_5);
    return;
  }
  if (VAR_6 == 0)
    FUNC_1(VAR_2.rom, VAR_2.rom + VAR_2.romsize, 0x8000);
  else
    FUNC_1(VAR_2.rom, VAR_2.rom + VAR_6, 0x8000);
}
