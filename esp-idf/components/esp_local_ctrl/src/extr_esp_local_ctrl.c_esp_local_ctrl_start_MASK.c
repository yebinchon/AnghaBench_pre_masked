
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16_t ;
struct inst_ctx {int dummy; } ;
typedef int esp_local_ctrl_prop_t ;
struct TYPE_9__ {int set_prop_values; int get_prop_values; } ;
struct TYPE_11__ {scalar_t__ max_properties; TYPE_2__* transport; int transport_config; TYPE_1__ handlers; } ;
typedef TYPE_3__ esp_local_ctrl_config_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_12__ {int max_properties; int transport_config; } ;
struct TYPE_13__ {int pc; TYPE_4__ config; void* props; } ;
struct TYPE_10__ {scalar_t__ (* copy_config ) (int *,int *) ;scalar_t__ (* declare_ep ) (int *,char*,int ) ;scalar_t__ (* start_service ) (int ,int *) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 void* FUNC_2 (int,int) ;
 int VAR_7 ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_6__*) ;
 TYPE_6__* VAR_8 ;
 int FUNC_5 (TYPE_4__*,TYPE_3__ const*,int) ;
 scalar_t__ FUNC_6 (int ,char*,int ,int *) ;
 int FUNC_7 () ;
 int VAR_9 ;
 scalar_t__ FUNC_8 (int ,char*,int *,int *) ;
 scalar_t__ FUNC_9 (int ,char*,int ) ;
 scalar_t__ FUNC_10 (int *,int *) ;
 scalar_t__ FUNC_11 (int *,char*,int ) ;
 scalar_t__ FUNC_12 (int *,char*,int ) ;
 scalar_t__ FUNC_13 (int *,char*,int ) ;
 scalar_t__ FUNC_14 (int ,int *) ;

esp_err_t FUNC_15(const esp_local_ctrl_config_t *VAR_10)
{
    esp_err_t VAR_11;

    if (!VAR_10) {
        FUNC_0(VAR_6, "NULL configuration provided");
        return VAR_0;
    }

    if (!VAR_10->transport) {
        FUNC_0(VAR_6, "No transport provided");
        return VAR_0;
    }

    if (VAR_10->max_properties == 0) {
        FUNC_0(VAR_6, "max_properties must be greater than 0");
        return VAR_0;
    }

    if (!VAR_10->handlers.get_prop_values ||
        !VAR_10->handlers.set_prop_values) {
        FUNC_0(VAR_6, "Handlers cannot be null");
        return VAR_0;
    }

    if (VAR_8) {
        FUNC_1(VAR_6, "Service already active");
        return VAR_1;
    }

    VAR_8 = FUNC_2(1, sizeof(struct inst_ctx));
    if (!VAR_8) {
        FUNC_0(VAR_6, "Failed to allocate memory for instance");
        return VAR_2;
    }
    FUNC_5(&VAR_8->config, VAR_10, sizeof(VAR_8->config));

    VAR_8->props = FUNC_2(VAR_8->config.max_properties,
                                        sizeof(esp_local_ctrl_prop_t *));
    if (!VAR_8->props) {
        FUNC_0(VAR_6, "Failed to allocate memory for properties");
        FUNC_4(VAR_8);
        VAR_8 = ((void*)0);
        return VAR_2;
    }





    if (VAR_10->transport->copy_config) {
        VAR_11 = VAR_10->transport->copy_config(&VAR_8->config.transport_config,
                                             &VAR_10->transport_config);
        if (VAR_11 != VAR_5) {
            FUNC_3();
            return VAR_11;
        }
    }





    if (VAR_10->transport->declare_ep) {



        uint16_t VAR_12 = 0xFF50;
        VAR_11 = VAR_10->transport->declare_ep(&VAR_8->config.transport_config,
                                            "esp_local_ctrl/version", VAR_12++);
        if (VAR_11 != VAR_5) {
            FUNC_3();
            return VAR_11;
        }
        VAR_11 = VAR_10->transport->declare_ep(&VAR_8->config.transport_config,
                                            "esp_local_ctrl/session", VAR_12++);
        if (VAR_11 != VAR_5) {
            FUNC_3();
            return VAR_11;
        }
        VAR_11 = VAR_10->transport->declare_ep(&VAR_8->config.transport_config,
                                            "esp_local_ctrl/control", VAR_12++);
        if (VAR_11 != VAR_5) {
            FUNC_3();
            return VAR_11;
        }
    }

    VAR_8->pc = FUNC_7();
    if (!VAR_8->pc) {
        FUNC_0(VAR_6, "Failed to create new protocomm instance");
        FUNC_3();
        return VAR_3;
    }

    if (VAR_10->transport->start_service) {
        VAR_11 = VAR_10->transport->start_service(VAR_8->pc,
                                               &VAR_8->config.transport_config);
        if (VAR_11 != VAR_5) {
            FUNC_3();
            return VAR_11;
        }
    }

    VAR_11 = FUNC_9(VAR_8->pc, "esp_local_ctrl/version",
                                VAR_4);
    if (VAR_11 != VAR_5) {
        FUNC_0(VAR_6, "Failed to set version endpoint");
        FUNC_3();
        return VAR_11;
    }

    VAR_11 = FUNC_8(VAR_8->pc, "esp_local_ctrl/session",
                                 &VAR_9, ((void*)0));
    if (VAR_11 != VAR_5) {
        FUNC_0(VAR_6, "Failed to set session endpoint");
        FUNC_3();
        return VAR_11;
    }

    VAR_11 = FUNC_6(VAR_8->pc, "esp_local_ctrl/control",
                                 VAR_7, ((void*)0));
    if (VAR_11 != VAR_5) {
        FUNC_0(VAR_6, "Failed to set control endpoint");
        FUNC_3();
        return VAR_11;
    }
    return VAR_5;
}
