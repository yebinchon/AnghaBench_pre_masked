
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; int* reg; int pending_ints; unsigned int v_counter; int pending; } ;
struct TYPE_4__ {TYPE_1__ video; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,unsigned int,int,...) ;
 unsigned int* VAR_4 ;
 unsigned int* VAR_5 ;
 int VAR_6 ;

unsigned int FUNC_3(unsigned int VAR_7)
{
  unsigned int VAR_8;
  VAR_7&=0x1d;

  switch (VAR_7)
  {
    case 0: return FUNC_1() >> 8;
    case 1: return FUNC_1() & 0xff;
    case 4:
      VAR_8 = VAR_2.video.status >> 8;
      if (VAR_8&1) VAR_2.video.status&=~0x100;
      VAR_2.video.pending = 0;
      FUNC_2(VAR_1, "SR read (h): %02x @ %06x", VAR_8, VAR_3);
      return VAR_8;
    case 5:
      VAR_8 = VAR_2.video.status & 0xff;

      VAR_8 |= ((VAR_2.video.reg[1]&0x40)^0x40) >> 3;
      VAR_8 |= (VAR_2.video.pending_ints&0x20)<<2;
      if (FUNC_0() - VAR_6 >= 488-88) VAR_8 |= 4;
      VAR_2.video.pending = 0;
      FUNC_2(VAR_1, "SR read (l): %02x @ %06x", VAR_8, VAR_3);
      return VAR_8;
    case 8:
      FUNC_2(VAR_0, "vcounter: %02x (%i) @ %06x", VAR_2.video.v_counter, FUNC_0(), VAR_3);
      return VAR_2.video.v_counter;
    case 9:
      VAR_8 = (FUNC_0() - VAR_6) & 0x1ff;
      if (VAR_2.video.reg[12]&1)
           VAR_8 = VAR_5[VAR_8];
      else VAR_8 = VAR_4[VAR_8];
      FUNC_2(VAR_0, "hcounter: %02x (%i) @ %06x", VAR_8, FUNC_0(), VAR_3);
      return VAR_8;
  }

  return 0;
}
