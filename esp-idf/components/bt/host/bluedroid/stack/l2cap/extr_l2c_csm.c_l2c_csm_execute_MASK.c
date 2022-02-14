
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int chnl_state; } ;
typedef TYPE_1__ tL2C_CCB ;
typedef int UINT16 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,void*) ;
 int FUNC_2 (TYPE_1__*,int ,void*) ;
 int FUNC_3 (TYPE_1__*,int ,void*) ;
 int FUNC_4 (TYPE_1__*,int ,void*) ;
 int FUNC_5 (TYPE_1__*,int ,void*) ;
 int FUNC_6 (TYPE_1__*,int ,void*) ;
 int FUNC_7 (TYPE_1__*,int ,void*) ;
 int FUNC_8 (TYPE_1__*,int ,void*) ;
 int FUNC_9 (TYPE_1__*,int ,void*) ;

void FUNC_10 (tL2C_CCB *VAR_0, UINT16 VAR_1, void *VAR_2)
{
    switch (VAR_0->chnl_state) {
    case 136:
        FUNC_1 (VAR_0, VAR_1, VAR_2);
        break;

    case 133:
        FUNC_4 (VAR_0, VAR_1, VAR_2);
        break;

    case 132:
        FUNC_5 (VAR_0, VAR_1, VAR_2);
        break;

    case 131:
        FUNC_8 (VAR_0, VAR_1, VAR_2);
        break;

    case 129:
        FUNC_6 (VAR_0, VAR_1, VAR_2);
        break;

    case 135:
        FUNC_2 (VAR_0, VAR_1, VAR_2);
        break;

    case 134:
        FUNC_3 (VAR_0, VAR_1, VAR_2);
        break;

    case 130:
        FUNC_9 (VAR_0, VAR_1, VAR_2);
        break;

    case 128:
        FUNC_7 (VAR_0, VAR_1, VAR_2);
        break;

    default:
        FUNC_0("Unhandled event! event = %d", VAR_1);
        break;
    }
}
