
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_4__ {unsigned int address; int TA; int TAC; unsigned int TB; int TBC; int TBT; int TAT; } ;
struct TYPE_5__ {TYPE_1__ ST; int lfo_inc; int * lfo_freq; } ;
struct TYPE_6__ {int addr_A1; int dacout; unsigned int dacen; TYPE_2__ OPN; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (unsigned int) ;
 TYPE_3__ VAR_4 ;

int FUNC_4(unsigned int VAR_5, unsigned int VAR_6)
{
 int VAR_7, VAR_8=1;

 VAR_6 &= 0xff;

 switch( VAR_5&3){
 case 0:
  VAR_4 = VAR_6;
  VAR_4 = 0;
  VAR_8=0;
  break;

 case 1:
  if (VAR_4 != 0) {
   VAR_8=0;
   break;
  }

  VAR_7 = VAR_4;

  switch( VAR_7 & 0xf0 )
  {
  case 0x20:
   switch( VAR_7 )
   {
   case 0x22:
    if (VAR_6&0x08)
    {
     VAR_4 = VAR_4[VAR_6&7];
    }
    else
    {
     VAR_4 = 0;
    }
    break;
   case 0x27:
    FUNC_3( VAR_6 );
    VAR_8=0;
    break;
   case 0x28:
    {
     UINT8 VAR_9;

     VAR_9 = VAR_6 & 0x03;
     if( VAR_9 == 3 ) { VAR_8=0; break; }
     if( VAR_6&0x04 ) VAR_9+=3;
     if(VAR_6&0x10) FUNC_1(VAR_9,VAR_0); else FUNC_0(VAR_9,VAR_0);
     if(VAR_6&0x20) FUNC_1(VAR_9,VAR_1); else FUNC_0(VAR_9,VAR_1);
     if(VAR_6&0x40) FUNC_1(VAR_9,VAR_2); else FUNC_0(VAR_9,VAR_2);
     if(VAR_6&0x80) FUNC_1(VAR_9,VAR_3); else FUNC_0(VAR_9,VAR_3);
     break;
    }
   case 0x2a:
    VAR_4 = ((int)VAR_6 - 0x80) << 6;
    VAR_8=0;
    break;
   case 0x2b:

    VAR_4 = VAR_6 & 0x80;
    VAR_8=0;
    break;
   default:
    break;
   }
   break;
  default:

   VAR_8 = FUNC_2(VAR_7,VAR_6);
  }
  break;

 case 2:
  VAR_4 = VAR_6;
  VAR_4 = 1;
  VAR_8=0;
  break;

 case 3:
  if (VAR_4 != 1) {
   VAR_8=0;
   break;
  }

  VAR_7 = VAR_4 | 0x100;

  VAR_8 = FUNC_2(VAR_7, VAR_6);
  break;
 }

 return VAR_8;
}
