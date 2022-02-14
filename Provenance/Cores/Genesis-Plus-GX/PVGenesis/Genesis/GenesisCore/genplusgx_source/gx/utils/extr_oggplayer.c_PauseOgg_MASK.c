
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flag; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

void FUNC_1(int VAR_3)
{
  if (VAR_3)
  {
    VAR_2.flag |= 128;
  }
  else
  {
    if (VAR_2.flag & 128)
    {
      VAR_2.flag |= 64;
      VAR_2.flag &= ~128;
      if (VAR_0 > 0)
      {
        FUNC_0(VAR_1);
      }
    }
  }
}
