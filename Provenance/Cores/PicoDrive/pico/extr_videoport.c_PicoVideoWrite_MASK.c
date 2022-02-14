
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct PicoVideo {int* reg; int pending; int command; int addr; int status; int lwrite_cnt; int type; int pending_ints; } ;
struct TYPE_3__ {int scanline; int dirtyPal; } ;
struct TYPE_4__ {unsigned short* vsram; TYPE_1__ m; struct PicoVideo video; } ;


 int FUNC_0 () ;
 int FUNC_1 (unsigned short) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_7 ;
 int FUNC_7 () ;
 int FUNC_8 (unsigned short) ;
 int FUNC_9 (int ,char*,int,unsigned short,int,...) ;
 int VAR_8 ;
 int VAR_9 ;

void FUNC_10(unsigned int VAR_10,unsigned short VAR_11)
{
  struct PicoVideo *VAR_12=&VAR_5.video;



  VAR_10&=0x1c;

  if (VAR_10==0x00)
  {

    if (VAR_5.m.scanline < 224 && (VAR_12->reg[1]&0x40) &&
        !(!VAR_12->pending &&
          ((VAR_12->command & 0xc00000f0) == 0x40000010 && VAR_5.vsram[VAR_12->addr>>1] == VAR_11))
       )
      FUNC_2(0);

    if (VAR_12->pending) {
      FUNC_0();
      VAR_12->pending=0;
    }


    if ((VAR_12->command&0x80) && (VAR_12->reg[1]&0x10) && (VAR_12->reg[0x17]>>6)==2)
    {
      FUNC_1(VAR_11);
    }
    else
    {

      if (!(VAR_12->status&8) && (VAR_12->reg[1]&0x40) && !(VAR_6&VAR_4))
      {
        VAR_12->status&=~0x200;
        VAR_12->lwrite_cnt++;
        if (VAR_12->lwrite_cnt >= 4) VAR_12->status|=0x100;
        if (VAR_12->lwrite_cnt > 4) {
          FUNC_3(32);
        }
        FUNC_9(VAR_1, "VDP data write: %04x [%06x] {%i} #%i @ %06x", VAR_11, VAR_5.video.addr,
                 VAR_5.video.type, VAR_12->lwrite_cnt, VAR_7);
      }
      FUNC_8(VAR_11);
    }
    return;
  }

  if (VAR_10==0x04)
  {
    if (VAR_12->pending)
    {
      if (VAR_11 & 0x80) FUNC_2(0);

      VAR_12->command&=0xffff0000;
      VAR_12->command|=VAR_11;
      VAR_12->pending=0;
      FUNC_0();
    }
    else
    {
      if ((VAR_11&0xc000)==0x8000)
      {

        int VAR_13=(VAR_11>>8)&0x1f;
        int VAR_14=VAR_12->reg[VAR_13];
        int VAR_15 = 0;
        VAR_12->type=0;
        if (VAR_13 > 0x0a && !(VAR_12->reg[1]&4)) {
          FUNC_9(VAR_0, "%02x written to reg %02x in SMS mode @ %06x", VAR_11, VAR_13, VAR_7);
          return;
        }

        if (VAR_13 == 1 && !(VAR_11&0x40) && FUNC_4() - VAR_8 <= 488-390)
          VAR_15 = 1;
        FUNC_2(VAR_15);
        VAR_12->reg[VAR_13]=(unsigned char)VAR_11;
        switch (VAR_13)
        {
          case 0x00:
            FUNC_9(VAR_2, "hint_onoff: %i->%i [%i] pend=%i @ %06x", (VAR_14&0x10)>>4,
                    (VAR_11&0x10)>>4, FUNC_4(), (VAR_12->pending_ints&0x10)>>4, VAR_7);
            goto update_irq;
          case 0x01:
            FUNC_9(VAR_2, "vint_onoff: %i->%i [%i] pend=%i @ %06x", (VAR_14&0x20)>>5,
                    (VAR_11&0x20)>>5, FUNC_4(), (VAR_12->pending_ints&0x20)>>5, VAR_7);
            goto update_irq;
          case 0x05:

            if (VAR_11^VAR_14) VAR_9 |= VAR_3;
            break;
          case 0x0c:

            if ((VAR_11^VAR_14)&8) VAR_5.m.dirtyPal = 2;
            break;
        }
        return;

update_irq:


        if (!FUNC_7())
        {
          int VAR_16, VAR_17, VAR_18=0;
          VAR_16 = (VAR_12->reg[1] & 0x20) | (VAR_12->reg[0] & 0x10);
          VAR_17 = (VAR_12->pending_ints&VAR_16);
               if (VAR_17 & 0x20) VAR_18 = 6;
          else if (VAR_17 & 0x10) VAR_18 = 4;
          FUNC_6(VAR_18);

          if (VAR_18) FUNC_5(24);
        }

      }
      else
      {

        VAR_12->command&=0x0000ffff;
        VAR_12->command|=VAR_11<<16;
        VAR_12->pending=1;
      }
    }
  }
}
