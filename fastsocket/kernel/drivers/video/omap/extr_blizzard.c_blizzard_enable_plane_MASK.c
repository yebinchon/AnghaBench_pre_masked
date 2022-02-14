
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enabled_planes; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_0(int VAR_1, int VAR_2)
{
 if (VAR_2)
  VAR_0.enabled_planes |= 1 << VAR_1;
 else
  VAR_0.enabled_planes &= ~(1 << VAR_1);

 return 0;
}
