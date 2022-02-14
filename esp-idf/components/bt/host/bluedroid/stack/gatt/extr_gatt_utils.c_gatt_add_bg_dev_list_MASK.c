
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ gatt_if; scalar_t__ listening; } ;
typedef TYPE_1__ tGATT_REG ;
typedef scalar_t__ tGATT_IF ;
struct TYPE_7__ {scalar_t__* gatt_if; scalar_t__* listen_gif; } ;
typedef TYPE_2__ tGATT_BG_CONN_DEV ;
typedef size_t UINT8 ;
typedef scalar_t__ BOOLEAN ;
typedef int BD_ADDR ;


 scalar_t__ FUNC_0 (scalar_t__,int ,int ,int *) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_4 ;
 TYPE_2__* FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 (int ) ;

BOOLEAN FUNC_5(tGATT_REG *VAR_5, BD_ADDR VAR_6, BOOLEAN VAR_7)
{
    tGATT_IF VAR_8 = VAR_5->gatt_if;
    tGATT_BG_CONN_DEV *VAR_9 = ((void*)0);
    UINT8 VAR_10;
    BOOLEAN VAR_11 = VAR_0;

    if ((VAR_9 = FUNC_4(VAR_6)) == ((void*)0)) {
        VAR_9 = FUNC_3(VAR_6);
    }

    if (VAR_9) {
        for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10 ++) {
            if (VAR_7) {
                if (VAR_9->gatt_if[VAR_10] == VAR_8) {
                    FUNC_2("device already in iniator white list");
                    return VAR_4;
                } else if (VAR_9->gatt_if[VAR_10] == 0) {
                    VAR_9->gatt_if[VAR_10] = VAR_8;
                    if (VAR_10 == 0) {
                        VAR_11 = FUNC_1(VAR_4, VAR_6);
                    } else {
                        VAR_11 = VAR_4;
                    }
                    break;
                }
            } else {
                if (VAR_9->listen_gif[VAR_10] == VAR_8) {
                    FUNC_2("device already in adv white list");
                    return VAR_4;
                } else if (VAR_9->listen_gif[VAR_10] == 0) {
                    if (VAR_5->listening == VAR_1) {
                        VAR_5->listening = VAR_2;
                    }

                    VAR_5->listening ++;
                    VAR_9->listen_gif[VAR_10] = VAR_8;

                    if (VAR_10 == 0) {

                        VAR_11 = FUNC_0(VAR_4, VAR_6, 0, ((void*)0));
                    } else {
                        VAR_11 = VAR_4;
                    }
                    break;
                }
            }
        }
    } else {
        FUNC_2("no device record available");
    }

    return VAR_11;
}
