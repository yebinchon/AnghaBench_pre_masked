
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* pan; } ;
struct TYPE_4__ {TYPE_1__ OPN; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;

void FUNC_0(unsigned char VAR_3)
{
  int VAR_4;


  VAR_1 = ~((1 << (VAR_0 - VAR_3)) - 1);


  for (VAR_4=0; VAR_4<2*6; VAR_4++)
  {
    if (VAR_2[VAR_4])
    {
      VAR_2[VAR_4] = VAR_1;
    }
  }
}
