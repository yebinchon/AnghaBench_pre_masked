
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct PicoVideo {int* reg; } ;
struct TYPE_2__ {struct PicoVideo video; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_0(void)
{
  struct PicoVideo *VAR_1=&VAR_0.video;
  int VAR_2=0;

  VAR_2 =VAR_1->reg[0x13];
  VAR_2|=VAR_1->reg[0x14]<<8;

  if(!VAR_2) VAR_2 = 0xffff;
  return VAR_2;
}
