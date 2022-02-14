
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct PicoVideo {int* reg; } ;
struct TYPE_2__ {scalar_t__ vram; struct PicoVideo video; } ;


 int VAR_0 ;
 int** VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned char VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*,...) ;

void FUNC_1(int VAR_11)
{
  struct PicoVideo *VAR_12=&VAR_5.video;
  int VAR_13,VAR_14=0,VAR_15;
  int VAR_16=0;
  int *VAR_17 = VAR_2;
  int VAR_18 = 224, VAR_19 = 80, VAR_20 = 328;
  int VAR_21 = 20;

  if (!(VAR_5.video.reg[12]&1))
    VAR_19 = 64, VAR_21 = 16, VAR_20 = 264;
  if (VAR_6 & VAR_4)
    VAR_21 = VAR_3;

  if (VAR_12->reg[1]&8) VAR_18 = 240;
  VAR_15 = VAR_5.video.reg[0xC]&8;

  VAR_16=VAR_12->reg[5]&0x7f;
  if (VAR_12->reg[12]&1) VAR_16&=0x7e;
  VAR_16<<=8;

  if (!VAR_11)
  {
    int VAR_22;

    for (VAR_13=0; VAR_13 < VAR_19 && (VAR_22 = *VAR_17); VAR_13++, VAR_17+=2)
    {
      unsigned int *VAR_23;
      int VAR_24, VAR_25, VAR_26, VAR_27;

      VAR_23=(unsigned int *)(VAR_5.vram+((VAR_16+(VAR_14<<2))&0x7ffc));


      VAR_24 = VAR_23[1];
      VAR_25 = (VAR_24>>16)&0x1ff;
      VAR_25 -= 0x78;
      VAR_26 = (VAR_22 << 16) >> 16;
      VAR_27 = (VAR_22 >> 24) & 0xf;

      if (VAR_26 < VAR_18 && VAR_26 + (VAR_27<<3) > VAR_0 &&
          (VAR_25 > -24 || VAR_25 < VAR_20))
      {
        int VAR_28 = (VAR_26 >= VAR_0) ? VAR_26 : VAR_0;
        int VAR_29 = ((VAR_17 - VAR_2) / 2) | ((VAR_24>>8)&0x80);
        for (; VAR_28 < VAR_26 + (VAR_27<<3) && VAR_28 < VAR_18; VAR_28++)
        {
          int VAR_30, VAR_31;
          VAR_31 = VAR_1[VAR_28][0] & 0x7f;
          if (VAR_31 >= VAR_21) continue;

          for (VAR_30 = 0; VAR_30 < VAR_31; VAR_30++)
            if (((VAR_1[VAR_28][3+VAR_30] ^ VAR_29) & 0x7f) == 0) goto found;


          VAR_1[VAR_28][3+VAR_31] = VAR_29;
          VAR_1[VAR_28][0] = VAR_31 + 1;
found:;
          if (VAR_29 & 0x80)
               VAR_1[VAR_28][1] |= VAR_7;
          else VAR_1[VAR_28][1] |= VAR_8;
        }
      }

      VAR_24 &= ~0xfe000000;
      VAR_24 -= 0x00780000;
      VAR_17[1] = VAR_24;


      VAR_14=(VAR_23[0]>>16)&0x7f;
      if (!VAR_14) break;
    }
  }
  else
  {
    for (VAR_13 = 0; VAR_13 < VAR_18; VAR_13++)
      *((int *)&VAR_1[VAR_13][0]) = 0;

    for (VAR_13 = 0; VAR_13 < VAR_19; VAR_13++)
    {
      unsigned int *VAR_32;
      int VAR_33, VAR_34, VAR_35, VAR_36, VAR_37, VAR_38, VAR_39;

      VAR_32=(unsigned int *)(VAR_5.vram+((VAR_16+(VAR_14<<2))&0x7ffc));


      VAR_33 = VAR_32[0];
      VAR_36 = (VAR_33&0x1ff)-0x80;
      VAR_37 = (VAR_33>>24)&0xf;
      VAR_38 = (VAR_37&3)+1;

      VAR_39 = (VAR_37>>2)+1;
      VAR_34 = VAR_32[1];
      VAR_35 = (VAR_34>>16)&0x1ff;
      VAR_35 -= 0x78;

      if (VAR_36 < VAR_18 && VAR_36 + (VAR_38<<3) > VAR_0)
      {
        int VAR_40, VAR_41, VAR_42, VAR_43, VAR_44 = 0;

        VAR_42 = 8-(VAR_39<<3);
        VAR_43 = VAR_42 < VAR_35 && VAR_35 < VAR_20;
        if (VAR_15 && (VAR_34 & 0x6000) == 0x6000)
          VAR_44 = VAR_10;

        VAR_40 = ((VAR_17 - VAR_2) / 2) | ((VAR_34>>8)&0x80);
        VAR_41 = (VAR_36 >= VAR_0) ? VAR_36 : VAR_0;
        for (; VAR_41 < VAR_36 + (VAR_38<<3) && VAR_41 < VAR_18; VAR_41++)
        {
   unsigned char *VAR_45 = &VAR_1[VAR_41][0];
          int VAR_46 = VAR_45[0];
          if (VAR_46 >= VAR_21) continue;

          if (VAR_45[2] >= VAR_21*2) {
            VAR_45[0] |= 0x80;
            continue;
          }
          VAR_45[2] += VAR_39;

          if (VAR_35 == -0x78) {
            if (VAR_46 > 0)
              VAR_45[0] |= 0x80;
            continue;
          }

          if (VAR_46 > 0 && !VAR_43) continue;

          VAR_45[3+VAR_46] = VAR_40;
          VAR_45[0] = VAR_46 + 1;
          VAR_45[1] |= (VAR_40 & 0x80) ? VAR_7 : VAR_8;
          VAR_45[1] |= VAR_44;
          if (VAR_46 > 0 && (VAR_34 & 0x8000) && !(VAR_45[3+VAR_46-1]&0x80))
            VAR_45[1] |= VAR_9;
        }
      }

      *VAR_17++ = (VAR_39<<28)|(VAR_38<<24)|(VAR_37<<16)|((unsigned short)VAR_36);
      *VAR_17++ = (VAR_35<<16)|((unsigned short)VAR_34);


      VAR_14=(VAR_33>>16)&0x7f;
      if (!VAR_14) break;
    }
    *VAR_17 = 0;
  }
}
