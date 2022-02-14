
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int parity; int baudrate; int port; int slave_addr; int mode; } ;
struct TYPE_6__ {int * mbs_task_handle; int * mbs_notification_queue_handle; int * mbs_event_group; TYPE_1__ mbs_comm; scalar_t__ port_type; } ;
typedef TYPE_2__ mb_slave_options_t ;
typedef int mb_slave_interface_t ;
typedef scalar_t__ mb_port_type_t ;
typedef int mb_param_info_t ;
typedef int esp_err_t ;
typedef int UCHAR ;
struct TYPE_7__ {int slave_reg_cb_coils; int slave_reg_cb_holding; int slave_reg_cb_input; int slave_reg_cb_discrete; int start; int setup; int set_descriptor; int (* init ) (scalar_t__,void**) ;int get_param_info; int destroy; int check_event; TYPE_2__ opts; } ;
typedef scalar_t__ BaseType_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ,char*,...) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_3__* FUNC_2 (int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 TYPE_3__* VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int * FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (void*,char*,int ,int *,int ,int **) ;

esp_err_t FUNC_8(mb_port_type_t VAR_25, void** VAR_26)
{
    FUNC_1((VAR_25 == VAR_10),
                    VAR_0,
                    "mb port not supported = %u.", (uint32_t)VAR_25);

    if (VAR_22 == ((void*)0)) {
        VAR_22 = FUNC_2(sizeof(mb_slave_interface_t));
    }
    FUNC_0(VAR_22 != ((void*)0));
    FUNC_3((UCHAR)VAR_25);
    mb_slave_options_t* VAR_27 = &VAR_22->opts;
    VAR_27->port_type = VAR_10;


    VAR_27->mbs_comm.mode = VAR_8;
    VAR_27->mbs_comm.slave_addr = VAR_6;
    VAR_27->mbs_comm.port = VAR_11;
    VAR_27->mbs_comm.baudrate = VAR_7;
    VAR_27->mbs_comm.parity = VAR_9;


    BaseType_t VAR_28 = 0;

    VAR_27->mbs_event_group = FUNC_5();
    FUNC_1((VAR_27->mbs_event_group != ((void*)0)),
            VAR_1, "mb event group error.");

    VAR_27->mbs_notification_queue_handle = FUNC_6(
                                                VAR_3,
                                                sizeof(mb_param_info_t));
    FUNC_1((VAR_27->mbs_notification_queue_handle != ((void*)0)),
            VAR_1, "mb notify queue creation error.");

    VAR_28 = FUNC_7((void*)&VAR_23,
                            "modbus_slave_task",
                            VAR_5,
                            ((void*)0),
                            VAR_4,
                            &VAR_27->mbs_task_handle);
    if (VAR_28 != VAR_24) {
        FUNC_4(VAR_27->mbs_task_handle);
        FUNC_1((VAR_28 == VAR_24), VAR_1,
                "mb controller task creation error, xTaskCreate() returns (0x%x).",
                (uint32_t)VAR_28);
    }
    FUNC_0(VAR_27->mbs_task_handle != ((void*)0));


    VAR_22->check_event = VAR_16;
    VAR_22->destroy = VAR_17;
    VAR_22->get_param_info = VAR_18;
    VAR_22->init = FUNC_8;
    VAR_22->set_descriptor = VAR_19;
    VAR_22->setup = VAR_20;
    VAR_22->start = VAR_21;


    VAR_22->slave_reg_cb_discrete = VAR_13;
    VAR_22->slave_reg_cb_input = VAR_15;
    VAR_22->slave_reg_cb_holding = VAR_14;
    VAR_22->slave_reg_cb_coils = VAR_12;

    *VAR_26 = (void*)VAR_22;

    return VAR_2;
}
