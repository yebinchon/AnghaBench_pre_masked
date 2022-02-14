
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dtpk_name; int dtpk_func; int dtpk_mod; int dtpk_prov; } ;
typedef TYPE_1__ dtrace_probekey_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(dtrace_probekey_t *VAR_0)
{
 FUNC_0(VAR_0->dtpk_prov);
 FUNC_0(VAR_0->dtpk_mod);
 FUNC_0(VAR_0->dtpk_func);
 FUNC_0(VAR_0->dtpk_name);
}
