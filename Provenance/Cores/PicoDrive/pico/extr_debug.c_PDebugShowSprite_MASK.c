
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct PicoVideo {int* reg; } ;
struct TYPE_2__ {int* cram; scalar_t__ vram; struct PicoVideo video; } ;


 int VAR_0 ;
 unsigned short* VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 unsigned char* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;

void FUNC_1(unsigned short *VAR_6, int VAR_7, int VAR_8)
{
  struct PicoVideo *VAR_9=&VAR_3.video;
  int VAR_10=0,VAR_11,VAR_12=0,*VAR_13=0,*VAR_14,VAR_15[2];
  int VAR_16,VAR_17,VAR_18 = 80, VAR_19, VAR_20;

  if (!(VAR_9->reg[12]&1))
    VAR_18 = 64;

  VAR_10=VAR_9->reg[5]&0x7f;
  if (VAR_9->reg[12]&1) VAR_10&=0x7e;
  VAR_10<<=8;

  for (VAR_11=0; VAR_11 < VAR_18 && VAR_11 <= VAR_8; VAR_11++)
  {
    VAR_13=(int *)(VAR_3.vram+((VAR_10+(VAR_12<<2))&0x7ffc));

    VAR_12=(VAR_13[0]>>16)&0x7f;
    if (!VAR_12) break;
  }
  if (VAR_11 >= VAR_18) return;

  VAR_14 = (int *)(VAR_3.vram+(VAR_10&0x7ffc));
  VAR_15[0] = VAR_14[0];
  VAR_15[1] = VAR_14[1];
  VAR_14[0] = (VAR_13[0] & ~0x007f01ff) | 0x000080;
  VAR_14[1] = (VAR_13[1] & ~0x01ff8000) | 0x800000;
  VAR_20 = VAR_9->reg[7];
  VAR_19 = VAR_3.cram[0];
  VAR_9->reg[7] = 0;
  VAR_3.cram[0] = 0;
  VAR_5 = VAR_2;

  FUNC_0();
  for (VAR_17 = 0; VAR_17 < 8*4; VAR_17++)
  {
    unsigned char *VAR_21 = VAR_4 + VAR_0*VAR_17 + 8;
    for (VAR_16 = 0; VAR_16 < 8*4; VAR_16++)
      if (VAR_21[VAR_16]) VAR_6[VAR_16] = VAR_1[VAR_21[VAR_16]], VAR_21[VAR_16] = 0;
    VAR_6 += VAR_7;
  }

  VAR_14[0] = VAR_15[0];
  VAR_14[1] = VAR_15[1];
  VAR_9->reg[7] = VAR_20;
  VAR_3.cram[0] = VAR_19;
  VAR_5 = -1;
}
