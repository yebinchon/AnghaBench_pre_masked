
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t lsp_probe; } ;
typedef TYPE_1__ lockstat_probe_t ;
typedef scalar_t__ dtrace_id_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,size_t) ;
 scalar_t__* VAR_1 ;
 int FUNC_2 () ;

__attribute__((used)) static int
FUNC_3(void *VAR_2, dtrace_id_t VAR_3, void *VAR_4)
{
#pragma unused(arg)

 lockstat_probe_t *VAR_5 = VAR_4;

 FUNC_0(!VAR_1[VAR_5->lsp_probe]);

 VAR_1[VAR_5->lsp_probe] = VAR_3;
 FUNC_2();

 FUNC_1(VAR_0, VAR_5->lsp_probe);
 FUNC_2();
 return(0);

}
