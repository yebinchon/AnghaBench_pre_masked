
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_13__ {TYPE_5__* addr; } ;
typedef TYPE_4__ mdns_result_t ;
struct TYPE_10__ {int addr; } ;
struct TYPE_11__ {TYPE_1__ ip4; } ;
struct TYPE_12__ {scalar_t__ type; TYPE_2__ u_addr; } ;
struct TYPE_14__ {struct TYPE_14__* next; TYPE_3__ addr; } ;
typedef TYPE_5__ mdns_ip_addr_t ;
struct TYPE_15__ {int addr; } ;
typedef TYPE_6__ esp_ip4_addr_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,int *,int *,int ,int ,int,TYPE_4__**) ;
 int FUNC_2 (TYPE_4__*) ;

esp_err_t FUNC_3(const char * VAR_5, uint32_t VAR_6, esp_ip4_addr_t * VAR_7)
{
    mdns_result_t * VAR_8 = ((void*)0);
    esp_err_t VAR_9;

    if (FUNC_0(VAR_5)) {
        return VAR_0;
    }

    VAR_9 = FUNC_1(VAR_5, ((void*)0), ((void*)0), VAR_4, VAR_6, 1, &VAR_8);

    if (VAR_9) {
        return VAR_9;
    }

    if (!VAR_8) {
        return VAR_1;
    }

    mdns_ip_addr_t * VAR_10 = VAR_8->addr;
    while (VAR_10) {
        if (VAR_10->addr.type == VAR_3) {
            VAR_7->addr = VAR_10->addr.u_addr.ip4.addr;
            FUNC_2(VAR_8);
            return VAR_2;
        }
        VAR_10 = VAR_10->next;
    }

    FUNC_2(VAR_8);
    return VAR_1;
}
