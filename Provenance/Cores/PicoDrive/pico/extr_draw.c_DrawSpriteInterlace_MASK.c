
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int,int) ;

__attribute__((used)) static void FUNC_2(unsigned int *VAR_1)
{
  int VAR_2=0,VAR_3=0;
  int VAR_4=0,VAR_5=0;
  int VAR_6;
  int VAR_7=0,VAR_8=0;
  int VAR_9, VAR_10;


  VAR_10=VAR_1[0];
  VAR_3=VAR_10>>24;
  VAR_10=(VAR_10&0x3ff)-0x100;
  VAR_2=(VAR_3>>2)&3; VAR_3&=3;
  VAR_2++; VAR_3++;

  VAR_4=(VAR_0<<1)-VAR_10;

  VAR_5=VAR_1[1];
  VAR_9=((VAR_5>>16)&0x1ff)-0x78;

  if (VAR_5&0x1000) VAR_4^=(16<<VAR_3)-1;

  VAR_7=VAR_5&0x3ff;
  VAR_7+=VAR_4>>4;
  VAR_8=VAR_3;
  if (VAR_5&0x0800) { VAR_7+=VAR_8*(VAR_2-1); VAR_8=-VAR_8; }

  VAR_7<<=5; VAR_7+=(VAR_4&15)<<1;

  VAR_8<<=5;
  VAR_6=((VAR_5>>9)&0x30);

  for (; VAR_2; VAR_2--,VAR_9+=8,VAR_7+=VAR_8)
  {
    if(VAR_9<=0) continue;
    if(VAR_9>=328) break;

    VAR_7&=0x7fff;
    if (VAR_5&0x0800) FUNC_0(VAR_9,VAR_7,VAR_6);
    else FUNC_1(VAR_9,VAR_7,VAR_6);
  }
}
