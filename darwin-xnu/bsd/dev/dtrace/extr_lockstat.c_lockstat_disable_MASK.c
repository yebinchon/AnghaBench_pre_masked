
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t lsp_probe; } ;
typedef TYPE_1__ lockstat_probe_t ;
typedef int dtrace_id_t ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,size_t) ;
 scalar_t__* VAR_2 ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(void *VAR_3, dtrace_id_t VAR_4, void *VAR_5)
{
#pragma unused(arg, id)

 lockstat_probe_t *VAR_6 = VAR_5;
 int VAR_7;

 FUNC_0(VAR_2[VAR_6->lsp_probe]);

 VAR_2[VAR_6->lsp_probe] = 0;
 FUNC_1(VAR_0, VAR_6->lsp_probe);
 FUNC_2();




 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  if (VAR_2[VAR_7]) {





   return;
  }
 }

}
