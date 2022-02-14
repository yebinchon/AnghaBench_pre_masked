
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int d60; } ;
struct drx397xD_state {TYPE_1__ config; } ;


 int FUNC_0 (struct drx397xD_state*,int) ;

__attribute__((used)) static int FUNC_1(struct drx397xD_state *VAR_0, int *VAR_1)
{
 int VAR_2;

 *VAR_1 = 0;

 VAR_2 = FUNC_0(VAR_0, 0x082004b);
 if (VAR_2 < 0)
  return VAR_2;

 if (VAR_0->config.d60 != 2)
  return 0;

 if ((VAR_2 & 7) == 7)
  *VAR_1 |= 1;
 if ((VAR_2 & 3) == 3)
  *VAR_1 |= 2;
 if (VAR_2 & 1)
  *VAR_1 |= 4;
 return 0;
}
