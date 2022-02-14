
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int speed1x; int _periodictiming; scalar_t__ isaudio; } ;


 TYPE_1__* VAR_0 ;

void FUNC_0(int VAR_1) {
  if (VAR_1) {
     if (VAR_0->isaudio || VAR_0->speed1x == 1)
        VAR_0->_periodictiming = 40000;
     else
        VAR_0->_periodictiming = 20000;
  }
  else {
     VAR_0->_periodictiming = 50000;
  }
}
