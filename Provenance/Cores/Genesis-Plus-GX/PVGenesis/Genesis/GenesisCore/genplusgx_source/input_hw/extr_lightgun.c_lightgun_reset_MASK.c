
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int w; int h; } ;
struct TYPE_8__ {TYPE_1__ viewport; } ;
struct TYPE_7__ {int** analog; } ;
struct TYPE_6__ {int State; int Port; } ;


 TYPE_4__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 TYPE_2__ VAR_2 ;

void FUNC_0(int VAR_3)
{
  VAR_1.analog[VAR_3][0] = VAR_0.viewport.w / 2;
  VAR_1.analog[VAR_3][1] = VAR_0.viewport.h / 2;
  VAR_2.State = 0x40;
  VAR_2.Port = 4;
}
