
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct PicoVideo {int* reg; } ;
struct TYPE_2__ {struct PicoVideo video; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_3(void)
{
  struct PicoVideo *VAR_1=&VAR_0.video;
  int VAR_2=0,VAR_3=0;

  if ((VAR_1->reg[1]&0x10)==0) return;

  VAR_2=FUNC_2();

  VAR_3=VAR_1->reg[0x17]>>6;
  if (VAR_3< 2) FUNC_1(VAR_2);
  if (VAR_3==3) FUNC_0(VAR_2);
}
