
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int dtp_refcnt; scalar_t__ dtp_cacheid; TYPE_2__* dtp_difo; } ;
typedef TYPE_1__ dtrace_predicate_t ;
struct TYPE_8__ {scalar_t__ dtdo_refcnt; } ;
typedef TYPE_2__ dtrace_difo_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* FUNC_3 (int,int ) ;

__attribute__((used)) static dtrace_predicate_t *
FUNC_4(dtrace_difo_t *VAR_5)
{
 dtrace_predicate_t *VAR_6;

 FUNC_1(&VAR_3, VAR_2);
 FUNC_0(VAR_5->dtdo_refcnt != 0);

 VAR_6 = FUNC_3(sizeof (dtrace_predicate_t), VAR_1);
 VAR_6->dtp_difo = VAR_5;
 VAR_6->dtp_refcnt = 1;

 if (!FUNC_2(VAR_5))
  return (VAR_6);

 if (VAR_4 == VAR_0) {
  return (VAR_6);
 }

 VAR_6->dtp_cacheid = VAR_4++;

 return (VAR_6);
}
