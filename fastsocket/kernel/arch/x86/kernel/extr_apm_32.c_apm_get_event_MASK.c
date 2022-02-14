
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct apm_bios_call {int err; scalar_t__ ecx; scalar_t__ ebx; int func; } ;
typedef scalar_t__ apm_eventinfo_t ;
typedef scalar_t__ apm_event_t ;
struct TYPE_2__ {int connection_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct apm_bios_call*) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_1(apm_event_t *VAR_3, apm_eventinfo_t *VAR_4)
{
 struct apm_bios_call VAR_5;

 VAR_5.func = VAR_0;
 VAR_5.ebx = VAR_5.ecx = 0;

 if (FUNC_0(&VAR_5))
  return VAR_5.err;

 *VAR_3 = VAR_5.ebx;
 if (VAR_2.connection_version < 0x0102)
  *VAR_4 = ~0;
 else
  *VAR_4 = VAR_5.ecx;
 return VAR_1;
}
