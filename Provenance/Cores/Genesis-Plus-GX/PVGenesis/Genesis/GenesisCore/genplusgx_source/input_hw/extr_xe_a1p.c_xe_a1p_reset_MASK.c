
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int** analog; } ;
struct TYPE_3__ {int State; scalar_t__ Latency; scalar_t__ Counter; } ;


 TYPE_2__ VAR_0 ;
 TYPE_1__* VAR_1 ;

void FUNC_0(int VAR_2)
{
  VAR_0.analog[VAR_2][0] = 128;
  VAR_0.analog[VAR_2][1] = 128;
  VAR_0.analog[VAR_2+1][0] = 128;
  VAR_2 >>= 2;
  VAR_1[VAR_2].State = 0x40;
  VAR_1[VAR_2].Counter = 0;
  VAR_1[VAR_2].Latency = 0;
}
