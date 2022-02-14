
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int dtrace_dynvar_t ;
struct TYPE_4__ {int dtds_state; TYPE_2__* dtds_percpu; } ;
typedef TYPE_1__ dtrace_dstate_t ;
struct TYPE_5__ {int * dtdsc_rinsing; int * dtdsc_clean; int * dtdsc_dirty; } ;
typedef TYPE_2__ dtrace_dstate_percpu_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_1 (int **,int *,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(dtrace_dstate_t *VAR_2)
{
 dtrace_dynvar_t *VAR_3;
 dtrace_dstate_percpu_t *VAR_4;
 int VAR_5, VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < (int)VAR_1; VAR_5++) {
  VAR_4 = &VAR_2->dtds_percpu[VAR_5];

  FUNC_0(VAR_4->dtdsc_rinsing == ((void*)0));




  if (VAR_4->dtdsc_dirty == ((void*)0))
   continue;







  if (VAR_4->dtdsc_clean != ((void*)0))
   continue;

  VAR_6 = 1;




  do {
   VAR_3 = VAR_4->dtdsc_dirty;
   VAR_4->dtdsc_rinsing = VAR_3;
   FUNC_2();
  } while (FUNC_1(&VAR_4->dtdsc_dirty,
      VAR_3, ((void*)0)) != VAR_3);
 }

 if (!VAR_6) {



  return;
 }

 FUNC_3();

 for (VAR_5 = 0; VAR_5 < (int)VAR_1; VAR_5++) {
  VAR_4 = &VAR_2->dtds_percpu[VAR_5];

  if (VAR_4->dtdsc_rinsing == ((void*)0))
   continue;





  FUNC_0(VAR_4->dtdsc_clean == ((void*)0));
  VAR_4->dtdsc_clean = VAR_4->dtdsc_rinsing;
  VAR_4->dtdsc_rinsing = ((void*)0);
 }
 FUNC_3();

 VAR_2->dtds_state = VAR_0;
}
