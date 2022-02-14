
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mask; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline unsigned long FUNC_0(unsigned long VAR_1)
{
 unsigned long VAR_2 = 0;
 int VAR_3;

 for (VAR_3 = 0; VAR_0[VAR_3].mask; VAR_3++) {
  if ((VAR_2 = (VAR_1 & VAR_0[VAR_3].mask)) != 0UL)
   return VAR_2;
 }
 return VAR_2;
}
