
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned char*) ;
 scalar_t__ VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 (int,int,int) ;
 int FUNC_6 (int,int,int) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_7(unsigned char *VAR_6, int VAR_7)
{
  int (*VAR_8)(int VAR_9,int VAR_10,int VAR_11);
  unsigned char *VAR_12;
  int VAR_13, VAR_14, VAR_15 = 0;

  VAR_14 = VAR_6[0] & 0x7f;
  if (VAR_14 == 0) return;

  VAR_5 |= VAR_3;

  VAR_12 = &VAR_6[3];


  for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
  {
    int *VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
    int VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;

    VAR_22 = (VAR_12[VAR_13] & 0x7f) * 2;
    VAR_16 = VAR_2 + VAR_22;
    VAR_17 = VAR_16[1];
    VAR_18 = (VAR_17>>9)&0x30;

    if (VAR_17 & 0x8000)
    {
      if (VAR_7 && VAR_18 == 0x30)
      {
        if (VAR_17&0x800) VAR_8=FUNC_2;
        else VAR_8=FUNC_5;
      } else {
        if (VAR_17&0x800) VAR_8=FUNC_1;
        else VAR_8=FUNC_4;
      }
    } else {
      if (VAR_17&0x800) VAR_8=FUNC_3;
      else VAR_8=FUNC_6;
    }
    if (VAR_7 && VAR_18 == 0x30)
      VAR_12[VAR_15++] = VAR_22 / 2;


    VAR_21=VAR_16[0];
    VAR_20=VAR_17>>16;
    VAR_24=VAR_21>>28;
    VAR_25=(VAR_21>>24)&7;
    VAR_21=(VAR_21<<16)>>16;

    VAR_26=VAR_0-VAR_21;

    if (VAR_17&0x1000) VAR_26=(VAR_25<<3)-1-VAR_26;

    VAR_19=VAR_17 + (VAR_26>>3);
    VAR_23=VAR_25;
    if (VAR_17&0x0800) { VAR_19+=VAR_23*(VAR_24-1); VAR_23=-VAR_23; }

    VAR_19 &= 0x7ff; VAR_19<<=4; VAR_19+=(VAR_26&7)<<1;
    VAR_23<<=4;

    VAR_18 |= 0x80;
    for (; VAR_24; VAR_24--,VAR_20+=8,VAR_19+=VAR_23)
    {
      if(VAR_20<=0) continue;
      if(VAR_20>=328) break;

      VAR_19&=0x7fff;
      VAR_8(VAR_20,VAR_19,VAR_18);
    }
  }

  if (!VAR_7 || !(VAR_6[1]&VAR_4)) return;


  {
    int VAR_27 = 320/4/4, *VAR_28 = (int *)(VAR_1+8);
    while (VAR_27--)
    {
      *VAR_28++ &= 0x7f7f7f7f; *VAR_28++ &= 0x7f7f7f7f;
      *VAR_28++ &= 0x7f7f7f7f; *VAR_28++ &= 0x7f7f7f7f;
    }
  }


  VAR_6[0] = VAR_15;
  FUNC_0(VAR_6);
}
