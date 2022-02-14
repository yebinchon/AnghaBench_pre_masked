
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ vram; } ;


 int FUNC_0 () ;
 unsigned char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int,int) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3(int *VAR_5, int VAR_6, int VAR_7)
{
  int VAR_8, VAR_9, VAR_10;
  int VAR_11;



  if (VAR_6 && (VAR_4 & (VAR_2|VAR_1)))
  {
    if (!(VAR_4 & VAR_2))
      FUNC_0();
    VAR_6 = 0;
  }

  if (!VAR_6)
  {
    short VAR_12=-1;
    while ((VAR_8=*VAR_5++)) {
      int VAR_13;
      if((short)VAR_8 == VAR_12) continue;

      VAR_9=(VAR_8&0x7ff)<<4;
      VAR_9+=(unsigned int)VAR_8>>25;
      VAR_10=(VAR_8>>16)&0x1ff;

      VAR_11=((VAR_8>>9)&0x30);
      if (VAR_7-VAR_10 < 0) goto last_cut_tile;

      if (VAR_8&0x0800) VAR_13=FUNC_1(VAR_10,VAR_9,VAR_11);
      else VAR_13=FUNC_2(VAR_10,VAR_9,VAR_11);

      if (VAR_13) VAR_12=(short)VAR_8;
    }
  }
  else
  {
    while ((VAR_8=*VAR_5++)) {
      unsigned char *VAR_14;

      VAR_9=(VAR_8&0x7ff)<<4;
      VAR_9+=(unsigned int)VAR_8>>25;
      VAR_10=(VAR_8>>16)&0x1ff;
      VAR_14 = VAR_0+VAR_10;
      *VAR_14++ &= 0xbf; *VAR_14++ &= 0xbf; *VAR_14++ &= 0xbf; *VAR_14++ &= 0xbf;
      *VAR_14++ &= 0xbf; *VAR_14++ &= 0xbf; *VAR_14++ &= 0xbf; *VAR_14++ &= 0xbf;

      VAR_11=((VAR_8>>9)&0x30);
      if (VAR_7-VAR_10 < 0) goto last_cut_tile;

      if (VAR_8&0x0800) FUNC_1(VAR_10,VAR_9,VAR_11);
      else FUNC_2(VAR_10,VAR_9,VAR_11);
    }
  }
  return;

last_cut_tile:
  {
    unsigned int VAR_15, VAR_16=*(unsigned int *)(VAR_3.vram+VAR_9);
    unsigned char *VAR_17 = VAR_0+VAR_10;
    if (!VAR_16) return;
    if (VAR_8&0x0800)
    {
      switch (VAR_7-VAR_10+8)
      {
        case 7: VAR_15=VAR_16&0x00000f00; if (VAR_15) VAR_17[6]=(unsigned char)(VAR_11|(VAR_15>> 8));
        case 6: VAR_15=VAR_16&0x000000f0; if (VAR_15) VAR_17[5]=(unsigned char)(VAR_11|(VAR_15>> 4));
        case 5: VAR_15=VAR_16&0x0000000f; if (VAR_15) VAR_17[4]=(unsigned char)(VAR_11|(VAR_15 ));
        case 4: VAR_15=VAR_16&0xf0000000; if (VAR_15) VAR_17[3]=(unsigned char)(VAR_11|(VAR_15>>28));
        case 3: VAR_15=VAR_16&0x0f000000; if (VAR_15) VAR_17[2]=(unsigned char)(VAR_11|(VAR_15>>24));
        case 2: VAR_15=VAR_16&0x00f00000; if (VAR_15) VAR_17[1]=(unsigned char)(VAR_11|(VAR_15>>20));
        case 1: VAR_15=VAR_16&0x000f0000; if (VAR_15) VAR_17[0]=(unsigned char)(VAR_11|(VAR_15>>16));
        default: break;
      }
    }
    else
    {
      switch (VAR_7-VAR_10+8)
      {
        case 7: VAR_15=VAR_16&0x00f00000; if (VAR_15) VAR_17[6]=(unsigned char)(VAR_11|(VAR_15>>20));
        case 6: VAR_15=VAR_16&0x0f000000; if (VAR_15) VAR_17[5]=(unsigned char)(VAR_11|(VAR_15>>24));
        case 5: VAR_15=VAR_16&0xf0000000; if (VAR_15) VAR_17[4]=(unsigned char)(VAR_11|(VAR_15>>28));
        case 4: VAR_15=VAR_16&0x0000000f; if (VAR_15) VAR_17[3]=(unsigned char)(VAR_11|(VAR_15 ));
        case 3: VAR_15=VAR_16&0x000000f0; if (VAR_15) VAR_17[2]=(unsigned char)(VAR_11|(VAR_15>> 4));
        case 2: VAR_15=VAR_16&0x00000f00; if (VAR_15) VAR_17[1]=(unsigned char)(VAR_11|(VAR_15>> 8));
        case 1: VAR_15=VAR_16&0x0000f000; if (VAR_15) VAR_17[0]=(unsigned char)(VAR_11|(VAR_15>>12));
        default: break;
      }
    }
  }
}
