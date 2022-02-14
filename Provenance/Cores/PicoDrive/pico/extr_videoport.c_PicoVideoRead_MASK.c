
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct PicoVideo {unsigned int status; int* reg; int pending_ints; int v_counter; scalar_t__ pending; } ;
struct TYPE_2__ {struct PicoVideo video; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 unsigned int FUNC_1 () ;
 int FUNC_2 (int ,char*,unsigned int,int,...) ;
 unsigned int* VAR_4 ;
 unsigned int* VAR_5 ;
 int VAR_6 ;

unsigned int FUNC_3(unsigned int VAR_7)
{
  VAR_7&=0x1c;

  if (VAR_7==0x04)
  {
    struct PicoVideo *VAR_8=&VAR_2.video;
    unsigned int VAR_9;
    VAR_9=VAR_8->status;

    if (FUNC_0() - VAR_6 >= 488-88)
      VAR_9|=0x0004;

    VAR_9 |= ((VAR_8->reg[1]&0x40)^0x40) >> 3;
    VAR_9 |= (VAR_8->pending_ints&0x20)<<2;
    if (VAR_9&0x100) VAR_8->status&=~0x100;

    VAR_8->pending = 0;

    FUNC_2(VAR_1, "SR read: %04x @ %06x", VAR_9, VAR_3);
    return VAR_9;
  }
  if ((VAR_7&0x1c)==0x08)
  {
    unsigned int VAR_10;

    VAR_10 = (FUNC_0() - VAR_6) & 0x1ff;
    if (VAR_2.video.reg[12]&1)
         VAR_10 = VAR_5[VAR_10];
    else VAR_10 = VAR_4[VAR_10];

    FUNC_2(VAR_0, "hv: %02x %02x (%i) @ %06x", VAR_10, VAR_2.video.v_counter, FUNC_0(), VAR_3);
    return VAR_10 | (VAR_2.video.v_counter << 8);
  }

  if (VAR_7==0x00)
  {
    return FUNC_1();
  }

  return 0;
}
