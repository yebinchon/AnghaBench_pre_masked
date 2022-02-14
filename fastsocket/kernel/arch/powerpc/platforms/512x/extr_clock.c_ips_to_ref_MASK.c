
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int scfr1; } ;


 TYPE_1__* VAR_0 ;
 long FUNC_0 (unsigned long) ;

__attribute__((used)) static long FUNC_1(unsigned long VAR_1)
{
 int VAR_2 = (VAR_0->scfr1 >> 23) & 0x7;

 VAR_1 *= VAR_2;
 VAR_1 *= 2;
 return FUNC_0(VAR_1);
}
