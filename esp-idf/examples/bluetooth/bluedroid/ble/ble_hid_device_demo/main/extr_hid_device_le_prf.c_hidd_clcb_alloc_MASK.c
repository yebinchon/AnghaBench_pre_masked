
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {int in_use; int connected; int remote_bda; int conn_id; } ;
typedef TYPE_1__ hidd_clcb_t ;
typedef int esp_bd_addr_t ;
struct TYPE_4__ {TYPE_1__* hidd_clcb; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;

void FUNC_1 (uint16_t VAR_3, esp_bd_addr_t VAR_4)
{
    uint8_t VAR_5 = 0;
    hidd_clcb_t *VAR_6 = ((void*)0);

    for (VAR_5 = 0, VAR_6= VAR_2.hidd_clcb; VAR_5 < VAR_1; VAR_5++, VAR_6++) {
        if (!VAR_6->in_use) {
            VAR_6->in_use = 1;
            VAR_6->conn_id = VAR_3;
            VAR_6->connected = 1;
            FUNC_0 (VAR_6->remote_bda, VAR_4, VAR_0);
            break;
        }
    }
    return;
}
