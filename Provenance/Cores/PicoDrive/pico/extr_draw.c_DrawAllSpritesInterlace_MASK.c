
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct PicoVideo {int* reg; } ;
struct TYPE_2__ {scalar_t__ vram; struct PicoVideo video; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int*) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_1(int VAR_2, int VAR_3)
{
  struct PicoVideo *VAR_4=&VAR_1.video;
  int VAR_5,VAR_6,VAR_7,VAR_8=0,VAR_9=VAR_0<<1;
  unsigned int *VAR_10[80];

  VAR_7=VAR_4->reg[5]&0x7f;
  if (VAR_4->reg[12]&1) VAR_7&=0x7e;
  VAR_7<<=8;

  for (VAR_5=VAR_6=0; VAR_6 < 80 && VAR_5 < 21; VAR_6++)
  {
    unsigned int *VAR_11;
    int VAR_12, VAR_13, VAR_14, VAR_15;

    VAR_11=(unsigned int *)(VAR_1.vram+((VAR_7+(VAR_8<<2))&0x7ffc));


    VAR_12 = VAR_11[0];
    VAR_13 = VAR_11[1];
    if(((VAR_13>>15)&1) != VAR_2) goto nextsprite;


    VAR_14 = (VAR_12&0x3ff)-0x100;
    VAR_15 = (((VAR_12>>24)&3)+1)<<4;
    if(VAR_9 < VAR_14 || VAR_9 >= VAR_14+VAR_15) goto nextsprite;


    VAR_13 = (VAR_13>>16)&0x1ff;
    VAR_13 -= 0x78;
    if(VAR_13 <= -8*3 || VAR_13 >= 328) goto nextsprite;


    VAR_10[VAR_5++]=VAR_11;

    nextsprite:

    VAR_8=(VAR_12>>16)&0x7f;
    if(!VAR_8) break;
  }


  for (VAR_5-- ;VAR_5>=0; VAR_5--)
    FUNC_0(VAR_10[VAR_5]);
}
