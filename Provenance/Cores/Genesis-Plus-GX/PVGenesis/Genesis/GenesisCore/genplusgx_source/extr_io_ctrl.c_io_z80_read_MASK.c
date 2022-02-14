
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* data_r ) () ;} ;


 unsigned int VAR_0 ;
 unsigned int* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

unsigned int FUNC_2(unsigned int VAR_3)
{

  unsigned int VAR_4 = (VAR_2[0].data_r()) | (VAR_2[1].data_r() << 8);


  unsigned int VAR_5 = VAR_1[0x0F];


  if (VAR_3)
  {
    VAR_4 = ((VAR_4 >> 10) & 0x0F) | (VAR_4 & 0x40) | ((VAR_4 >> 7) & 0x80) | VAR_1[0x0D];


    VAR_1[0x0D] |= VAR_0;


    if (!(VAR_5 & 0x08))
    {
      VAR_4 &= ~0x80;
      VAR_4 |= (VAR_5 & 0x80);
    }


    if (!(VAR_5 & 0x02))
    {
      VAR_4 &= ~0x40;
      VAR_4 |= ((VAR_5 & 0x20) << 1);
    }


    if (!(VAR_5 & 0x04))
    {
      VAR_4 &= ~0x08;
      VAR_4 |= ((VAR_5 & 0x40) >> 3);
    }
  }
  else
  {
    VAR_4 = (VAR_4 & 0x3F) | ((VAR_4 >> 2) & 0xC0);


    if (!(VAR_5 & 0x01))
    {
      VAR_4 &= ~0x20;
      VAR_4 |= ((VAR_5 & 0x10) << 1);
    }
  }

  return VAR_4;
}
