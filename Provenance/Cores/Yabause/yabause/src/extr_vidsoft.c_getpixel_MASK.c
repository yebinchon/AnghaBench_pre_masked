
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int CMDCTRL; int CMDSRCA; int CMDCOLR; int CMDPMOD; } ;
typedef TYPE_1__ vdp1cmd_struct ;
typedef int u8 ;
typedef int u32 ;
typedef int u16 ;


 int FUNC_0 (int*,int) ;
 int FUNC_1 (int,int,int*) ;
 int FUNC_2 (int,int,int*) ;
 int FUNC_3 (int,int,int*) ;
 int FUNC_4 (int,int,int*) ;
 int FUNC_5 (int,int,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(int VAR_4, int VAR_5, vdp1cmd_struct *VAR_6, u8 * VAR_7) {

 u32 VAR_8;
 u32 VAR_9;
 u16 VAR_10;
 u8 VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14 = 0;
 int VAR_15 = 1;
 int VAR_16 = VAR_6->CMDCTRL & 0x7;
 int VAR_17;

   VAR_8 = VAR_6->CMDSRCA << 3;
   VAR_10 = VAR_6->CMDCOLR;
 VAR_9 = (u32)VAR_10 << 3;
   VAR_11 = ((VAR_6->CMDPMOD & 0x40) != 0);
   VAR_13 = ((VAR_6->CMDPMOD & 0x80) == 0) ? 1 : 0;
   VAR_17 = (VAR_6->CMDCTRL & 0x30) >> 4;


 if(VAR_16 == 4 || VAR_16 == 5 || VAR_16 == 6) {
  VAR_15 = 0;
      VAR_14 = VAR_6->CMDCOLR;
 }

 switch( VAR_17 ) {
  case 1:

   VAR_5 = VAR_1 - VAR_5-1;
   break;
  case 2:

   VAR_4 = VAR_0 - VAR_4-1;

   break;
  case 3:

   VAR_4 = VAR_0 - VAR_4-1;
   VAR_5 = VAR_1 - VAR_5-1;
   break;
 }

   switch ((VAR_6->CMDPMOD >> 3) & 0x7)
 {
  case 0x0:
   VAR_12 = 0xf;
   VAR_2 = FUNC_2( VAR_8 + (VAR_4*(VAR_1>>1)), VAR_5 , VAR_7);
   if(VAR_15 && VAR_13 && VAR_2 == VAR_12)
    return 1;
   if (!((VAR_2 == 0) && !VAR_11))
    VAR_2 = (VAR_10 &0xfff0)| VAR_2;
   VAR_3 = 0xf;
   break;

  case 0x1:
   VAR_12 = 0xf;
         VAR_2 = FUNC_2(VAR_8 + (VAR_4*(VAR_1 >> 1)), VAR_5, VAR_7);
   if(VAR_15 && VAR_13 && VAR_2 == VAR_12)
    return 1;
   if (!(VAR_2 == 0 && !VAR_11))
    VAR_2 = FUNC_0(VAR_7, (VAR_2 * 2 + VAR_9) & 0x7FFFF);
   VAR_3 = 0xffff;
   break;
  case 0x2:







   VAR_12 = 63;
         VAR_2 = FUNC_4(VAR_8 + (VAR_4*(VAR_1)), VAR_5, VAR_7);
   if(VAR_15 && VAR_13 && VAR_2 == VAR_12)
    VAR_2 = 0;

   if (!((VAR_2 == 0) && !VAR_11))
    VAR_2 = (VAR_10&0xffc0) | VAR_2;
   VAR_3 = 0x3f;
   break;
  case 0x3:
   VAR_12 = 0xff;
         VAR_2 = FUNC_1(VAR_8 + (VAR_4*VAR_1), VAR_5, VAR_7);
   if(VAR_15 && VAR_13 && VAR_2 == VAR_12)
    return 1;
   if (!((VAR_2 == 0) && !VAR_11))
    VAR_2 = (VAR_10&0xff80) | VAR_2;
   VAR_3 = 0x7f;
   break;
  case 0x4:
   VAR_12 = 0xff;
         VAR_2 = FUNC_3(VAR_8 + (VAR_4*VAR_1), VAR_5, VAR_7);
   if(VAR_15 && VAR_13 && VAR_2 == VAR_12)
    return 1;
   VAR_3 = 0xff;
   if (!((VAR_2 == 0) && !VAR_11))
    VAR_2 = (VAR_10&0xff00) | VAR_2;
   break;
  case 0x5:
   VAR_12 = 0x7fff;
         VAR_2 = FUNC_5(VAR_8 + (VAR_4*VAR_1 * 2), VAR_5, VAR_7);
   if(VAR_15 && VAR_13 && VAR_2 == VAR_12)
    return 1;




   if (!(VAR_2 & 0x8000) && !VAR_11)
    VAR_2 = 0;

   VAR_3 = 0xffff;
   break;
 }

 if(!VAR_15)
  VAR_2 = VAR_14;




 return 0;
}
