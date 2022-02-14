
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct PicoVideo {int* reg; } ;
struct TYPE_2__ {int* vram; struct PicoVideo video; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int,int) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(int VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
  struct PicoVideo *VAR_9=&VAR_3.video;
  int VAR_10,VAR_11,VAR_12,VAR_13=0;
  int VAR_14=-1;


  if (VAR_9->reg[12]&1)
  {
    VAR_12=(VAR_9->reg[3]&0x3c)<<9;
    VAR_12+=(VAR_0>>3)<<6;
  }
  else
  {
    VAR_12=(VAR_9->reg[3]&0x3e)<<9;
    VAR_12+=(VAR_0>>3)<<5;
  }

  VAR_10=VAR_5<<1;

  if (!(VAR_4 & VAR_2)) {

    VAR_13=VAR_3.vram[VAR_12+VAR_10];

    if ((VAR_13>>15) != VAR_7) return;
  }

  VAR_6<<=1;
  VAR_11=(VAR_0&7)<<1;


  if (!VAR_8)
  {
    for (; VAR_10 < VAR_6; VAR_10++)
    {
      int VAR_15=0,VAR_16=0;
      int VAR_17;

      VAR_13=VAR_3.vram[VAR_12+VAR_10];
      if (VAR_13==VAR_14) continue;
      if ((VAR_13>>15) != VAR_7) {
        VAR_4 |= VAR_2;
        continue;
      }

      VAR_17=((VAR_13>>9)&0x30);


      VAR_15=(VAR_13&0x7ff)<<4;
      if (VAR_13&0x1000) VAR_15+=14-VAR_11; else VAR_15+=VAR_11;

      if (VAR_13&0x0800) VAR_16=FUNC_0(8+(VAR_10<<3),VAR_15,VAR_17);
      else VAR_16=FUNC_1(8+(VAR_10<<3),VAR_15,VAR_17);

      if (VAR_16) VAR_14=VAR_13;
    }
  }
  else
  {
    for (; VAR_10 < VAR_6; VAR_10++)
    {
      int VAR_18=0,VAR_19=0;
      int VAR_20;

      VAR_13=VAR_3.vram[VAR_12+VAR_10];
      if(VAR_13==VAR_14) continue;
      if((VAR_13>>15) != VAR_7) {
        VAR_4 |= VAR_2;
        continue;
      }

      VAR_20=((VAR_13>>9)&0x30);

      if (VAR_7) {
        int *VAR_21 = (int *)(VAR_1+8+(VAR_10<<3));
        *VAR_21++ &= 0xbfbfbfbf;
        *VAR_21 &= 0xbfbfbfbf;
      } else {
        VAR_20 |= 0x40;
      }


      VAR_18=(VAR_13&0x7ff)<<4;
      if (VAR_13&0x1000) VAR_18+=14-VAR_11; else VAR_18+=VAR_11;

      if (VAR_13&0x0800) VAR_19=FUNC_0(8+(VAR_10<<3),VAR_18,VAR_20);
      else VAR_19=FUNC_1(8+(VAR_10<<3),VAR_18,VAR_20);

      if (VAR_19) VAR_14=VAR_13;
    }
  }
}
