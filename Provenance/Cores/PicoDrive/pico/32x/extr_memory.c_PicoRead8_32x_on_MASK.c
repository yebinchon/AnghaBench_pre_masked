
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int* pal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (int ,char*,int,int,...) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int* VAR_6 ;

__attribute__((used)) static u32 FUNC_5(u32 VAR_7)
{
  u32 VAR_8 = 0;
  if ((VAR_7 & 0xffc0) == 0x5100) {
    VAR_8 = FUNC_3(VAR_7);
    goto out_16to8;
  }

  if ((VAR_7 & 0xfc00) != 0x5000) {
    if (VAR_4 & VAR_2)
      return FUNC_1(VAR_7);
    else
      return FUNC_0(VAR_7);
  }

  if ((VAR_7 & 0xfff0) == 0x5180) {
    VAR_8 = FUNC_4(VAR_7);
    goto out_16to8;
  }

  if ((VAR_7 & 0xfe00) == 0x5200) {
    VAR_8 = VAR_3->pal[(VAR_7 & 0x1ff) / 2];
    goto out_16to8;
  }

  if ((VAR_7 & 0xfffc) == 0x30ec) {
    VAR_8 = VAR_6[VAR_7 & 3];
    goto out;
  }

  FUNC_2(VAR_1, "m68k unmapped r8  [%06x] @%06x", VAR_7, VAR_5);
  return VAR_8;

out_16to8:
  if (VAR_7 & 1)
    VAR_8 &= 0xff;
  else
    VAR_8 >>= 8;

out:
  FUNC_2(VAR_0, "m68k 32x r8  [%06x]   %02x @%06x", VAR_7, VAR_8, VAR_5);
  return VAR_8;
}
