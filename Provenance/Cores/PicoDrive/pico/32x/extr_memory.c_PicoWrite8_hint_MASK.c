
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int* m68k_rom; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,int,int ) ;

__attribute__((used)) static void FUNC_1(u32 VAR_3, u32 VAR_4)
{
  if ((VAR_3 & 0xfffc) == 0x0070) {
    VAR_1->m68k_rom[VAR_3 ^ 1] = VAR_4;
    return;
  }

  FUNC_0(VAR_0, "m68k unmapped w8  [%06x]   %02x @%06x",
    VAR_3, VAR_4 & 0xff, VAR_2);
}
