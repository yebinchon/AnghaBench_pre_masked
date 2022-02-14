
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int* vdp_regs; int dirty_pal; int pending_fb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static void FUNC_2(u32 VAR_7, u32 VAR_8)
{
  u16 *VAR_9 = VAR_6.vdp_regs;
  VAR_7 &= 0x0f;


  switch (VAR_7) {
    case 0x01:

      if ((VAR_9[0] ^ VAR_8) & VAR_3)
        VAR_6.dirty_pal = 1;
      VAR_9[0] = (VAR_9[0] & VAR_5) | (VAR_8 & 0xff);
      break;
    case 0x03:
      VAR_9[2 / 2] = VAR_8 & 1;
      break;
    case 0x05:
      VAR_9[4 / 2] = VAR_8 & 0xff;
      break;
    case 0x0b:
      VAR_8 &= 1;
      VAR_6.pending_fb = VAR_8;

      if (((VAR_9[0x0a/2] & VAR_4) || (VAR_9[0] & VAR_2) == 0) && ((VAR_9[0x0a/2] ^ VAR_8) & VAR_1)) {
        VAR_9[0x0a/2] ^= VAR_1;
        FUNC_0(VAR_8 ^ 1);
        FUNC_1(VAR_0, "VDP FS: %d", VAR_9[0x0a/2] & VAR_1);
      }
      break;
  }
}
