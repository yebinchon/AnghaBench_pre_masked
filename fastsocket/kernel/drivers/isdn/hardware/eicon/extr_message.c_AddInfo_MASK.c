
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t byte ;


 size_t VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,size_t) ;

__attribute__((used)) static byte FUNC_2(byte **VAR_1,
                    byte **VAR_2,
                    byte *VAR_3,
                    byte *VAR_4)
{
  byte VAR_5;
  byte VAR_6;
  byte VAR_7;
  byte VAR_8;
  byte VAR_9=0;



 if (VAR_3[0] && !(VAR_3[VAR_3[0]] & 0x7f))
  {
    VAR_1[0] = (byte *)"\x02\x02\x00";
  }

  else
  {
    VAR_1[0] = (byte *)"";
  }
  if(!VAR_2[0][0])
  {
    VAR_1[3] = (byte *)"";
  }
  else
  {
    for(VAR_5=0,VAR_6=1;VAR_5<VAR_0 && VAR_2[VAR_5][0];VAR_5++)
    {
      FUNC_0(1,FUNC_1("AddIFac[%d]",VAR_2[VAR_5][0]));
      VAR_9 += VAR_2[VAR_5][0];
      VAR_9 += 2;
      VAR_8=VAR_2[VAR_5][0];
      VAR_4[VAR_6++]=0x1c;
      for(VAR_7=0;VAR_7<=VAR_8;VAR_7++,VAR_6++)
      {
        VAR_4[VAR_6]=VAR_2[VAR_5][VAR_7];

      }
    }
    VAR_4[0] = VAR_9;
    VAR_1[3] = VAR_4;
  }

  VAR_9 = VAR_1[0][0]+VAR_1[1][0]+VAR_1[2][0]+VAR_1[3][0];
  VAR_9 += 4;
  return(VAR_9);
}
