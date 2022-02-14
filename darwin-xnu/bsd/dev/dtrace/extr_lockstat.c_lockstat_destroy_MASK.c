
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t lsp_probe; scalar_t__ lsp_id; } ;
typedef TYPE_1__ lockstat_probe_t ;
typedef int dtrace_id_t ;


 int FUNC_0 (int) ;
 int * VAR_0 ;

__attribute__((used)) static void
FUNC_1(void *VAR_1, dtrace_id_t VAR_2, void *VAR_3)
{
#pragma unused(arg, id)

 lockstat_probe_t *VAR_4 = VAR_3;

 FUNC_0(!VAR_0[VAR_4->lsp_probe]);
 VAR_4->lsp_id = 0;
}
