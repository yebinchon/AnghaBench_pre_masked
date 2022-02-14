
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* dtpr_provider; } ;
typedef TYPE_2__ dtrace_probe_t ;
struct TYPE_3__ {char const* dtpv_name; } ;



__attribute__((used)) static const char*
FUNC_0(void *VAR_0, uintptr_t VAR_1)
{
#pragma unused(offs)
 dtrace_probe_t *VAR_2 = (dtrace_probe_t*)VAR_0;
 return VAR_2->dtpr_provider->dtpv_name;
}
