
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t word ;
typedef size_t byte ;
struct TYPE_6__ {TYPE_1__* RBuffer; } ;
struct TYPE_7__ {TYPE_2__ Sig; } ;
struct TYPE_5__ {size_t* P; int length; } ;
typedef TYPE_3__ PLCI ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,size_t,size_t) ;

__attribute__((used)) static void FUNC_2(PLCI *VAR_5, word *VAR_6, byte **VAR_7, byte VAR_8)
{
  word VAR_9;
  byte VAR_10;
  byte VAR_11;
  byte VAR_12,VAR_13;
  byte * VAR_14;
  word VAR_15;
  word VAR_16;
  word VAR_17 = 0;
  VAR_9 = 0;
  VAR_12 = 0;
  VAR_13 = 0;

  VAR_14 = VAR_5->Sig.RBuffer->P;
  for(VAR_15=0; VAR_15<VAR_6[0]; VAR_15++)
  {
    VAR_7[VAR_15] = (byte *)"";
  }
  for(VAR_15=0; VAR_15<VAR_8; VAR_15++)
  {
    VAR_7[VAR_15] = (byte *)"";
  }

  while(VAR_9<VAR_5->Sig.RBuffer->length-1) {


    VAR_10 = VAR_14[VAR_9];

    if(VAR_10 & 0x80) {


      VAR_11 = 0;
    }
    else {
      VAR_11 = (byte)(VAR_14[VAR_9+1]+1);
    }

    if((VAR_9+VAR_11) > 270) return ;
    if(VAR_13 & 0x80) VAR_13 &=0x7f;
    else VAR_12 = VAR_13;

    if((VAR_10&0xf0)==VAR_4) {
      VAR_12 = VAR_14[VAR_9];
      if(!(VAR_12 & 0x08)) VAR_13 = (byte)(VAR_12 & 7);
      VAR_12 &=7;
      VAR_13 |=0x80;
    }
    else {
      if(VAR_10==VAR_2 && VAR_11>=3) VAR_16 = VAR_14[VAR_9+2] |0x800;
      else VAR_16 = VAR_10;
      VAR_16 |= (VAR_12<<8);

      for(VAR_15=1; VAR_15<VAR_6[0]+1 && VAR_6[VAR_15]!=VAR_16; VAR_15++);

      if(VAR_15<VAR_6[0]+1) {
        if(!VAR_8) {
          VAR_17 = VAR_15-1;
        }

        VAR_7[VAR_17] = &VAR_14[VAR_9+1];
        FUNC_0(1,FUNC_1("mIE[%d]=0x%x",*VAR_7[VAR_17],VAR_14[VAR_9]));
        if(VAR_6[VAR_15]==VAR_3
        || VAR_6[VAR_15]==VAR_1
        || VAR_6[VAR_15]==VAR_0) {
          if(VAR_14[VAR_9+2] &0x80) {
            VAR_14[VAR_9+0] = (byte)(VAR_14[VAR_9+1]+1);
            VAR_14[VAR_9+1] = (byte)(VAR_14[VAR_9+2] &0x7f);
            VAR_14[VAR_9+2] = 0x80;
            VAR_7[VAR_17] = &VAR_14[VAR_9];
          }
        }
        VAR_17++;
      }
    }

    VAR_9 +=(VAR_11+1);
  }
  return ;
}
