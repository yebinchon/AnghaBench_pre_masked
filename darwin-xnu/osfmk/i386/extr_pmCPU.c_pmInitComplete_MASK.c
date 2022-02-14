
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* pmCPUStateInit ) () ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;

__attribute__((used)) static void
FUNC_1(void)
{
    if (VAR_1
 && VAR_2 != ((void*)0)
 && VAR_2->pmCPUStateInit != ((void*)0)) {
 (*VAR_2->pmCPUStateInit)();
 VAR_1 = VAR_0;
    }
    VAR_3 = 1;
}
