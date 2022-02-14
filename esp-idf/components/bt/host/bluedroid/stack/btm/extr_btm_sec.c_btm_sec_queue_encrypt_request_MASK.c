
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBT_TRANSPORT ;
struct TYPE_4__ {int bd_addr; int transport; void* p_ref_data; int * p_callback; scalar_t__ psm; } ;
typedef TYPE_1__ tBTM_SEC_QUEUE_ENTRY ;
typedef int tBTM_SEC_CALLBACK ;
typedef int UINT8 ;
struct TYPE_5__ {int sec_pending_q; } ;
typedef int BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 int FUNC_0 (int ,TYPE_1__*,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static BOOLEAN FUNC_3 (BD_ADDR VAR_5, tBT_TRANSPORT VAR_6,
        tBTM_SEC_CALLBACK *VAR_7, void *VAR_8)
{
    tBTM_SEC_QUEUE_ENTRY *VAR_9;
    VAR_9 = (tBTM_SEC_QUEUE_ENTRY *)FUNC_2(sizeof(tBTM_SEC_QUEUE_ENTRY) + 1);

    if (VAR_9) {
        VAR_9->psm = 0;
        VAR_9->p_callback = VAR_7;
        VAR_9->p_ref_data = (void *)(VAR_9 + 1);
        *(UINT8 *)VAR_9->p_ref_data = *(UINT8 *)(VAR_8);
        VAR_9->transport = VAR_6;
        FUNC_1(VAR_9->bd_addr, VAR_5, VAR_0);
        FUNC_0(VAR_4.sec_pending_q, VAR_9, VAR_2);
        return VAR_3;
    }

    return VAR_1;
}
