
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
typedef int session_t ;
struct TYPE_10__ {TYPE_2__* sec1; } ;
struct TYPE_8__ {TYPE_2__* data; } ;
struct TYPE_9__ {int msg; TYPE_1__ device_verify_data; struct TYPE_9__* sr1; struct TYPE_9__* sr0; } ;
typedef TYPE_2__ SessionResp1 ;
typedef TYPE_2__ SessionResp0 ;
typedef TYPE_4__ SessionData ;
typedef TYPE_2__ Sec1Payload ;




 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(session_t *VAR_0, uint32_t VAR_1, SessionData *VAR_2)
{
    Sec1Payload *VAR_3 = VAR_2->sec1;

    if (!VAR_3) {
        return;
    }

    switch (VAR_3->msg) {
        case 129:
            {
                SessionResp0 *VAR_4 = VAR_3->sr0;
                if (VAR_4) {
                    FUNC_0(VAR_4);
                }
                break;
            }
        case 128:
            {
                SessionResp1 *VAR_5 = VAR_3->sr1;
                if (VAR_5) {
                    FUNC_0(VAR_5->device_verify_data.data);
                    FUNC_0(VAR_5);
                }
                break;
            }
        default:
            break;
    }
    FUNC_0(VAR_3);

    return;
}
