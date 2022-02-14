
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8 ;
struct TYPE_2__ {int* regs; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (size_t,unsigned int) ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_1, unsigned int VAR_2)
{

  uint8 VAR_3 = (VAR_1 >> 1) & 0x1f;


  if (VAR_1 & 1)
  {
    VAR_2 = (VAR_0.regs[VAR_3] & 0xff00) | (VAR_2 & 0xff);
  }
  else
  {
    VAR_2 = (VAR_0.regs[VAR_3] & 0x00ff) | ((VAR_2 & 0xff) << 8);
  }


  FUNC_0(VAR_3,VAR_2);
}
