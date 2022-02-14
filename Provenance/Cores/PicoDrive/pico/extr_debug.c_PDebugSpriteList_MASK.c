
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct PicoVideo {int* reg; } ;
struct TYPE_2__ {scalar_t__ vram; struct PicoVideo video; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (char*,char*,int,int,int,int,int,char*) ;

char *FUNC_1(void)
{
  struct PicoVideo *VAR_3=&VAR_1.video;
  int VAR_4=0,VAR_5,VAR_6=0;
  int VAR_7 = 80;
  char *VAR_8;

  if (!(VAR_3->reg[12]&1))
    VAR_7 = 64;

  VAR_2[0] = 0;
  VAR_8 = VAR_2;

  VAR_4=VAR_3->reg[5]&0x7f;
  if (VAR_3->reg[12]&1) VAR_4&=0x7e;
  VAR_4<<=8;

  for (VAR_5=0; VAR_5 < VAR_7; VAR_5++)
  {
    unsigned int *VAR_9;
    int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

    VAR_9=(unsigned int *)(VAR_1.vram+((VAR_4+(VAR_6<<2))&0x7ffc));


    VAR_10 = VAR_9[0];


    VAR_13 = (VAR_10&0x1ff)-0x80;
    VAR_14 = ((VAR_10>>24)&3)+1;


    VAR_11 = VAR_9[1];
    VAR_12 = ((VAR_11>>16)&0x1ff)-0x80;

    FUNC_0(VAR_8, "#%02i x:%4i y:%4i %ix%i %s\n", VAR_5, VAR_12, VAR_13, ((VAR_10>>26)&3)+1, VAR_14,
      (VAR_11&0x8000)?"hi":"lo");
    VAR_0;

    VAR_6=(VAR_10>>16)&0x7f;
    if(!VAR_6) break;
  }

  return VAR_2;
}
