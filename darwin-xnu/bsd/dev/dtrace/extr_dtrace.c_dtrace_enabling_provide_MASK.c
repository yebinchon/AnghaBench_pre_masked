
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int (* dtps_provide ) (void*,int *) ;} ;
struct TYPE_11__ {TYPE_2__ dtpv_pops; void* dtpv_arg; struct TYPE_11__* dtpv_next; } ;
typedef TYPE_3__ dtrace_provider_t ;
typedef int dtrace_probedesc_t ;
typedef scalar_t__ dtrace_genid_t ;
struct TYPE_12__ {int dten_ndesc; TYPE_1__** dten_desc; struct TYPE_12__* dten_next; } ;
typedef TYPE_4__ dtrace_enabling_t ;
struct TYPE_9__ {int dted_probe; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,TYPE_3__*) ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 TYPE_4__* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (void*,int *) ;

__attribute__((used)) static void
FUNC_5(dtrace_provider_t *VAR_6)
{
 int VAR_7, VAR_8 = 0;
 dtrace_probedesc_t VAR_9;
        dtrace_genid_t VAR_10;

 FUNC_0(&VAR_1, VAR_0);
 FUNC_0(&VAR_3, VAR_0);

 if (VAR_6 == ((void*)0)) {
  VAR_8 = 1;
  VAR_6 = VAR_2;
 }

 do {
  dtrace_enabling_t *VAR_11;
  void *VAR_12 = VAR_6->dtpv_arg;

retry:
  VAR_10 = VAR_5;
  for (VAR_11 = VAR_4; VAR_11 != ((void*)0);
      VAR_11 = VAR_11->dten_next) {
   for (VAR_7 = 0; VAR_7 < VAR_11->dten_ndesc; VAR_7++) {
    VAR_9 = VAR_11->dten_desc[VAR_7]->dted_probe;
    FUNC_3(&VAR_1);
    VAR_6->dtpv_pops.dtps_provide(VAR_12, &VAR_9);
    FUNC_2(&VAR_1);





    if (VAR_10 != VAR_5)
     goto retry;
   }
  }
 } while (VAR_8 && (VAR_6 = VAR_6->dtpv_next) != ((void*)0));

 FUNC_3(&VAR_1);
 FUNC_1(((void*)0), VAR_8 ? ((void*)0) : VAR_6);
 FUNC_2(&VAR_1);
}
