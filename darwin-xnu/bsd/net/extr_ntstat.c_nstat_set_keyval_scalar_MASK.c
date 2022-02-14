
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_4__ {int nstat_sysinfo_scalar; } ;
struct TYPE_5__ {int nstat_sysinfo_key; int nstat_sysinfo_valsize; TYPE_1__ u; int nstat_sysinfo_flags; } ;
typedef TYPE_2__ nstat_sysinfo_keyval ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(nstat_sysinfo_keyval *VAR_1, int VAR_2, u_int32_t VAR_3)
{
 VAR_1->nstat_sysinfo_key = VAR_2;
 VAR_1->nstat_sysinfo_flags = VAR_0;
 VAR_1->u.nstat_sysinfo_scalar = VAR_3;
 VAR_1->nstat_sysinfo_valsize = sizeof(VAR_1->u.nstat_sysinfo_scalar);
}
