
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct PicoVideo {unsigned int command; unsigned char type; unsigned short addr; } ;
struct TYPE_2__ {struct PicoVideo video; } ;


 int FUNC_0 () ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_1(void)
{
  struct PicoVideo *VAR_1=&VAR_0.video;
  unsigned int VAR_2=0,VAR_3=0;

  VAR_2=VAR_1->command;


  VAR_1->type=(unsigned char)(((VAR_2>>2)&0xc)|(VAR_2>>30));


  VAR_3 =(VAR_2>>16)&0x3fff;
  VAR_3|=(VAR_2<<14)&0xc000;
  VAR_1->addr=(unsigned short)VAR_3;


  if (VAR_2&0x80) FUNC_0();
}
