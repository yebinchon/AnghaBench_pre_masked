
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TileStrip {int hscroll; int line; int cells; int nametab; int xmask; scalar_t__* hc; } ;
struct TYPE_2__ {int* vram; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int,int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct TileStrip *VAR_3, int VAR_4, int VAR_5)
{
  int VAR_6,VAR_7,VAR_8,VAR_9=0,VAR_10=0,VAR_11;
  int VAR_12=-1,VAR_13=-1;
  int VAR_14=0,VAR_15;


  VAR_15=(VAR_4<<5)&0x40;
  VAR_6=((-VAR_3->hscroll)>>3)+VAR_5;
  VAR_8=(VAR_3->line&7)<<1;
  VAR_7=((VAR_3->hscroll-1)&7)+1;
  VAR_11 = VAR_3->cells - VAR_5;
  if(VAR_7 != 8) VAR_11++;
  VAR_7+=VAR_5<<3;

  for (; VAR_11 > 0; VAR_7+=8,VAR_6++,VAR_11--)
  {
    int VAR_16=0;

    VAR_9=VAR_1.vram[VAR_3->nametab+(VAR_6&VAR_3->xmask)];
    if (VAR_9==VAR_13) continue;
    if (VAR_9>>15) {
      int VAR_17 = VAR_9 | (VAR_7<<16) | (VAR_8<<25);
      if(VAR_9&0x1000) VAR_17^=7<<26;
      *VAR_3->hc++ = VAR_17;
      continue;
    }

    if (VAR_9!=VAR_12) {
      VAR_12 = VAR_9;

      VAR_10=(VAR_9&0x7ff)<<4;
      VAR_10+=VAR_8;
      if (VAR_9&0x1000) VAR_10^=0xe;

      VAR_14=((VAR_9>>9)&0x30)|VAR_15;
    }

    if (VAR_9&0x0800) VAR_16=FUNC_0(VAR_7,VAR_10,VAR_14);
    else VAR_16=FUNC_1(VAR_7,VAR_10,VAR_14);

    if (VAR_16) VAR_13=VAR_9;
  }


  *VAR_3->hc = 0;

  if (VAR_12 == -1) VAR_2 |= VAR_0;
}
