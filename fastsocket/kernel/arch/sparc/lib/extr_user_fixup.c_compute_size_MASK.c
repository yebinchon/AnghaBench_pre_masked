
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long fault_address; } ;


 TYPE_1__* FUNC_0 () ;

__attribute__((used)) static unsigned long FUNC_1(unsigned long VAR_0, unsigned long VAR_1, unsigned long *VAR_2)
{
 unsigned long VAR_3 = FUNC_0()->fault_address;
 unsigned long VAR_4 = VAR_0 + VAR_1;

 if (VAR_3 < VAR_0 || VAR_3 >= VAR_4) {
  *VAR_2 = 0;
 } else {
  *VAR_2 = VAR_3 - VAR_0;
  VAR_1 = VAR_4 - VAR_3;
 }
 return VAR_1;
}
