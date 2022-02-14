
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int property; } ;
typedef TYPE_1__ param_dispatch_t ;


 scalar_t__ FUNC_0 (int ,int ) ;

int FUNC_1(const param_dispatch_t* VAR_0, size_t VAR_1)
{
 int VAR_2;
 for (VAR_2 = 1; VAR_2 < VAR_1; VAR_2++)
  if (FUNC_0(VAR_0[VAR_2 - 1].property, VAR_0[VAR_2].property) >= 0)
   return -1;
 return 0;
}
