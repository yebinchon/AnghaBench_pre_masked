
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int left; unsigned int right; int enable; } ;


 TYPE_1__* VAR_0 ;

void FUNC_0(unsigned int VAR_1, unsigned int VAR_2)
{

  int VAR_3 = (VAR_1 & 0x1f);
  int VAR_4 = (VAR_1 >> 7) & 1;




  int VAR_5 = VAR_4;
  int VAR_6 = VAR_4 ^ 1;


  VAR_2 = 16 + (VAR_2 << 2);

  if(VAR_3)
  {
    if(VAR_3 > VAR_2)
    {

      VAR_0[VAR_6].left = 0;
      VAR_0[VAR_6].right = VAR_2;
      VAR_0[VAR_6].enable = 1;
      VAR_0[VAR_5].enable = 0;
    }
    else
    {

      VAR_0[VAR_6].left = 0;
      VAR_0[VAR_5].right = VAR_2;
      VAR_0[VAR_5].left = VAR_0[VAR_6].right = VAR_3;
      VAR_0[0].enable = VAR_0[1].enable = 1;
    }
  }
  else
  {

    VAR_0[VAR_5].left = 0;
    VAR_0[VAR_5].right = VAR_2;
    VAR_0[VAR_5].enable = 1;
    VAR_0[VAR_6].enable = 0;
  }
}
