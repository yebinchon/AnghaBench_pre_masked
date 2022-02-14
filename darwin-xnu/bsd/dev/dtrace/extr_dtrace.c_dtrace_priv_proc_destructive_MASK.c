
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int dcr_action; } ;
struct TYPE_11__ {TYPE_1__ dts_cred; } ;
typedef TYPE_2__ dtrace_state_t ;
struct TYPE_14__ {size_t cpu_id; } ;
struct TYPE_13__ {int cpuc_dtrace_flags; } ;
struct TYPE_12__ {int p_lflag; } ;


 TYPE_9__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_5 ;
 TYPE_8__* VAR_6 ;
 TYPE_6__* FUNC_1 () ;
 int FUNC_2 (TYPE_6__*) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_7(dtrace_state_t *VAR_7)
{
 int VAR_8 = VAR_7->dts_cred.dcr_action;

 if (FUNC_0(FUNC_1()->p_lflag, VAR_5))
  goto bad;

 if (FUNC_3() && !FUNC_2(FUNC_1()))
  goto bad;

 if (((VAR_8 & VAR_3) == 0) &&
     FUNC_6(VAR_7) == 0)
  goto bad;

 if (((VAR_8 & VAR_2) == 0) &&
     FUNC_5(VAR_7) == 0)
  goto bad;

 if (((VAR_8 & VAR_4) == 0) &&
     FUNC_4() == 0)
  goto bad;

 return (1);

bad:
 VAR_6[VAR_0->cpu_id].cpuc_dtrace_flags |= VAR_1;

 return (0);
}
