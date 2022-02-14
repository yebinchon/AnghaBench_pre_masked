
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dcr_action; } ;
struct TYPE_7__ {TYPE_1__ dts_cred; } ;
typedef TYPE_2__ dtrace_state_t ;
struct TYPE_9__ {size_t cpu_id; } ;
struct TYPE_8__ {int cpuc_dtrace_flags; } ;


 TYPE_5__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 scalar_t__ FUNC_0 () ;

__attribute__((used)) static int
FUNC_1(dtrace_state_t *VAR_4)
{
 if (FUNC_0())
  goto bad;

 if (VAR_4->dts_cred.dcr_action & VAR_2)
  return (1);

bad:
 VAR_3[VAR_0->cpu_id].cpuc_dtrace_flags |= VAR_1;

 return (0);
}
