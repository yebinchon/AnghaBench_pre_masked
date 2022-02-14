
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct PicoVideo {int* reg; } ;
struct TYPE_2__ {int* vram; struct PicoVideo video; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 unsigned char* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned char*,int,unsigned char) ;
 int FUNC_1 (unsigned char*,int,unsigned char) ;
 int FUNC_2 (unsigned char*,int,unsigned char) ;
 int FUNC_3 (unsigned char*,int,unsigned char) ;

__attribute__((used)) static void FUNC_4(int VAR_4, int VAR_5, int VAR_6)
{
 struct PicoVideo *VAR_7=&VAR_1.video;
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12=-1, VAR_13;
 unsigned char *VAR_14 = VAR_2;
 int VAR_15, VAR_16;


 VAR_15 = VAR_4>>16;
 VAR_16 = VAR_5>>16;
 VAR_4 = VAR_4<<16>>16;
 VAR_5 = VAR_5<<16>>16;


 if (VAR_7->reg[12]&1)
 {
  VAR_8=(VAR_7->reg[3]&0x3c)<<9;
  VAR_9 = 1<<6;
 }
 else
 {
  VAR_8=(VAR_7->reg[3]&0x3e)<<9;
  VAR_9 = 1<<5;
 }
 VAR_8 += VAR_9*VAR_4;


 VAR_13=VAR_1.vram[VAR_8+VAR_15];
 if ((VAR_13>>15) != VAR_6) return;

 VAR_14+=8*VAR_0+8;
 VAR_14+=8*VAR_0*(VAR_4-VAR_3);


 for(VAR_10 = VAR_4; VAR_10 < VAR_5; VAR_10++, VAR_8+=VAR_9) {
  for (VAR_11=VAR_15; VAR_11<VAR_16; VAR_11++)
  {
   int VAR_17,VAR_18,VAR_19=0;

   unsigned char VAR_20;

   VAR_17=VAR_1.vram[VAR_8+VAR_11];
   if (VAR_17==VAR_12) continue;


   VAR_18=(VAR_17&0x7ff)<<4;


   VAR_20=(unsigned char)((VAR_17>>9)&0x30);

   switch((VAR_17>>11)&3) {
    case 0: VAR_19=FUNC_3(VAR_14+(VAR_11<<3),VAR_18,VAR_20); break;
    case 1: VAR_19=FUNC_1(VAR_14+(VAR_11<<3),VAR_18,VAR_20); break;
    case 2: VAR_19=FUNC_2(VAR_14+(VAR_11<<3),VAR_18,VAR_20); break;
    case 3: VAR_19=FUNC_0(VAR_14+(VAR_11<<3),VAR_18,VAR_20); break;
   }
   if(VAR_19) VAR_12=VAR_17;
  }

  VAR_14 += VAR_0*8;
 }
}
