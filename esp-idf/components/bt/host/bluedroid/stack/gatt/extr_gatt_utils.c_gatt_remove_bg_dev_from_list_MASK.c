
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ gatt_if; int listening; } ;
typedef TYPE_1__ tGATT_REG ;
typedef scalar_t__ tGATT_IF ;
struct TYPE_7__ {scalar_t__* gatt_if; scalar_t__* listen_gif; int remote_bda; } ;
typedef TYPE_2__ tGATT_BG_CONN_DEV ;
typedef size_t UINT8 ;
typedef scalar_t__ BOOLEAN ;
typedef int BD_ADDR ;


 scalar_t__ FUNC_0 (scalar_t__,int ,int ,int *) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;

BOOLEAN FUNC_4(tGATT_REG *VAR_3, BD_ADDR VAR_4, BOOLEAN VAR_5)
{
    tGATT_IF VAR_6 = VAR_3->gatt_if;
    tGATT_BG_CONN_DEV *VAR_7 = ((void*)0);
    UINT8 VAR_8, VAR_9;
    BOOLEAN VAR_10 = VAR_0;

    if ((VAR_7 = FUNC_2(VAR_4)) == ((void*)0)) {
        return VAR_10;
    }

    for (VAR_8 = 0; VAR_8 < VAR_1 && (VAR_7->gatt_if[VAR_8] > 0 || VAR_7->listen_gif[VAR_8]); VAR_8 ++) {
        if (VAR_5) {
            if (VAR_7->gatt_if[VAR_8] == VAR_6) {
                VAR_7->gatt_if[VAR_8] = 0;

                for (VAR_9 = VAR_8 + 1; VAR_9 < VAR_1; VAR_9 ++) {
                    VAR_7->gatt_if[VAR_9 - 1] = VAR_7->gatt_if[VAR_9];
                }

                if (VAR_7->gatt_if[0] == 0) {
                    VAR_10 = FUNC_1(VAR_0, VAR_7->remote_bda);
                } else {
                    VAR_10 = VAR_2;
                }

                break;
            }
        } else {
            if (VAR_7->listen_gif[VAR_8] == VAR_6) {
                VAR_7->listen_gif[VAR_8] = 0;
                VAR_3->listening --;

                for (VAR_9 = VAR_8 + 1; VAR_9 < VAR_1; VAR_9 ++) {
                    VAR_7->listen_gif[VAR_9 - 1] = VAR_7->listen_gif[VAR_9];
                }

                if (VAR_7->listen_gif[0] == 0) {

                    VAR_10 = FUNC_0(VAR_0, VAR_7->remote_bda, 0, ((void*)0));
                } else {
                    VAR_10 = VAR_2;
                }
                break;
            }
        }
    }

    if (VAR_8 != VAR_1 && VAR_7->gatt_if[0] == 0 && VAR_7->listen_gif[0] == 0) {
        FUNC_3(VAR_7, 0, sizeof(tGATT_BG_CONN_DEV));
    }

    return VAR_10;
}
