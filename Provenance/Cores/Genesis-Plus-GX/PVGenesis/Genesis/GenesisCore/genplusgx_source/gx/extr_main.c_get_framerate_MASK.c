
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tv_mode; scalar_t__ render; int vsync; } ;


 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

double FUNC_0(void)
{

  if (!VAR_0.vsync || (VAR_0.tv_mode == !VAR_2))
  {
    return 0.0;
  }


  if (VAR_2)
  {


    return (VAR_0.render || VAR_1) ? (27000000.0/864.0/625.0) : (13500000.0/864.0/312.0);
  }
  else
  {



    return (VAR_0.render || VAR_1) ? (27000000.0/858.0/525.0) : (13500000.0/858.0/263.0);
  }
}
