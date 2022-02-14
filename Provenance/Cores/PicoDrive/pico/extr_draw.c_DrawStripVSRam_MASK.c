
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TileStrip {int hscroll; int cells; int line; int nametab; int xmask; scalar_t__* hc; } ;
struct TYPE_2__ {int* vsram; int* vram; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int,int) ;
 int VAR_3 ;

void FUNC_2(struct TileStrip *VAR_4, int VAR_5, int VAR_6)
{
  int VAR_7,VAR_8,VAR_9=0,VAR_10=0,VAR_11=0;
  int VAR_12=-1,VAR_13=-1;
  int VAR_14=0,VAR_15=VAR_0;


  VAR_7=(-VAR_4->hscroll)>>3;
  VAR_8=((VAR_4->hscroll-1)&7)+1;
  if(VAR_8 != 8) VAR_11--;
  VAR_11+=VAR_6;
  VAR_7+=VAR_6;
  VAR_8+=VAR_6<<3;

  for (; VAR_11 < VAR_4->cells; VAR_8+=8,VAR_7++,VAR_11++)
  {
    int VAR_16=0,VAR_17,VAR_18;


    {
      int VAR_19,VAR_20;
      VAR_20=VAR_2.vsram[(VAR_5&1)+(VAR_11&~1)];


      VAR_19=(VAR_20+VAR_15)&VAR_4->line&0xffff;
      VAR_17=(VAR_19>>3)<<(VAR_4->line>>24);
      VAR_18=(VAR_19&7)<<1;
    }

    VAR_9=VAR_2.vram[VAR_4->nametab+VAR_17+(VAR_7&VAR_4->xmask)];
    if (VAR_9==VAR_13) continue;
    if (VAR_9>>15) {
      int VAR_21 = VAR_9 | (VAR_8<<16) | (VAR_18<<25);
      if(VAR_9&0x1000) VAR_21^=7<<26;
      *VAR_4->hc++ = VAR_21;
      continue;
    }

    if (VAR_9!=VAR_12) {
      VAR_12 = VAR_9;

      VAR_10=(VAR_9&0x7ff)<<4;
      if (VAR_9&0x1000) VAR_10+=14-VAR_18; else VAR_10+=VAR_18;

      VAR_14=((VAR_9>>9)&0x30)|((VAR_5<<5)&0x40);
    }

    if (VAR_9&0x0800) VAR_16=FUNC_0(VAR_8,VAR_10,VAR_14);
    else VAR_16=FUNC_1(VAR_8,VAR_10,VAR_14);

    if (VAR_16) VAR_13=VAR_9;
  }


  *VAR_4->hc = 0;
  if (VAR_12 == -1) VAR_3 |= VAR_1;
}
