
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int,int,int) ;

__attribute__((used)) static void FUNC_4(int *VAR_1, int VAR_2)
{
  int VAR_3=0,VAR_4=0;
  int VAR_5=0,VAR_6=0;
  int VAR_7;
  int VAR_8=0,VAR_9=0;
  int VAR_10, VAR_11;
  int (*VAR_12)(int VAR_13,int VAR_14,int VAR_15);


  VAR_11=VAR_1[0];
  VAR_6=VAR_1[1];
  VAR_10=VAR_6>>16;
  VAR_3=VAR_11>>28;
  VAR_4=(VAR_11>>24)&7;
  VAR_11=(VAR_11<<16)>>16;

  VAR_5=VAR_0-VAR_11;

  if (VAR_6&0x1000) VAR_5=(VAR_4<<3)-1-VAR_5;

  VAR_8=VAR_6 + (VAR_5>>3);
  VAR_9=VAR_4;
  if (VAR_6&0x0800) { VAR_8+=VAR_9*(VAR_3-1); VAR_9=-VAR_9; }

  VAR_8 &= 0x7ff; VAR_8<<=4; VAR_8+=(VAR_5&7)<<1;
  VAR_9<<=4;

  VAR_7=(VAR_6>>9)&0x30;
  VAR_7|=VAR_2<<6;

  if (VAR_2 && (VAR_6&0x6000) == 0x6000) {
    if(VAR_6&0x0800) VAR_12=FUNC_1;
    else VAR_12=FUNC_3;
  } else {
    if(VAR_6&0x0800) VAR_12=FUNC_0;
    else VAR_12=FUNC_2;
  }

  for (; VAR_3; VAR_3--,VAR_10+=8,VAR_8+=VAR_9)
  {
    if(VAR_10<=0) continue;
    if(VAR_10>=328) break;

    VAR_8&=0x7fff;
    VAR_12(VAR_10,VAR_8,VAR_7);
  }
}
