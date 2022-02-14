
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int (* data_r ) () ;} ;


 int* VAR_0 ;
 TYPE_1__* VAR_1 ;
 unsigned int FUNC_0 () ;

unsigned int FUNC_1(unsigned int VAR_2)
{
  switch(VAR_2)
  {
    case 0x01:
    case 0x02:
    case 0x03:
    {
      unsigned int VAR_3 = 0x80 | VAR_0[VAR_2 + 3];
      unsigned int VAR_4 = VAR_1[VAR_2-1].data_r();
      return (VAR_0[VAR_2] & VAR_3) | (VAR_4 & ~VAR_3);
    }

    default:
    {
      return VAR_0[VAR_2];
    }
  }
}
