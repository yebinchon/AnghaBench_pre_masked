
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__** analog; } ;
struct TYPE_3__ {int State; int Port; scalar_t__ Wait; scalar_t__ Counter; } ;


 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;

void FUNC_0(int VAR_2)
{
  VAR_0.analog[VAR_2][0] = 0;
  VAR_0.analog[VAR_2][1] = 0;
  VAR_1.State = 0x60;
  VAR_1.Counter = 0;
  VAR_1.Wait = 0;
  VAR_1.Port = VAR_2;
}
