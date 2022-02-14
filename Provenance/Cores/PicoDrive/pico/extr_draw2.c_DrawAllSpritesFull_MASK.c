
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct PicoVideo {int* reg; } ;
struct TYPE_2__ {scalar_t__ vram; struct PicoVideo video; } ;


 int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(int VAR_3, int VAR_4)
{
 struct PicoVideo *VAR_5=&VAR_1.video;
 int VAR_6=0,VAR_7=0;
 int VAR_8,VAR_9,VAR_10=0;
 unsigned int *VAR_11[80];
 int VAR_12=VAR_2*8, VAR_13=VAR_0*8;

 VAR_6=VAR_5->reg[5]&0x7f;
 if (VAR_5->reg[12]&1) VAR_6&=0x7e;
 VAR_6<<=8;

 for (VAR_8=VAR_9=0; VAR_9 < 80; VAR_9++)
 {
  unsigned int *VAR_14=((void*)0);
  int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;

  VAR_14=(unsigned int *)(VAR_1.vram+((VAR_6+(VAR_10<<2))&0x7ffc));


  VAR_15 = VAR_14[0];


  VAR_18 = (VAR_15&0x1ff)-0x80;
  VAR_19 = (((VAR_15>>24)&3)+1)<<3;
  if(VAR_18+VAR_19 <= VAR_12 || VAR_18 > VAR_13) goto nextsprite;


  VAR_16=VAR_14[1];
  VAR_17 = (VAR_16>>16)&0x1ff;
  if(!VAR_17) {
   int VAR_20 = VAR_18+VAR_19;
   if(VAR_7) {

    if((VAR_7>>16)+1 >= VAR_18 && (VAR_7>>16) <= VAR_20 && (VAR_7&0xffff) < VAR_18) VAR_18 = (VAR_7&0xffff);
    else if((VAR_7&0xffff)-1 <= VAR_20 && (VAR_7&0xffff) >= VAR_18 && (VAR_7>>16) > VAR_20) VAR_20 = (VAR_7>>16);
   }

   if(VAR_18 <= VAR_12 && VAR_20+1 > VAR_12) VAR_12 = VAR_20+1;
   else if(VAR_20 >= VAR_13 && VAR_18-1 < VAR_13) VAR_13 = VAR_18-1;
   else VAR_7=VAR_18|(VAR_20<<16);

   goto nextsprite;
  }


  if(((VAR_16>>15)&1) != VAR_3) goto nextsprite;


  VAR_17 -= 0x78;
  if(VAR_17 <= -8*3 || VAR_17 >= VAR_4) goto nextsprite;


  VAR_11[VAR_8++]=VAR_14;

  nextsprite:

  VAR_10=(VAR_15>>16)&0x7f;
  if(!VAR_10) break;
 }


 for (VAR_8-- ;VAR_8>=0; VAR_8--)
 {
  FUNC_0(VAR_11[VAR_8]);
 }
}
