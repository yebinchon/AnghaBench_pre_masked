
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
struct TYPE_4__ {int* pad; } ;
struct TYPE_3__ {int sram; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int) ;
 TYPE_2__ VAR_8 ;
 int FUNC_1 (int) ;
 TYPE_1__ VAR_9 ;

__attribute__((used)) static uint32 FUNC_2(uint32 VAR_10)
{
  if (VAR_10 < 0x202000)
  {
    uint8 VAR_11 = 0xff;

    switch (VAR_10 & 0xff)
    {
      case 0x43:
      {
        if (VAR_8.pad[0] & VAR_0) VAR_11 &= ~0x80;
        if (VAR_8.pad[0] & VAR_1) VAR_11 &= ~0x10;
        if (VAR_8.pad[0] & VAR_6) VAR_11 &= ~0x20;
        break;
      }

      case 0x45:
      {
        if (VAR_8.pad[0] & VAR_7) VAR_11 &= ~0x08;
        if (VAR_8.pad[0] & VAR_3) VAR_11 &= ~0x10;
        break;
      }

      case 0x47:
      {
        if (VAR_8.pad[0] & VAR_5) VAR_11 &= ~0x03;
        break;
      }

      case 0x49:
      {
        if (VAR_8.pad[0] & VAR_4) VAR_11 &= ~0x03;
        if (VAR_8.pad[0] & VAR_2) VAR_11 &= ~0x01;
        break;
      }

      case 0x51:
      {
        VAR_11 = 0xA5;
        break;
      }

      default:
      {
        VAR_11 = FUNC_1(VAR_10);
        break;
      }
    }
    return VAR_11;
  }

  return FUNC_0(VAR_9.sram , VAR_10 & 0xffff);
}
