
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
struct TYPE_4__ {int nstat_sysinfo_string; } ;
struct TYPE_5__ {int nstat_sysinfo_key; int nstat_sysinfo_valsize; TYPE_1__ u; int nstat_sysinfo_flags; } ;
typedef TYPE_2__ nstat_sysinfo_keyval ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(nstat_sysinfo_keyval *VAR_2, int VAR_3, u_int8_t *VAR_4,
    u_int32_t VAR_5)
{
 VAR_2->nstat_sysinfo_key = VAR_3;
 VAR_2->nstat_sysinfo_flags = VAR_0;
 VAR_2->nstat_sysinfo_valsize = FUNC_1(VAR_5,
     VAR_1);
 FUNC_0(VAR_4, VAR_2->u.nstat_sysinfo_string, VAR_2->nstat_sysinfo_valsize);
}
