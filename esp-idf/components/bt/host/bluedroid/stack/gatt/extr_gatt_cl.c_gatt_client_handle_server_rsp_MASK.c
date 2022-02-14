
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct TYPE_24__ {scalar_t__ payload_size; } ;
typedef TYPE_1__ tGATT_TCB ;
struct TYPE_25__ {int status; scalar_t__ retry_count; int rsp_timer_ent; } ;
typedef TYPE_2__ tGATT_CLCB ;
typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT16 ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__,...) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_2__* FUNC_4 (TYPE_1__*,scalar_t__*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_2__*,int ,int *) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*,scalar_t__,scalar_t__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_1__*,TYPE_2__*,scalar_t__,scalar_t__*) ;
 int FUNC_11 (TYPE_1__*,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_12 (TYPE_1__*,TYPE_2__*,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_13 (TYPE_1__*,TYPE_2__*,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_14 (TYPE_1__*,TYPE_2__*,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_15 (TYPE_1__*,TYPE_2__*,scalar_t__,scalar_t__,scalar_t__*) ;

void FUNC_16 (tGATT_TCB *VAR_1, UINT8 VAR_2,
                                    UINT16 VAR_3, UINT8 *VAR_4)
{
    tGATT_CLCB *VAR_5 = ((void*)0);
    UINT8 VAR_6;

    if (VAR_2 != 141 && VAR_2 != 140) {
        VAR_5 = FUNC_4(VAR_1, &VAR_6);

        VAR_6 = FUNC_5(VAR_6);

        if (VAR_5 == ((void*)0) || (VAR_6 != VAR_2 && VAR_2 != 139)) {
            FUNC_1 ("ATT - Ignore wrong response. Receives (%02x)                                 Request(%02x) Ignored", VAR_2, VAR_6);


            return;
        } else {
            FUNC_2 (&VAR_5->rsp_timer_ent);
            VAR_5->retry_count = 0;
        }
    }


    if (VAR_3 >= VAR_1->payload_size) {
        FUNC_0("invalid response/indicate pkt size: %d, PDU size: %d", VAR_3 + 1, VAR_1->payload_size);
        if (VAR_2 != 140 &&
                VAR_2 != 141) {
            FUNC_6(VAR_5, VAR_0, ((void*)0));
        }
    } else {
        switch (VAR_2) {
        case 139:
            FUNC_7(VAR_1, VAR_5, VAR_2, VAR_3, VAR_4);
            break;

        case 135:
            FUNC_10(VAR_1, VAR_5, VAR_3 , VAR_4);
            break;

        case 137:
            FUNC_14(VAR_1, VAR_5, VAR_2, VAR_3, VAR_4);
            break;

        case 130:
        case 131:
            FUNC_13(VAR_1, VAR_5, VAR_2, VAR_3, VAR_4);
            break;

        case 133:
        case 132:
        case 129:
            FUNC_15(VAR_1, VAR_5, VAR_2, VAR_3, VAR_4);
            break;

        case 136:
            FUNC_8(VAR_1, VAR_5, VAR_3, VAR_4);
            break;

        case 128:
            FUNC_9(VAR_5);
            break;

        case 134:
            FUNC_12(VAR_1, VAR_5, VAR_2, VAR_3, VAR_4);
            break;

        case 138:
            FUNC_6(VAR_5, VAR_5->status, ((void*)0));
            break;

        case 140:
        case 141:
            FUNC_11(VAR_1, VAR_2, VAR_3, VAR_4);
            break;

        default:
            FUNC_0("Unknown opcode = %d", VAR_2);
            break;
        }
    }

    if (VAR_2 != 141 && VAR_2 != 140) {
        FUNC_3(VAR_1);
    }

    return;
}
