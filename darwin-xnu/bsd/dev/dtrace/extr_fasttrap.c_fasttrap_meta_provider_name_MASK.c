
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ftp_provid; } ;
typedef TYPE_1__ fasttrap_provider_t ;
struct TYPE_4__ {char* dtpv_name; } ;
typedef TYPE_2__ dtrace_provider_t ;



__attribute__((used)) static char*
FUNC_0(void *VAR_0)
{
 fasttrap_provider_t *VAR_1 = VAR_0;
 dtrace_provider_t *VAR_2 = (dtrace_provider_t*)(VAR_1->ftp_provid);
 return VAR_2->dtpv_name;
}
