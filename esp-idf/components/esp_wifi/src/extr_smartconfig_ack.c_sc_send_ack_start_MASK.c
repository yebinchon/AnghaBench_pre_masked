
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int smartconfig_type_t ;
struct TYPE_6__ {int ip; int token; } ;
struct TYPE_7__ {TYPE_1__ ctx; int type; } ;
typedef TYPE_2__ sc_ack_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (int ,int *,int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (int ,char*,int ,TYPE_2__*,int ,int *) ;

esp_err_t FUNC_5(smartconfig_type_t VAR_9, uint8_t VAR_10, uint8_t *VAR_11)
{
    sc_ack_t *VAR_12 = ((void*)0);

    if (VAR_11 == ((void*)0)) {
        FUNC_0(VAR_5, "Cellphone IP address is NULL");
        return VAR_0;
    }

    VAR_12 = FUNC_2(sizeof(sc_ack_t));
    if (VAR_12 == ((void*)0)) {
        FUNC_0(VAR_5, "ACK parameter malloc fail");
        return VAR_1;
    }
    VAR_12->type = VAR_9;
    VAR_12->ctx.token = VAR_10;
    FUNC_3(VAR_12->ctx.ip, VAR_11, 4);

    VAR_7 = 1;

    if (FUNC_4(VAR_8, "sc_ack_send_task", VAR_4, VAR_12, VAR_3, ((void*)0)) != VAR_6) {
        FUNC_0(VAR_5, "Create sending smartconfig ACK task fail");
        FUNC_1(VAR_12);
        return VAR_1;
    }

    return VAR_2;
}
