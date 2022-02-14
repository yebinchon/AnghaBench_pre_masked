
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int (* dtps_enable ) (int ,int ,int ) ;} ;
struct TYPE_9__ {int dtpv_arg; TYPE_2__ dtpv_pops; int dtpv_ecb_count; } ;
typedef TYPE_3__ dtrace_provider_t ;
struct TYPE_10__ {scalar_t__ dtpr_predcache; TYPE_5__* dtpr_ecb_last; int dtpr_arg; int dtpr_id; TYPE_5__* dtpr_ecb; TYPE_3__* dtpr_provider; } ;
typedef TYPE_4__ dtrace_probe_t ;
struct TYPE_11__ {struct TYPE_11__* dte_next; TYPE_1__* dte_predicate; TYPE_4__* dte_probe; } ;
typedef TYPE_5__ dtrace_ecb_t ;
struct TYPE_7__ {scalar_t__ dtp_cacheid; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_4(dtrace_ecb_t *VAR_3)
{
 dtrace_probe_t *VAR_4 = VAR_3->dte_probe;

 FUNC_1(&VAR_1, VAR_0);
 FUNC_1(&VAR_2, VAR_0);
 FUNC_0(VAR_3->dte_next == ((void*)0));

 if (VAR_4 == ((void*)0)) {



     return(0);
 }

 VAR_4->dtpr_provider->dtpv_ecb_count++;
 if (VAR_4->dtpr_ecb == ((void*)0)) {
  dtrace_provider_t *VAR_5 = VAR_4->dtpr_provider;




  VAR_4->dtpr_ecb = VAR_4->dtpr_ecb_last = VAR_3;

  if (VAR_3->dte_predicate != ((void*)0))
   VAR_4->dtpr_predcache = VAR_3->dte_predicate->dtp_cacheid;

  return (VAR_5->dtpv_pops.dtps_enable(VAR_5->dtpv_arg,
                    VAR_4->dtpr_id, VAR_4->dtpr_arg));
 } else {





  FUNC_0(VAR_4->dtpr_ecb_last != ((void*)0));
  VAR_4->dtpr_ecb_last->dte_next = VAR_3;
  VAR_4->dtpr_ecb_last = VAR_3;
  VAR_4->dtpr_predcache = 0;

  FUNC_2();
  return(0);
 }
}
