
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int dcr_action; } ;
struct TYPE_9__ {TYPE_1__ dts_cred; } ;
typedef TYPE_2__ dtrace_state_t ;
struct TYPE_12__ {size_t cpu_id; } ;
struct TYPE_11__ {int cpuc_dtrace_flags; } ;
struct TYPE_10__ {int p_lflag; } ;


 TYPE_7__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_3 ;
 TYPE_6__* VAR_4 ;
 TYPE_4__* FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static int
FUNC_5(dtrace_state_t *VAR_5)
{
 if (FUNC_0(FUNC_1()->p_lflag, VAR_3))
  goto bad;

 if (FUNC_4() && !FUNC_2() && !FUNC_3(FUNC_1()))
  goto bad;

 if (VAR_5->dts_cred.dcr_action & VAR_2)
  return (1);

bad:
 VAR_4[VAR_0->cpu_id].cpuc_dtrace_flags |= VAR_1;

 return (0);
}
