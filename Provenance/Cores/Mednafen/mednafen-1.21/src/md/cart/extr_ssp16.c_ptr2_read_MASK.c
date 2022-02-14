
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned short u32 ;
struct TYPE_4__ {size_t* r0; size_t* r1; int * RAM1; int * RAM0; } ;
struct TYPE_3__ {scalar_t__ iram_rom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int,char*,int ) ;
 TYPE_2__* VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static u32 FUNC_2(int VAR_4)
{
 int VAR_5 = 0, VAR_6 = (VAR_4&3) | ((VAR_4>>6)&4) | ((VAR_4<<1)&0x18);
 switch (VAR_6)
 {

  case 0x00:
  case 0x01:
  case 0x02: VAR_5 = VAR_2->RAM0[VAR_2->r0[VAR_6&3]]++; break;
  case 0x03: VAR_5 = VAR_2->RAM0[0]++; break;
  case 0x04:
  case 0x05:
  case 0x06: VAR_5 = VAR_2->RAM1[VAR_2->r1[VAR_6&3]]++; break;
  case 0x07: VAR_5 = VAR_2->RAM1[0]++; break;

  case 0x0b: VAR_5 = VAR_2->RAM0[1]++; break;
  case 0x0f: VAR_5 = VAR_2->RAM1[1]++; break;

  case 0x13: VAR_5 = VAR_2->RAM0[2]++; break;
  case 0x17: VAR_5 = VAR_2->RAM1[2]++; break;

  case 0x1b: VAR_5 = VAR_2->RAM0[3]++; break;
  case 0x1f: VAR_5 = VAR_2->RAM1[3]++; break;
  default: FUNC_1(VAR_1|VAR_0, "ssp FIXME: invalid mod in ((rX))? @ %04x", FUNC_0());
             return 0;
 }

 return ((unsigned short *)VAR_3->iram_rom)[VAR_5];
}
