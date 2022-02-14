
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint_t ;
struct TYPE_4__ {scalar_t__ dtdv_id; } ;
typedef TYPE_1__ dtrace_difv_t ;
struct TYPE_5__ {scalar_t__ dtdo_refcnt; size_t dtdo_varlen; TYPE_1__* dtdo_vartab; } ;
typedef TYPE_2__ dtrace_difo_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_3(dtrace_difo_t *VAR_4)
{
 uint_t VAR_5;

 FUNC_1(&VAR_2, VAR_1);

 VAR_4->dtdo_refcnt++;
 FUNC_0(VAR_4->dtdo_refcnt != 0);





 for (VAR_5 = 0; VAR_5 < VAR_4->dtdo_varlen; VAR_5++) {
  dtrace_difv_t *VAR_6 = &VAR_4->dtdo_vartab[VAR_5];

  if (VAR_6->dtdv_id != VAR_0)
   continue;

  if (VAR_3++ == 0)
   FUNC_2();
 }
}
