
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char*,int,...) ;

int FUNC_3(char *VAR_2,int VAR_3,int VAR_4)
{
  VAR_3&=0x3f; VAR_2[0]=0;
  if ((VAR_3&0x38)==0x00) { FUNC_2(VAR_2,"d%d",VAR_3 ); return 0; }
  if ((VAR_3&0x38)==0x08) { FUNC_2(VAR_2,"a%d",VAR_3&7); return 0; }
  if ((VAR_3&0x38)==0x10) { FUNC_2(VAR_2,"(a%d)",VAR_3&7); return 0; }
  if ((VAR_3&0x38)==0x18) { FUNC_2(VAR_2,"(a%d)+",VAR_3&7); return 0; }
  if ((VAR_3&0x38)==0x20) { FUNC_2(VAR_2,"-(a%d)",VAR_3&7); return 0; }
  if ((VAR_3&0x38)==0x28) { FUNC_2(VAR_2,"($%x,a%d)",FUNC_1(VAR_1)&0xffff,VAR_3&7); VAR_1+=2; return 0; }

  if ((VAR_3&0x38)==0x30)
  {

    int VAR_5=0,VAR_6=0,VAR_7=0,VAR_8=0,VAR_9=0,VAR_10=0,VAR_11=0;
    VAR_6=FUNC_1(VAR_1)&0xffff;

    VAR_5=VAR_3&7;
    VAR_7=VAR_6&0xff; VAR_8 =VAR_6&0x8000?'a':'d';
    VAR_9=(VAR_6>>12)&7; VAR_10=VAR_6&0x0800?'l':'w';
    VAR_11=1<<((VAR_6>>9)&3);

    if (VAR_11<2) FUNC_2(VAR_2,"($%x,a%d,%c%d.%c)", VAR_7,VAR_5,VAR_8,VAR_9,VAR_10);
    else FUNC_2(VAR_2,"($%x,a%d,%c%d.%c*%d)",VAR_7,VAR_5,VAR_8,VAR_9,VAR_10,VAR_11);

    VAR_1+=2;
    return 0;
  }

  if (VAR_3==0x38) { FUNC_2(VAR_2,"$%x.w",FUNC_1(VAR_1)&0xffff); VAR_1+=2; return 0; }
  if (VAR_3==0x39) { FUNC_2(VAR_2,"$%x.l",FUNC_0(VAR_1)); VAR_1+=4; return 0; }

  if (VAR_3==0x3a)
  {

    int VAR_12=FUNC_1(VAR_1)&0xffff;
    FUNC_2(VAR_2,"($%x,pc)",VAR_12);
    FUNC_2(VAR_0,"; =%x",VAR_1+(short)VAR_12);
    VAR_1+=2;
    return 0;
  }

  if (VAR_3==0x3b)
  {

    int VAR_13=0,VAR_14=0,VAR_15=0,VAR_16=0,VAR_17=0,VAR_18=0;
    VAR_13=FUNC_1(VAR_1)&0xffff;

    VAR_14=VAR_13&0xff; VAR_15 =VAR_13&0x8000?'a':'d';
    VAR_16=(VAR_13>>12)&7; VAR_17=VAR_13&0x0800?'l':'w';
    VAR_18=1<<((VAR_13>>9)&3);

    if (VAR_18<2) FUNC_2(VAR_2,"($%x,pc,%c%d.%c)", VAR_14,VAR_15,VAR_16,VAR_17);
    else FUNC_2(VAR_2,"($%x,pc,%c%d.%c*%d)",VAR_14,VAR_15,VAR_16,VAR_17,VAR_18);

    FUNC_2(VAR_0,"; =%x",VAR_1+(char)VAR_14);
    VAR_1+=2;
    return 0;
  }

  if (VAR_3==0x3c)
  {

    switch (VAR_4)
    {
      case 0: FUNC_2(VAR_2,"#$%x",FUNC_1(VAR_1)&0x00ff); VAR_1+=2; return 0;
      case 1: FUNC_2(VAR_2,"#$%x",FUNC_1(VAR_1)&0xffff); VAR_1+=2; return 0;
      case 2: FUNC_2(VAR_2,"#$%x",FUNC_0(VAR_1) ); VAR_1+=4; return 0;
    }
    return 1;
  }


  FUNC_2(VAR_2,"ea=(%d%d%d %d%d%d)",
    (VAR_3>>5)&1,(VAR_3>>4)&1,(VAR_3>>3)&1,
    (VAR_3>>2)&1,(VAR_3>>1)&1, VAR_3 &1);
  return 1;
}
