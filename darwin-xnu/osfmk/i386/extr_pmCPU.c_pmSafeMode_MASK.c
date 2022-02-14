
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ state; } ;
typedef TYPE_1__ x86_lcpu_t ;
typedef int uint32_t ;
struct TYPE_7__ {int (* pmCPUSafeMode ) (TYPE_1__*,int) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 TYPE_5__* VAR_4 ;
 int FUNC_1 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_2 () ;

void
FUNC_3(x86_lcpu_t *VAR_5, uint32_t VAR_6)
{
    if (VAR_4 != ((void*)0)
 && VAR_4->pmCPUSafeMode != ((void*)0))
 VAR_4->pmCPUSafeMode(VAR_5, VAR_6);
    else {
 if (VAR_6 & VAR_2) {
     VAR_5->state = VAR_0;
     if (VAR_5 == FUNC_2()) {
  while (VAR_5->state == VAR_0)
      FUNC_0();
     }
 }





 if (VAR_6 & VAR_3) {
     VAR_5->state = VAR_1;
 }
    }
}
