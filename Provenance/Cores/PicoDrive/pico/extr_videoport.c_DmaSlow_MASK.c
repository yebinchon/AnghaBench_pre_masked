
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef void* u16 ;
struct TYPE_6__ {unsigned int addr; unsigned char* reg; int type; int status; } ;
struct TYPE_5__ {int dma_xfers; int dirtyPal; } ;
struct TYPE_8__ {unsigned int romsize; void** vram; void** cram; void** vsram; TYPE_2__ video; TYPE_1__ m; scalar_t__ rom; scalar_t__ ram; } ;
struct TYPE_7__ {int* s68k_regs; int ** prg_ram_b; scalar_t__* word_ram1M; scalar_t__ word_ram2M; scalar_t__ bios; } ;


 int FUNC_0 () ;
 int FUNC_1 (unsigned int,unsigned int,int,unsigned char) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (unsigned int,int,void***,void***) ;
 TYPE_3__* VAR_7 ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int VAR_8 ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (void**,void**,int) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_7(int VAR_10)
{
  u16 *VAR_11=0, *VAR_12, *VAR_13;
  unsigned int VAR_14=VAR_5.video.addr, VAR_15, VAR_16;
  unsigned char VAR_17=VAR_5.video.reg[0xf];
  unsigned int VAR_18;

  VAR_18 =VAR_5.video.reg[0x15]<<1;
  VAR_18|=VAR_5.video.reg[0x16]<<9;
  VAR_18|=VAR_5.video.reg[0x17]<<17;

  FUNC_5(VAR_2, "DmaSlow[%i] %06x->%04x len %i inc=%i blank %i [%i] @ %06x",
    VAR_5.video.type, VAR_18, VAR_14, VAR_10, VAR_17, (VAR_5.video.status&8)||!(VAR_5.video.reg[1]&0x40),
    FUNC_4(), VAR_8);

  VAR_5.m.dma_xfers += VAR_10;
  FUNC_3(FUNC_0());

  if ((VAR_18&0xe00000)==0xe00000) {
    VAR_11=(u16 *)(VAR_5.ram+(VAR_18&0xfffe));
    VAR_12=(u16 *)(VAR_5.ram+0x10000);
  }
  else if (VAR_6 & VAR_3)
  {
    FUNC_5(VAR_2, "DmaSlow CD, r3=%02x", VAR_7->s68k_regs[3]);
    if(VAR_18<0x20000) {
      VAR_11=(u16 *)(VAR_7->bios+(VAR_18&~1));
      VAR_12=(u16 *)(VAR_7->bios+0x20000);
    } else if ((VAR_18&0xfc0000)==0x200000) {
      VAR_18 -= 2;
      if (!(VAR_7->s68k_regs[3]&4)) {
        VAR_11=(u16 *)(VAR_7->word_ram2M+(VAR_18&0x3fffe));
        VAR_12=(u16 *)(VAR_7->word_ram2M+0x40000);
      } else {
        if (VAR_18 < 0x220000) {
          int VAR_19 = VAR_7->s68k_regs[3]&1;
          VAR_11=(u16 *)(VAR_7->word_ram1M[VAR_19]+(VAR_18&0x1fffe));
          VAR_12=(u16 *)(VAR_7->word_ram1M[VAR_19]+0x20000);
        } else {
          FUNC_1(VAR_18, VAR_14, VAR_10, VAR_17);
          return;
        }
      }
    } else if ((VAR_18&0xfe0000)==0x020000) {
      u8 *VAR_20 = VAR_7->prg_ram_b[VAR_7->s68k_regs[3]>>6];
      VAR_11=(u16 *)(VAR_20+(VAR_18&0x1fffe));
      VAR_12=(u16 *)(VAR_20+0x20000);
    } else {
      FUNC_5(VAR_2|VAR_0, "DmaSlow[%i] %06x->%04x: FIXME: unsupported src", VAR_5.video.type, VAR_18, VAR_14);
      return;
    }
  }
  else
  {

    if (&FUNC_2 && FUNC_2(VAR_18, VAR_10, &VAR_11, &VAR_12));
    else if (VAR_18<VAR_5.romsize) {
      VAR_11=(u16 *)(VAR_5.rom+(VAR_18&~1));
      VAR_12=(u16 *)(VAR_5.rom+VAR_5.romsize);
    }
    else {
      FUNC_5(VAR_2|VAR_0, "DmaSlow[%i] %06x->%04x: invalid src", VAR_5.video.type, VAR_18, VAR_14);
      return;
    }
  }


  if (VAR_10 > VAR_12 - VAR_11) {
    VAR_10 = VAR_12 - VAR_11;
    FUNC_5(VAR_2|VAR_0, "DmaSlow overflow");
  }

  switch (VAR_5.video.type)
  {
    case 1:
      VAR_13 = VAR_5.vram;
      if (VAR_17 == 2 && !(VAR_14&1) && VAR_14+VAR_10*2 < 0x10000)
      {

        FUNC_6(VAR_13 + (VAR_14>>1), VAR_11, VAR_10);
        VAR_14 += VAR_10*2;
      }
      else
      {
        for(; VAR_10; VAR_10--)
        {
          VAR_16=*VAR_11++;
          if(VAR_14&1) VAR_16=(VAR_16<<8)|(VAR_16>>8);
          VAR_13[VAR_14>>1] = (u16)VAR_16;

          VAR_14=(u16)(VAR_14+VAR_17);


        }
      }
      VAR_9 |= VAR_4;
      break;

    case 3:
      VAR_5.m.dirtyPal = 1;
      VAR_13 = VAR_5.cram;
      for(VAR_15=VAR_14&0x7f; VAR_10; VAR_10--)
      {
        VAR_13[VAR_15>>1] = (u16)*VAR_11++;

        VAR_15+=VAR_17;



        if(VAR_15 >= 0x80) break;
      }
      VAR_14=(VAR_14&0xff00)|VAR_15;
      break;

    case 5:
      VAR_13 = VAR_5.vsram;
      for(VAR_15=VAR_14&0x7f; VAR_10; VAR_10--)
      {
        VAR_13[VAR_15>>1] = (u16)*VAR_11++;

        VAR_15+=VAR_17;



        if(VAR_15 >= 0x80) break;
      }
      VAR_14=(VAR_14&0xff00)|VAR_15;
      break;

    default:
      if (VAR_5.video.type != 0 || (VAR_1 & VAR_2))
        FUNC_5(VAR_2|VAR_0, "DMA with bad type %i", VAR_5.video.type);
      break;
  }

  VAR_5.video.addr=(u16)VAR_14;
}
