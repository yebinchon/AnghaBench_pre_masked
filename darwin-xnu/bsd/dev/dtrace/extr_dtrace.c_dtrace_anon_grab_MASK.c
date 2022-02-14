
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int dtrace_state_t ;
struct TYPE_2__ {int * dta_state; int * dta_enabling; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static dtrace_state_t *
FUNC_3(void)
{
 dtrace_state_t *VAR_4;

 FUNC_1(&VAR_2, VAR_0);

 if ((VAR_4 = VAR_1.dta_state) == ((void*)0)) {
  FUNC_0(VAR_1.dta_enabling == ((void*)0));
  return (((void*)0));
 }

 FUNC_0(VAR_1.dta_enabling != ((void*)0));
 FUNC_0(VAR_3 != ((void*)0));

 FUNC_2(VAR_1.dta_enabling);
 VAR_1.dta_enabling = ((void*)0);
 VAR_1.dta_state = ((void*)0);

 return (VAR_4);
}
