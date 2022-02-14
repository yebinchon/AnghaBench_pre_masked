
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* lsp_args; } ;
typedef TYPE_1__ lockstat_probe_t ;
typedef int dtrace_id_t ;
struct TYPE_5__ {char* dtargd_native; char* dtargd_xlate; int dtargd_ndx; } ;
typedef TYPE_2__ dtrace_argdesc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*,int ) ;
 scalar_t__ FUNC_1 (char const*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_2, dtrace_id_t VAR_3, void *VAR_4, dtrace_argdesc_t *VAR_5)
{
#pragma unused(arg, id)
 lockstat_probe_t *VAR_6 = VAR_4;
 const char* VAR_7 = VAR_6->lsp_args;
 int VAR_8 = 0;

 VAR_5->dtargd_native[0] = '\0';
 VAR_5->dtargd_xlate[0] = '\0';

 while(VAR_7[0] != '\0') {
  if (VAR_8 == VAR_5->dtargd_ndx) {
   FUNC_0(VAR_5->dtargd_native, VAR_7, VAR_1);
   return;
  }
  VAR_7 += FUNC_1(VAR_7) + 1;
  VAR_8++;
 }

 VAR_5->dtargd_ndx = VAR_0;
}
