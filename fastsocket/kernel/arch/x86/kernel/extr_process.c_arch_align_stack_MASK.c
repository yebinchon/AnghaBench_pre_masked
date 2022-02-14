
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int personality; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ VAR_2 ;

unsigned long FUNC_1(unsigned long VAR_3)
{
 if (!(VAR_1->personality & VAR_0) && VAR_2)
  VAR_3 -= FUNC_0() % 8192;
 return VAR_3 & ~0xf;
}
