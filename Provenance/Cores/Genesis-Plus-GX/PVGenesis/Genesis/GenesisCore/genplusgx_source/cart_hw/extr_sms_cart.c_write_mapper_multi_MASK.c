
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* fcr; } ;


 int FUNC_0 (int,int) ;
 TYPE_1__ VAR_0 ;
 unsigned char** VAR_1 ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_2, unsigned char VAR_3)
{
  if (VAR_2 == 0x3FFE)
  {
    FUNC_0(1,VAR_3);
    return;
  }

  if (VAR_2 == 0x7FFF)
  {
    FUNC_0(2,VAR_3);
    return;
  }

  if (VAR_2 == 0xBFFF)
  {
    FUNC_0(3,(VAR_0.fcr[1] & 0x30) + VAR_3);
    return;
  }

  VAR_1[VAR_2 >> 10][VAR_2 & 0x03FF] = VAR_3;
}
