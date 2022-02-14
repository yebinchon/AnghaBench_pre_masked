
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,int,...) ;
 int* VAR_4 ;

u32 FUNC_1(u32 VAR_5)
{
  u32 VAR_6 = 0;
  if ((VAR_5 & 0xffc0) == 0x5100) {

    VAR_6 = ((u8 *)VAR_2.regs)[(VAR_5 & 0x3f) ^ 1];
    goto out;
  }

  if ((VAR_5 & 0xfffc) == 0x30ec) {
    VAR_6 = VAR_4[VAR_5 & 3];
    goto out;
  }

  FUNC_0(VAR_1, "m68k unmapped r8  [%06x] @%06x", VAR_5, VAR_3);
  return VAR_6;

out:
  FUNC_0(VAR_0, "m68k 32x r8  [%06x]   %02x @%06x", VAR_5, VAR_6, VAR_3);
  return VAR_6;
}
