
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ payload_size; } ;
typedef TYPE_1__ tGATT_TCB ;
typedef int UINT8 ;
typedef scalar_t__ UINT16 ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int,scalar_t__,int*) ;
 int FUNC_2 (TYPE_1__*,int,scalar_t__,int*) ;
 int FUNC_3 (TYPE_1__*,int ,int,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int,scalar_t__,int*) ;
 int FUNC_6 (TYPE_1__*,int,scalar_t__,int*) ;
 int FUNC_7 (TYPE_1__*,scalar_t__,int*) ;
 int FUNC_8 (TYPE_1__*,int,scalar_t__,int*) ;
 int FUNC_9 (TYPE_1__*,int,scalar_t__,int*) ;
 int FUNC_10 (TYPE_1__*,int) ;

void FUNC_11 (tGATT_TCB *VAR_2, UINT8 VAR_3,
                                    UINT16 VAR_4, UINT8 *VAR_5)
{

    if (!FUNC_4(VAR_2) && VAR_3 != 140) {
        return;
    }



    if (VAR_4 >= VAR_2->payload_size) {
        FUNC_0("server receive invalid PDU size:%d pdu size:%d", VAR_4 + 1, VAR_2->payload_size );

        if (VAR_3 != 141 &&
                VAR_3 != 128 &&
                VAR_3 != 140) {
            FUNC_3 (VAR_2, VAR_1, VAR_3, 0, VAR_0);
        }

    } else {
        switch (VAR_3) {
        case 132:
        case 137:
            FUNC_8 (VAR_2, VAR_3, VAR_4, VAR_5);
            break;

        case 138:
            FUNC_6(VAR_2, VAR_3, VAR_4, VAR_5);
            break;

        case 131:

            FUNC_9(VAR_2, VAR_3, VAR_4, VAR_5);
            break;


        case 134:
        case 133:
        case 129:
        case 141:
        case 128:
        case 135:
            FUNC_5 (VAR_2, VAR_3, VAR_4, VAR_5);
            break;

        case 140:
            FUNC_10 (VAR_2, VAR_3);
            break;

        case 136:
            FUNC_7 (VAR_2, VAR_4, VAR_5);
            break;

        case 139:
            FUNC_1 (VAR_2, VAR_3, VAR_4, VAR_5);
            break;

        case 130:
            FUNC_2 (VAR_2, VAR_3, VAR_4, VAR_5);
            break;

        default:
            break;
        }
    }
}
