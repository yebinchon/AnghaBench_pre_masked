
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16 ;
struct TYPE_4__ {int** analog; int* pad; } ;
struct TYPE_3__ {int busy; size_t axis; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;

unsigned short FUNC_0(void)
{
  uint16 VAR_3 = (VAR_2.busy << 15) | VAR_1.analog[0][VAR_2.axis];

  if (!(VAR_1.pad[0] & VAR_0))
  {
    VAR_3 |= 0x100;
  }


  VAR_2.busy = 0;

  return VAR_3;
}
