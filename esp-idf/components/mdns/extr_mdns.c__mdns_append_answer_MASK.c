
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct esp_ip6_addr {scalar_t__ addr; } ;
struct TYPE_16__ {scalar_t__ type; int bye; int flush; TYPE_8__* service; int custom_proto; int custom_service; int custom_instance; } ;
typedef TYPE_4__ mdns_out_answer_t ;
typedef size_t mdns_if_t ;
struct TYPE_13__ {int addr; } ;
struct TYPE_17__ {TYPE_1__ ip; } ;
typedef TYPE_5__ esp_netif_ip_info_t ;
struct TYPE_19__ {int proto; int service; } ;
struct TYPE_18__ {TYPE_3__* interfaces; } ;
struct TYPE_15__ {TYPE_2__* pcbs; } ;
struct TYPE_14__ {scalar_t__ state; int pcb; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (struct esp_ip6_addr) ;
 scalar_t__ FUNC_1 (int*,int *,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int*,int *,int*,int ,int ) ;
 scalar_t__ FUNC_3 (int*,int *,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int*,int *,TYPE_8__*,int ,int ) ;
 scalar_t__ FUNC_5 (int*,int *,TYPE_8__*,int ,int ) ;
 scalar_t__ FUNC_6 (int*,int *,TYPE_8__*,int ,int ) ;
 int FUNC_7 (size_t) ;
 size_t FUNC_8 (size_t) ;
 int FUNC_9 (TYPE_8__*) ;
 int FUNC_10 (size_t) ;
 TYPE_7__* VAR_9 ;
 scalar_t__ FUNC_11 (int ,struct esp_ip6_addr*) ;
 scalar_t__ FUNC_12 (int ,TYPE_5__*) ;

__attribute__((used)) static uint8_t FUNC_13(uint8_t * VAR_10, uint16_t * VAR_11, mdns_out_answer_t * VAR_12, mdns_if_t VAR_13)
{
    if (VAR_12->type == VAR_4) {

        if (VAR_12->service) {
            return FUNC_3(VAR_10, VAR_11,
                FUNC_9(VAR_12->service),
                VAR_12->service->service, VAR_12->service->proto,
                VAR_12->flush, VAR_12->bye) > 0;
        } else {
            return FUNC_3(VAR_10, VAR_11,
                VAR_12->custom_instance, VAR_12->custom_service, VAR_12->custom_proto,
                VAR_12->flush, VAR_12->bye) > 0;
        }
    } else if (VAR_12->type == VAR_6) {
        return FUNC_5(VAR_10, VAR_11, VAR_12->service, VAR_12->flush, VAR_12->bye) > 0;
    } else if (VAR_12->type == VAR_7) {
        return FUNC_6(VAR_10, VAR_11, VAR_12->service, VAR_12->flush, VAR_12->bye) > 0;
    } else if (VAR_12->type == VAR_5) {
        return FUNC_4(VAR_10, VAR_11, VAR_12->service, VAR_12->flush, VAR_12->bye) > 0;
    } else if (VAR_12->type == VAR_2) {
        esp_netif_ip_info_t VAR_14;
        if (!VAR_9->interfaces[VAR_13].pcbs[VAR_0].pcb && VAR_9->interfaces[VAR_13].pcbs[VAR_0].state != VAR_8) {
            return 0;
        }
        if (FUNC_12(FUNC_7(VAR_13), &VAR_14)) {
            return 0;
        }
        if (FUNC_1(VAR_10, VAR_11, VAR_14.ip.addr, VAR_12->flush, VAR_12->bye) <= 0) {
            return 0;
        }
        if (!FUNC_10(VAR_13)) {
            return 1;
        }
        mdns_if_t VAR_15 = FUNC_8 (VAR_13);
        if (FUNC_12(FUNC_7(VAR_15), &VAR_14)) {
            return 1;
        }
        if (FUNC_1(VAR_10, VAR_11, VAR_14.ip.addr, VAR_12->flush, VAR_12->bye) > 0) {
            return 2;
        }
        return 1;
    } else if (VAR_12->type == VAR_3) {
        struct esp_ip6_addr VAR_16;
        if (!VAR_9->interfaces[VAR_13].pcbs[VAR_1].pcb && VAR_9->interfaces[VAR_13].pcbs[VAR_1].state != VAR_8) {
            return 0;
        }
        if (FUNC_11(FUNC_7(VAR_13), &VAR_16)) {
            return 0;
        }
        if (FUNC_0(VAR_16)) {
            return 0;
        }
        if (FUNC_2(VAR_10, VAR_11, (uint8_t*)VAR_16, VAR_12->flush, VAR_12->bye) <= 0) {
            return 0;
        }
        if (!FUNC_10(VAR_13)) {
            return 1;
        }
        mdns_if_t VAR_17 = FUNC_8 (VAR_13);
        if (FUNC_11(FUNC_7(VAR_17), &VAR_16)) {
            return 1;
        }
        if (FUNC_2(VAR_10, VAR_11, (uint8_t*)VAR_16, VAR_12->flush, VAR_12->bye) > 0) {
            return 2;
        }
        return 1;
    }
    return 0;
}
