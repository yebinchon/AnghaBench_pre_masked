
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int,int ) ;

__attribute__((used)) static void FUNC_1(u32 VAR_2, u32 VAR_3)
{
  switch (VAR_2 & ~0x800000) {
    case 0x19: case 0x1b: case 0x1d: case 0x1f: break;
    default:
      FUNC_0(VAR_0, "m68k unmapped w8  [%06x]   %02x @%06x", VAR_2, VAR_3 & 0xff, VAR_1);
      break;
  }
}
