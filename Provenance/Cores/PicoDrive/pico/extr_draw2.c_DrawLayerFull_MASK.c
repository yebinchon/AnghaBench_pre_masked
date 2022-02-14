
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct PicoVideo {int* reg; } ;
struct TYPE_2__ {int* vram; int* vsram; struct PicoVideo video; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 unsigned char* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned char*,int,unsigned char) ;
 int FUNC_1 (unsigned char*,int,unsigned char) ;
 int FUNC_2 (unsigned char*,int,unsigned char) ;
 int FUNC_3 (unsigned char*,int,unsigned char) ;

__attribute__((used)) static void FUNC_4(int VAR_4, int *VAR_5, int VAR_6, int VAR_7)
{
 struct PicoVideo *VAR_8=&VAR_1.video;
 static char VAR_9[4]={5,6,6,7};
 int VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14, VAR_15=0, VAR_16, VAR_17;
 unsigned char *VAR_18;
 int VAR_19=-1, VAR_20, VAR_21, VAR_22;


 VAR_17 = (VAR_7>>16)-(VAR_6>>16);
 VAR_6 = VAR_6<<16>>16;
 VAR_7 = VAR_7<<16>>16;



 VAR_13=VAR_8->reg[13]<<9;


 VAR_13+=VAR_4;

 if(!(VAR_8->reg[11]&3)) {

  VAR_15=VAR_1.vram[VAR_13&0x7fff];
  VAR_13 = 0;
 }


 VAR_10=VAR_8->reg[16];
 VAR_11=(VAR_10>>4)&3; VAR_10&=3;

 VAR_20=(1<<VAR_9[VAR_10 ])-1;
 VAR_12=(VAR_11<<5)|0x1f;
 if(VAR_10 == 1) VAR_12&=0x3f;
 else if(VAR_10>1) VAR_12 =0x1f;


 if (VAR_4==0) VAR_14=(VAR_8->reg[2]&0x38)<< 9;
 else VAR_14=(VAR_8->reg[4]&0x07)<<12;

 VAR_18 = VAR_2;
 VAR_18+=8*VAR_0*(VAR_6-VAR_3);


 VAR_16=VAR_1.vsram[VAR_4]&0x1ff;
 VAR_18+=(8-(VAR_16&7))*VAR_0;
 if(VAR_16&7) VAR_7++;

 *VAR_5++ = 8-(VAR_16&7);


 for(VAR_22 = VAR_6; VAR_22 < VAR_7; VAR_22++) {
  int VAR_23=VAR_17,VAR_24,VAR_25;




  VAR_21 = VAR_14 + (((VAR_22+(VAR_16>>3))&VAR_12)<<VAR_9[VAR_10]);


  if(VAR_13) {
   int VAR_26=VAR_13+(VAR_22<<4);
   if(VAR_22) VAR_26-=(VAR_16&7)<<1;
   VAR_15=VAR_1.vram[VAR_26&0x7fff];
  }


  VAR_24=(-VAR_15)>>3;
  VAR_25=((VAR_15-1)&7)+1;
  if(VAR_25 != 8) VAR_23++;

  for (; VAR_23; VAR_25+=8,VAR_24++,VAR_23--)
  {
   int VAR_27=0,VAR_28=0,VAR_29=0;

   unsigned char VAR_30;

   VAR_27=VAR_1.vram[VAR_21+(VAR_24&VAR_20)];
   if (VAR_27==VAR_19) continue;

   if (VAR_27>>15) {
    *VAR_5++ = VAR_27|(VAR_25<<16)|(VAR_22<<27);
    continue;
   }


   VAR_28=(VAR_27&0x7ff)<<4;


   VAR_30=(unsigned char)((VAR_27>>9)&0x30);

   switch((VAR_27>>11)&3) {
    case 0: VAR_29=FUNC_3(VAR_18+VAR_25,VAR_28,VAR_30); break;
    case 1: VAR_29=FUNC_1(VAR_18+VAR_25,VAR_28,VAR_30); break;
    case 2: VAR_29=FUNC_2(VAR_18+VAR_25,VAR_28,VAR_30); break;
    case 3: VAR_29=FUNC_0(VAR_18+VAR_25,VAR_28,VAR_30); break;
   }
   if(VAR_29) VAR_19=VAR_27;
  }

  VAR_18 += VAR_0*8;
 }

 *VAR_5 = 0;
}
