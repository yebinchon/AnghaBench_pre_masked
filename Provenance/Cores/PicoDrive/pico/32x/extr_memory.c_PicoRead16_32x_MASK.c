
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int* regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,int,...) ;

u32 FUNC_1(u32 VAR_4)
{
  u32 VAR_5 = 0;
  if ((VAR_4 & 0xffc0) == 0x5100) {
    VAR_5 = VAR_2.regs[(VAR_4 & 0x3f) / 2];
    goto out;
  }

  if ((VAR_4 & 0xfffc) == 0x30ec) {
    VAR_5 = !(VAR_4 & 2) ? ('M'<<8)|'A' : ('R'<<8)|'S';
    goto out;
  }

  FUNC_0(VAR_1, "m68k unmapped r16 [%06x] @%06x", VAR_4, VAR_3);
  return VAR_5;

out:
  FUNC_0(VAR_0, "m68k 32x r16 [%06x] %04x @%06x", VAR_4, VAR_5, VAR_3);
  return VAR_5;
}
