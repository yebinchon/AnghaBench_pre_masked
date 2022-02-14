
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ listening; } ;
typedef TYPE_1__ tGATT_REG ;
typedef scalar_t__ tGATT_IF ;
struct TYPE_6__ {scalar_t__* gatt_if; scalar_t__* listen_gif; int remote_bda; scalar_t__ in_use; } ;
typedef TYPE_2__ tGATT_BG_CONN_DEV ;
typedef scalar_t__ UINT8 ;
struct TYPE_7__ {TYPE_2__* bgconn_dev; } ;


 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_4__ VAR_3 ;
 TYPE_1__* FUNC_2 (scalar_t__) ;

void FUNC_3(tGATT_IF VAR_4)
{
    tGATT_BG_CONN_DEV *VAR_5 = &VAR_3.bgconn_dev[0];
    UINT8 VAR_6 , VAR_7, VAR_8;
    tGATT_REG *VAR_9 = FUNC_2(VAR_4);


    for (VAR_6 = 0 ; VAR_6 < VAR_2; VAR_6 ++, VAR_5 ++ ) {
        if (VAR_5->in_use) {
            for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7 ++) {
                if (VAR_5->gatt_if[VAR_7] == 0 && VAR_5->listen_gif[VAR_7] == 0) {
                    break;
                }

                if (VAR_5->gatt_if[VAR_7] == VAR_4) {
                    for (VAR_8 = VAR_7 + 1; VAR_8 < VAR_1; VAR_8 ++) {
                        VAR_5->gatt_if[VAR_8 - 1] = VAR_5->gatt_if[VAR_8];
                    }

                    if (VAR_5->gatt_if[0] == 0) {
                        FUNC_1(VAR_0, VAR_5->remote_bda);
                    }
                }

                if (VAR_5->listen_gif[VAR_7] == VAR_4) {
                    VAR_5->listen_gif[VAR_7] = 0;

                    if (VAR_9 != ((void*)0) && VAR_9->listening > 0) {
                        VAR_9->listening --;
                    }


                    for (VAR_8 = VAR_7 + 1; VAR_8 < VAR_1; VAR_8 ++) {
                        VAR_5->listen_gif[VAR_8 - 1] = VAR_5->listen_gif[VAR_8];
                    }

                    if (VAR_5->listen_gif[0] == 0) {

                        FUNC_0(VAR_0, VAR_5->remote_bda, 0, ((void*)0));
                    }
                }
            }
        }
    }
}
