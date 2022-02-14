
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 (int,int,int) ;

__attribute__((used)) static void FUNC_6(unsigned char *VAR_2)
{
  int (*VAR_3)(int VAR_4,int VAR_5,int VAR_6);
  unsigned char *VAR_7;
  int VAR_8;

  VAR_8 = VAR_2[0] & 0x7f;
  if (VAR_8 == 0) return;

  VAR_7 = &VAR_2[3];


  for (VAR_8--; VAR_8 >= 0; VAR_8--)
  {
    int *VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
    int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;

    VAR_15 = (VAR_7[VAR_8] & 0x7f) * 2;
    VAR_9 = VAR_1 + VAR_15;
    VAR_10 = VAR_9[1];
    VAR_11 = (VAR_10>>9)&0x30;

    if (VAR_11 == 0x30)
    {
      if (VAR_10 & 0x8000)
      {
        if (VAR_10&0x800) VAR_3=FUNC_1;
        else VAR_3=FUNC_4;
      } else {
        if (VAR_10&0x800) VAR_3=FUNC_2;
        else VAR_3=FUNC_5;
      }
    } else {
      if (!(VAR_10 & 0x8000)) continue;
      if (VAR_10&0x800) VAR_3=FUNC_0;
      else VAR_3=FUNC_3;
    }


    VAR_14=VAR_9[0];
    VAR_13=VAR_10>>16;
    VAR_17=VAR_14>>28;
    VAR_18=(VAR_14>>24)&7;
    VAR_14=(VAR_14<<16)>>16;

    VAR_19=VAR_0-VAR_14;

    if (VAR_10&0x1000) VAR_19=(VAR_18<<3)-1-VAR_19;

    VAR_12=VAR_10 + (VAR_19>>3);
    VAR_16=VAR_18;
    if (VAR_10&0x0800) { VAR_12+=VAR_16*(VAR_17-1); VAR_16=-VAR_16; }

    VAR_12 &= 0x7ff; VAR_12<<=4; VAR_12+=(VAR_19&7)<<1;
    VAR_16<<=4;

    for (; VAR_17; VAR_17--,VAR_13+=8,VAR_12+=VAR_16)
    {
      if(VAR_13<=0) continue;
      if(VAR_13>=328) break;

      VAR_12&=0x7fff;
      VAR_3(VAR_13,VAR_12,VAR_11);
    }
  }
}
