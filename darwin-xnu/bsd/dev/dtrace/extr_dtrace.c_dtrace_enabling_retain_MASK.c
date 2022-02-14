
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ dts_nretained; } ;
typedef TYPE_2__ dtrace_state_t ;
struct TYPE_8__ {struct TYPE_8__* dten_prev; struct TYPE_8__* dten_next; TYPE_1__* dten_vstate; } ;
typedef TYPE_3__ dtrace_enabling_t ;
struct TYPE_6__ {TYPE_2__* dtvs_state; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__* VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_2(dtrace_enabling_t *VAR_6)
{
 dtrace_state_t *VAR_7;

 FUNC_1(&VAR_2, VAR_1);
 FUNC_0(VAR_6->dten_next == ((void*)0) && VAR_6->dten_prev == ((void*)0));
 FUNC_0(VAR_6->dten_vstate != ((void*)0));

 VAR_7 = VAR_6->dten_vstate->dtvs_state;
 FUNC_0(VAR_7 != ((void*)0));




 if (VAR_7->dts_nretained >= VAR_3)
  return (VAR_0);

 VAR_7->dts_nretained++;
        VAR_5++;

 if (VAR_4 == ((void*)0)) {
  VAR_4 = VAR_6;
  return (0);
 }

 VAR_6->dten_next = VAR_4;
 VAR_4->dten_prev = VAR_6;
 VAR_4 = VAR_6;

 return (0);
}
