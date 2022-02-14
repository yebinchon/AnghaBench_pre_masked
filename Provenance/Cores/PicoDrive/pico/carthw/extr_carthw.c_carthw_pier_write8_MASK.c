
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int romsize; scalar_t__ rom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (int,int) ;
 int VAR_4 ;
 int FUNC_1 (int ,int,int,scalar_t__,int ) ;
 int FUNC_2 (int,char*,int,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;

__attribute__((used)) static void FUNC_3(u32 VAR_8, u32 VAR_9)
{
  u32 VAR_10, VAR_11, VAR_12;

  if ((VAR_8 & 0xffff00) != 0xa13000) {
    FUNC_0(VAR_8, VAR_9);
    return;
  }

  VAR_10 = VAR_8 & 0x0f;
  VAR_7[VAR_10 / 2] = VAR_9;

      FUNC_2(VAR_2, "pier w8  [%06x] %02x @%06x", VAR_8, VAR_9 & 0xffff, VAR_4);
  switch (VAR_10) {
    case 0x01:
      break;
    case 0x03:
      if (!(VAR_7[0] & 2))
        goto unmapped;
      VAR_11 = 0x280000;
      VAR_12 = VAR_9 << 19;
      goto do_map;
    case 0x05:
      if (!(VAR_7[0] & 2))
        goto unmapped;
      VAR_11 = 0x300000;
      VAR_12 = VAR_9 << 19;
      goto do_map;
    case 0x07:
      if (!(VAR_7[0] & 2))
        goto unmapped;
      VAR_11 = 0x380000;
      VAR_12 = VAR_9 << 19;
      goto do_map;
    case 0x09:

      break;
    case 0x0b:

    default:
    unmapped:

      FUNC_2(VAR_1, "-- unmapped w8 [%06x] %02x @%06x", VAR_8, VAR_9 & 0xffff, VAR_4);
      break;
  }
  return;

do_map:
  if (VAR_12 + 0x80000 > VAR_3.romsize) {
    FUNC_2(VAR_0|VAR_1, "pier: missing bank @ %06x", VAR_12);
    return;
  }
  FUNC_1(VAR_6, VAR_11, VAR_11 + 0x80000 - 1, VAR_3.rom + VAR_12, 0);
  FUNC_1(VAR_5, VAR_11, VAR_11 + 0x80000 - 1, VAR_3.rom + VAR_12, 0);
}
