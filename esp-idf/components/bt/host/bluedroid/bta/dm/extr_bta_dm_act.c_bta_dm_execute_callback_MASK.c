
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int p_param; int (* p_exec_cback ) (int ) ;} ;
struct TYPE_5__ {TYPE_1__ exec_cback; } ;
typedef TYPE_2__ tBTA_DM_MSG ;


 int FUNC_0 (int ) ;

void FUNC_1(tBTA_DM_MSG *VAR_0)
{

    if (VAR_0->exec_cback.p_exec_cback == ((void*)0)) {
        return;
    }

    VAR_0->exec_cback.p_exec_cback(VAR_0->exec_cback.p_param);
}
