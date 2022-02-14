
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sigh; scalar_t__ sigl; } ;
typedef TYPE_1__ FPU_REG ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*) ;

int FUNC_1(FPU_REG const *VAR_2)
{
 return ((FUNC_0(VAR_2) == VAR_0 + VAR_1)
  && !((VAR_2->sigh == 0x80000000) && (VAR_2->sigl == 0)));
}
