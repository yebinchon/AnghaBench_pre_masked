
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* pmap_t ;
struct TYPE_5__ {scalar_t__ pm_eptp; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int ,int ,int) ;

void
FUNC_5(void **VAR_3, void **VAR_4)
{
 pmap_t VAR_5;

 if ((VAR_3 == ((void*)0)) || (VAR_4 == ((void*)0))) {
  return;
 }

 VAR_5 = FUNC_4(FUNC_2(FUNC_1()), 0, (VAR_0 | VAR_1));
 if (VAR_5 == VAR_2) {
  *VAR_3 = ((void*)0);
  *VAR_4 = ((void*)0);
  return;
 }

 FUNC_0(FUNC_3(VAR_5));

 *VAR_3 = (void*)VAR_5;
 *VAR_4 = (void*)(VAR_5->pm_eptp);
 return;
}
