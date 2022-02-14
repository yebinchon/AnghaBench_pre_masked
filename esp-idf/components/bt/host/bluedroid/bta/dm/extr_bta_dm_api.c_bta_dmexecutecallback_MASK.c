
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTA_DM_EXEC_CBACK ;
struct TYPE_4__ {int event; } ;
struct TYPE_5__ {int * p_exec_cback; void* p_param; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_EXECUTE_CBACK ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int) ;

void FUNC_2 (tBTA_DM_EXEC_CBACK *VAR_1, void *VAR_2)
{
    tBTA_DM_API_EXECUTE_CBACK *VAR_3;

    if ((VAR_3 = (tBTA_DM_API_EXECUTE_CBACK *) FUNC_1(sizeof(tBTA_DM_API_EXECUTE_CBACK))) != ((void*)0)) {
        VAR_3->hdr.event = VAR_0;
        VAR_3->p_param = VAR_2;
        VAR_3->p_exec_cback = VAR_1;
        FUNC_0(VAR_3);
    }
}
