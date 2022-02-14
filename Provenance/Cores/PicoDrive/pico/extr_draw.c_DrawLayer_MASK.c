
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TileStrip {int* hc; int cells; int xmask; int nametab; int line; int hscroll; } ;
struct PicoVideo {int* reg; } ;
struct TYPE_2__ {int* vsram; int * vram; struct PicoVideo video; } ;


 int VAR_0 ;
 int FUNC_0 (struct TileStrip*,int,int) ;
 int FUNC_1 (struct TileStrip*) ;
 int FUNC_2 (struct TileStrip*,int,int) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_3(int VAR_2, int *VAR_3, int VAR_4, int VAR_5)
{
  struct PicoVideo *VAR_6=&VAR_1.video;
  const char VAR_7[4]={5,6,5,7};
  struct TileStrip VAR_8;
  int VAR_9, VAR_10, VAR_11;
  int VAR_12, VAR_13;

  VAR_8.hc=VAR_3;
  VAR_8.cells=VAR_5;




  VAR_9=VAR_6->reg[16];
  VAR_10=(VAR_9>>4)&3; VAR_9&=3;

  VAR_8.xmask=(1<<VAR_7[VAR_9])-1;
  VAR_11=(VAR_10<<8)|0xff;
  if(VAR_9 == 1) VAR_11&=0x1ff;
  else if(VAR_9>1) VAR_11 =0x0ff;


  if (VAR_2&1) VAR_8.nametab=(VAR_6->reg[4]&0x07)<<12;
  else VAR_8.nametab=(VAR_6->reg[2]&0x38)<< 9;

  VAR_13=VAR_6->reg[13]<<9;
  if ( VAR_6->reg[11]&2) VAR_13+=VAR_0<<1;
  if ((VAR_6->reg[11]&1)==0) VAR_13&=~0xf;
  VAR_13+=VAR_2&1;


  VAR_8.hscroll=VAR_1.vram[VAR_13&0x7fff];

  if((VAR_6->reg[12]&6) == 6) {

    VAR_12=VAR_1.vsram[VAR_2&1];


    VAR_8.line=(VAR_12+(VAR_0<<1))&((VAR_11<<1)|1);
    VAR_8.nametab+=(VAR_8.line>>4)<<VAR_7[VAR_9];

    FUNC_1(&VAR_8);
  } else if( VAR_6->reg[11]&4) {


    VAR_8.line=VAR_11|(VAR_7[VAR_9]<<24);
    FUNC_2(&VAR_8, VAR_2, VAR_4);
  } else {
    VAR_12=VAR_1.vsram[VAR_2&1];


    VAR_8.line=(VAR_12+VAR_0)&VAR_11;
    VAR_8.nametab+=(VAR_8.line>>3)<<VAR_7[VAR_9];

    FUNC_0(&VAR_8, VAR_2, VAR_4);
  }
}
