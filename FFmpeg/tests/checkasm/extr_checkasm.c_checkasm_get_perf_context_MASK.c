
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int sysfd; TYPE_1__* current_func_ver; } ;
struct TYPE_7__ {int sysfd; } ;
struct TYPE_6__ {TYPE_2__ perf; } ;
typedef TYPE_2__ CheckasmPerf ;


 int FUNC_0 (TYPE_2__*,int ,int) ;
 TYPE_3__ VAR_0 ;

CheckasmPerf *FUNC_1(void)
{
    CheckasmPerf *VAR_1 = &VAR_0.current_func_ver->perf;
    FUNC_0(VAR_1, 0, sizeof(*VAR_1));
    VAR_1->sysfd = VAR_0.sysfd;
    return VAR_1;
}
