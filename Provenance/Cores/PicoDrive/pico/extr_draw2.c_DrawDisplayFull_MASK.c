
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct PicoVideo {int* reg; } ;
struct TYPE_2__ {struct PicoVideo video; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,scalar_t__*,int,int) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (int,int,int) ;
 int VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_4(void)
{
 struct PicoVideo *VAR_10=&VAR_7.video;
 int VAR_11, VAR_12=0, VAR_13=0;
 int VAR_14=VAR_9, VAR_15=VAR_0;
 int VAR_16=VAR_9, VAR_17=VAR_0;
 int VAR_18, VAR_19;

 if(VAR_10->reg[12]&1) {
  VAR_18 = 328; VAR_19 = 40;
 } else {
  VAR_18 = 264; VAR_19 = 32;
 }


 if ((VAR_11=VAR_10->reg[0x12]))
 {
  VAR_13=1;
  VAR_12=VAR_11&0x1f;
  if(VAR_11 == 0x80) {

   VAR_13=4;
  } else if(VAR_11 < 0x80) {

        if(VAR_12 <= VAR_9) VAR_13=0;
   else if(VAR_12 >= VAR_0) VAR_13=4;
   else VAR_14 = VAR_17 = VAR_12;
  } else if(VAR_11 > 0x80) {

   if(VAR_12 >= VAR_0) VAR_13=0;
   else VAR_15 = VAR_16 = VAR_12;
  }
 }


 if (VAR_13 != 4)
 {
  VAR_11=VAR_10->reg[0x11];
  VAR_12=VAR_11&0x1f;
  if (VAR_11&0x80) {
   if(!VAR_12) VAR_13=4;
   else if(VAR_12 < (VAR_19>>1)) {

    VAR_13|=2;
    VAR_15|=VAR_12<<17;
    VAR_16|=VAR_12<<17;
    VAR_17|=VAR_19<<16;
   }
  } else {
   if(VAR_12 >= (VAR_19>>1)) VAR_13=4;
   else if(VAR_12) {

    VAR_13|=2;
    VAR_17|=VAR_12<<17;
    VAR_14|=VAR_12<<17;
    VAR_15|=VAR_19<<16;
   }
  }
 }

 if (VAR_13==1) { VAR_17|=VAR_19<<16; VAR_15|=VAR_19<<16; }

 VAR_1[1] = VAR_2[1] = 0;
 if (VAR_8 & VAR_4)
  FUNC_1(1, VAR_2, VAR_9, (VAR_19<<16)|VAR_0);
 if (VAR_8 & VAR_3) switch (VAR_13)
 {
  case 4:

  FUNC_3(VAR_9, (VAR_19<<16)|VAR_0, 0);
  break;

  case 3:

  FUNC_1(0, VAR_1, VAR_14, VAR_15);
  FUNC_3( VAR_16&~0xff0000, (VAR_17&~0xff0000)|(VAR_19<<16), 0);
  FUNC_3((VAR_16&~0xff)|VAR_9, (VAR_17&~0xff)|VAR_0, 0);
  break;

  case 2:
  case 1:

  FUNC_1(0, VAR_1, VAR_14, VAR_15);
  FUNC_3(VAR_16, VAR_17, 0);
  break;

  default:

  FUNC_1(0, VAR_1, VAR_9, (VAR_19<<16)|VAR_0);
  break;
 }
 if (VAR_8 & VAR_6)
  FUNC_0(0, VAR_18);

 if (VAR_2[1]) FUNC_2(VAR_2);
 if (VAR_1[1]) FUNC_2(VAR_1);
 if (VAR_8 & VAR_3) switch (VAR_13)
 {
  case 4:

  FUNC_3(VAR_9, (VAR_19<<16)|VAR_0, 1);
  break;

  case 3:

  FUNC_3( VAR_16&~0xff0000, (VAR_17&~0xff0000)|(VAR_19<<16), 1);
  FUNC_3((VAR_16&~0xff)|VAR_9, (VAR_17&~0xff)|VAR_0, 1);
  break;

  case 2:
  case 1:

  FUNC_3(VAR_16, VAR_17, 1);
  break;
 }
 if (VAR_8 & VAR_5)
  FUNC_0(1, VAR_18);
}
