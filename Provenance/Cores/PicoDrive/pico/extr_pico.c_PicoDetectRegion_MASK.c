
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char hardware; unsigned char pal; } ;
struct TYPE_4__ {TYPE_1__ m; scalar_t__ rom; } ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int *,int) ;

void FUNC_1(void)
{
  int VAR_3=0, VAR_4=0, VAR_5;
  unsigned char VAR_6=0;

  if (VAR_2)
  {
    VAR_3 = VAR_2;
  }
  else
  {

    unsigned short *VAR_7 = (unsigned short *)(VAR_0.rom + 0x1f0);
    int VAR_8 = (VAR_7[0] << 16) | VAR_7[1];

    for (VAR_5 = 0; VAR_5 < 4; VAR_5++)
    {
      int VAR_9;

      VAR_9 = VAR_8 >> (VAR_5<<3);
      VAR_9 &= 0xff;
      if (VAR_9 <= ' ') continue;

           if (VAR_9=='J') VAR_3|=1;
      else if (VAR_9=='U') VAR_3|=4;
      else if (VAR_9=='E') VAR_3|=8;
      else if (VAR_9=='j') {VAR_3|=1; break; }
      else if (VAR_9=='u') {VAR_3|=4; break; }
      else if (VAR_9=='e') {VAR_3|=8; break; }
      else
      {

        char VAR_10[2]={0,0};
        VAR_10[0]=(char)VAR_9;
        VAR_3|=FUNC_0(VAR_10,((void*)0),16);
      }
    }
  }


  if (VAR_1) {
         if (((VAR_1>>0)&0xf) & VAR_3) VAR_3 = (VAR_1>>0)&0xf;
    else if (((VAR_1>>4)&0xf) & VAR_3) VAR_3 = (VAR_1>>4)&0xf;
    else if (((VAR_1>>8)&0xf) & VAR_3) VAR_3 = (VAR_1>>8)&0xf;
  }


       if (VAR_3&8) { VAR_4=0xc0; VAR_6=1; }
  else if (VAR_3&4) VAR_4=0x80;
  else if (VAR_3&2) { VAR_4=0x40; VAR_6=1; }
  else if (VAR_3&1) VAR_4=0x00;
  else VAR_4=0x80;

  VAR_0.m.hardware=(unsigned char)(VAR_4|0x20);
  VAR_0.m.pal=VAR_6;
}
