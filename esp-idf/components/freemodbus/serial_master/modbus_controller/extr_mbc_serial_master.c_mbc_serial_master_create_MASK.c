
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ mb_port_type_t ;
struct TYPE_5__ {int parity; int baudrate; int port; int mode; } ;
struct TYPE_6__ {int * mbm_task_handle; int * mbm_event_group; TYPE_1__ mbm_comm; scalar_t__ port_type; } ;
typedef TYPE_2__ mb_master_options_t ;
typedef int mb_master_interface_t ;
typedef int esp_err_t ;
struct TYPE_7__ {int master_reg_cb_coils; int master_reg_cb_holding; int master_reg_cb_input; int master_reg_cb_discrete; int set_parameter; int set_descriptor; int send_request; int get_parameter; int get_cid_info; int start; int setup; int destroy; int (* init ) (scalar_t__,void**) ;TYPE_2__ opts; } ;
typedef scalar_t__ BaseType_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ,char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_3__* FUNC_2 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 TYPE_3__* VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 scalar_t__ FUNC_5 (void*,char*,int ,int *,int ,int **) ;

esp_err_t FUNC_6(mb_port_type_t VAR_25, void** VAR_26)
{
    FUNC_1((VAR_25 == VAR_8),
                        VAR_0, "mb incorrect port selected = %u.",
                        (uint32_t)VAR_25);

    if (VAR_22 == ((void*)0)) {
        VAR_22 = FUNC_2(sizeof(mb_master_interface_t));
    }
    FUNC_0(VAR_22 != ((void*)0));


    mb_master_options_t* VAR_27 = &VAR_22->opts;
    VAR_27->port_type = VAR_8;

    VAR_27->mbm_comm.mode = VAR_6;
    VAR_27->mbm_comm.port = VAR_9;
    VAR_27->mbm_comm.baudrate = VAR_5;
    VAR_27->mbm_comm.parity = VAR_7;


    BaseType_t VAR_28 = 0;

    VAR_27->mbm_event_group = FUNC_4();
    FUNC_1((VAR_27->mbm_event_group != ((void*)0)),
                        VAR_1, "mb event group error.");

    VAR_28 = FUNC_5((void*)&VAR_23,
                            "modbus_matask",
                            VAR_4,
                            ((void*)0),
                            VAR_3,
                            &VAR_27->mbm_task_handle);
    if (VAR_28 != VAR_24) {
        FUNC_3(VAR_27->mbm_task_handle);
        FUNC_1((VAR_28 == VAR_24), VAR_1,
                "mb controller task creation error, xTaskCreate() returns (0x%x).",
                (uint32_t)VAR_28);
    }
    FUNC_0(VAR_27->mbm_task_handle != ((void*)0));


    VAR_22->init = FUNC_6;
    VAR_22->destroy = VAR_14;
    VAR_22->setup = VAR_20;
    VAR_22->start = VAR_21;
    VAR_22->get_cid_info = VAR_15;
    VAR_22->get_parameter = VAR_16;
    VAR_22->send_request = VAR_17;
    VAR_22->set_descriptor = VAR_18;
    VAR_22->set_parameter = VAR_19;

    VAR_22->master_reg_cb_discrete = VAR_11;
    VAR_22->master_reg_cb_input = VAR_13;
    VAR_22->master_reg_cb_holding = VAR_12;
    VAR_22->master_reg_cb_coils = VAR_10;

    *VAR_26 = VAR_22;

    return VAR_2;
}
