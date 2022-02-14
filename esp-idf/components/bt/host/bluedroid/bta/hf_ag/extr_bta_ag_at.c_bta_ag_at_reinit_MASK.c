
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cmd_pos; int * p_cmd_buf; } ;
typedef TYPE_1__ tBTA_AG_AT_CB ;


 int FUNC_0 (int *) ;

void FUNC_1(tBTA_AG_AT_CB *VAR_0)
{
    if (VAR_0->p_cmd_buf != ((void*)0)) {
        FUNC_0(VAR_0->p_cmd_buf);
        VAR_0->p_cmd_buf = ((void*)0);
    }
    VAR_0->cmd_pos = 0;
}
