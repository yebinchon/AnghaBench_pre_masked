
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int command_opcode_t ;
struct TYPE_6__ {void* context; TYPE_2__* response; int callback; } ;
typedef TYPE_1__ command_complete_hack_t ;
struct TYPE_7__ {void** data; int offset; int event; } ;
typedef TYPE_2__ BT_HDR ;


 int VAR_0 ;






 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,void**) ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,TYPE_2__*,int ) ;
 TYPE_2__* FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;

__attribute__((used)) static void FUNC_5(BT_HDR *VAR_14, void *VAR_15)
{

    command_opcode_t VAR_16;
    uint8_t *VAR_17 = VAR_14->data + VAR_14->offset + 3;
    FUNC_1(VAR_16, VAR_17);
    switch (VAR_16) {
        case 133:
            VAR_4 = *VAR_17;
            FUNC_4(&VAR_3);
            break;
        case 128:
            VAR_4 = *VAR_17;
            FUNC_4(&VAR_3);
            break;
        case 132: {
            VAR_6 = *VAR_17;
            FUNC_4(&VAR_5);
            break;
        }
        case 131:
            VAR_8 = *VAR_17;
            FUNC_4(&VAR_7);
            break;
        case 129:
            VAR_13 = *VAR_17;
            FUNC_4(&VAR_12);
            break;
        case 130:
            VAR_11 = *VAR_17;
            FUNC_4(&VAR_10);
            break;
        default:
            break;
    }

    BT_HDR *VAR_18 = FUNC_3(sizeof(BT_HDR) + sizeof(command_complete_hack_t));
    command_complete_hack_t *VAR_19 = (command_complete_hack_t *)&VAR_18->data[0];

    FUNC_0("btu_hcif_command_complete_evt\n");

    VAR_19->callback = VAR_9;
    VAR_19->response = VAR_14;
    VAR_19->context = VAR_15;

    VAR_18->event = VAR_0;

    FUNC_2(VAR_2, VAR_18, VAR_1);
}
