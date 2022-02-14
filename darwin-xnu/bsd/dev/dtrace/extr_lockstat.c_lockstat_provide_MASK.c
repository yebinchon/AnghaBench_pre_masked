
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lsp_name; int * lsp_func; scalar_t__ lsp_id; } ;
typedef TYPE_1__ lockstat_probe_t ;
typedef int dtrace_probedesc_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,char*,int *,int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,char*,int *,int ) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void
FUNC_3(void *VAR_3, const dtrace_probedesc_t *VAR_4)
{
#pragma unused(arg, desc)

 int VAR_5 = 0;

 for (VAR_5 = 0; VAR_2[VAR_5].lsp_func != ((void*)0); VAR_5++) {
  lockstat_probe_t *VAR_6 = &VAR_2[VAR_5];

  if (FUNC_2(VAR_1, "mach_kernel",
      VAR_6->lsp_func, VAR_6->lsp_name) != 0)
   continue;

  FUNC_0(!VAR_6->lsp_id);
  VAR_6->lsp_id = FUNC_1(VAR_1,
      "mach_kernel", VAR_6->lsp_func, VAR_6->lsp_name,
      VAR_0, VAR_6);
 }
}
