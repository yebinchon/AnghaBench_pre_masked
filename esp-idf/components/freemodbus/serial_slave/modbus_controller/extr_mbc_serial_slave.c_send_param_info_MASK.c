
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef void* uint16_t ;
struct TYPE_5__ {int mbs_notification_queue_handle; } ;
typedef TYPE_1__ mb_slave_options_t ;
struct TYPE_6__ {void* mb_offset; int time_stamp; int * address; void* size; int type; } ;
typedef TYPE_2__ mb_param_info_t ;
typedef int mb_event_group_t ;
typedef int esp_err_t ;
struct TYPE_7__ {TYPE_1__ opts; } ;
typedef scalar_t__ BaseType_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 () ;
 TYPE_4__* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_3 (int ,TYPE_2__*,int ) ;

__attribute__((used)) static esp_err_t FUNC_4(mb_event_group_t VAR_8, uint16_t VAR_9,
                                    uint8_t* VAR_10, uint16_t VAR_11)
{
    FUNC_1((VAR_6 != ((void*)0)),
                    VAR_0,
                    "Slave interface is not correctly initialized.");
    mb_slave_options_t* VAR_12 = &VAR_6->opts;
    esp_err_t VAR_13 = VAR_1;
    mb_param_info_t VAR_14;

    VAR_14.type = VAR_8;
    VAR_14.size = VAR_11;
    VAR_14.address = VAR_10;
    VAR_14.time_stamp = FUNC_2();
    VAR_14.mb_offset = VAR_9;
    BaseType_t VAR_15 = FUNC_3(VAR_12->mbs_notification_queue_handle,
                                    &VAR_14, VAR_3);
    if (VAR_7 == VAR_15) {
        FUNC_0(VAR_4, "Queue send parameter info (type, address, size): %d, 0x%.4x, %d",
                VAR_8, (uint32_t)VAR_10, VAR_11);
        VAR_13 = VAR_2;
    } else if (VAR_5 == VAR_15) {
        FUNC_0(VAR_4, "Parameter queue is overflowed.");
    }
    return VAR_13;
}
