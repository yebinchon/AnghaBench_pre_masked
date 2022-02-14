
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int rotate; int z80Run; int z80_reset; } ;
struct TYPE_4__ {TYPE_1__ m; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,int,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

u32 FUNC_5(u32 VAR_5)
{
  u32 VAR_6;

  if ((VAR_5 & 0xffe0) == 0x0000) {
    VAR_6 = FUNC_3(VAR_5);
    VAR_6 |= VAR_6 << 8;
    goto end;
  }


  VAR_6 = (VAR_2.m.rotate += 0x41);
  VAR_6 ^= (VAR_6 << 5) ^ (VAR_6 << 8);


  if ((VAR_5 & 0xfc00) == 0x1000) {
    VAR_6 &= ~0x0100;

    if ((VAR_5 & 0xff00) == 0x1100) {
      VAR_6 |= ((VAR_2.m.z80Run | VAR_2.m.z80_reset) & 1) << 8;
      FUNC_2(VAR_0, "get_zrun: %04x [%i] @%06x", VAR_6, FUNC_1(), VAR_4);
    }
    goto end;
  }

  if (VAR_3 & VAR_1) {
    VAR_6 = FUNC_0(VAR_5);
    goto end;
  }

  VAR_6 = FUNC_4(VAR_5);
end:
  return VAR_6;
}
