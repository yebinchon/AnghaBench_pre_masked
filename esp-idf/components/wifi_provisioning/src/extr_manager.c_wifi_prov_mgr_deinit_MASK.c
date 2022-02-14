
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int (* wifi_prov_cb_func_t ) (void*,int ,int *) ;
struct TYPE_9__ {void* user_data; int (* event_cb ) (void*,int ,int *) ;} ;
struct TYPE_8__ {void* user_data; int (* event_cb ) (void*,int ,int *) ;} ;
struct TYPE_7__ {int (* delete_config ) (scalar_t__) ;} ;
struct TYPE_10__ {TYPE_3__ scheme_event_handler; TYPE_2__ app_event_handler; TYPE_1__ scheme; } ;
struct TYPE_11__ {TYPE_4__ mgr_config; scalar_t__ prov_scheme_config; scalar_t__ app_info_json; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int ,int *,int ,int ) ;
 int FUNC_6 (TYPE_5__*) ;
 int VAR_5 ;
 TYPE_5__* VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int) ;

void FUNC_9(void)
{
    if (!VAR_7) {
        FUNC_2(VAR_1, "Provisioning manager not initialized");
        return;
    }

    FUNC_0(VAR_7);







    bool VAR_8 = FUNC_8(1);



    if (!VAR_8 && !VAR_6) {
        FUNC_1(VAR_1, "Manager already de-initialized");
        FUNC_3(VAR_7);
        return;
    }

    if (VAR_6->app_info_json) {
        FUNC_4(VAR_6->app_info_json);
    }

    if (VAR_6->prov_scheme_config) {
        VAR_6->mgr_config.scheme.delete_config(VAR_6->prov_scheme_config);
    }


    wifi_prov_cb_func_t VAR_9 = VAR_6->mgr_config.app_event_handler.event_cb;
    void *VAR_10 = VAR_6->mgr_config.app_event_handler.user_data;

    wifi_prov_cb_func_t VAR_11 = VAR_6->mgr_config.scheme_event_handler.event_cb;
    void *VAR_12 = VAR_6->mgr_config.scheme_event_handler.user_data;


    FUNC_6(VAR_6);
    VAR_6 = ((void*)0);
    FUNC_3(VAR_7);



    if (VAR_8) {
        FUNC_1(VAR_1, "execute_event_cb : %d", VAR_3);
        if (VAR_11) {
            VAR_11(VAR_12, VAR_3, ((void*)0));
        }
        if (VAR_9) {
            VAR_9(VAR_10, VAR_3, ((void*)0));
        }
        if (FUNC_5(VAR_4, VAR_3, ((void*)0), 0, VAR_5) != VAR_0) {
            FUNC_2(VAR_1, "Failed to post event WIFI_PROV_END");
        }
    }

    FUNC_1(VAR_1, "execute_event_cb : %d", VAR_2);


    if (VAR_11) {
        VAR_11(VAR_12, VAR_2, ((void*)0));
    }
    if (VAR_9) {
        VAR_9(VAR_10, VAR_2, ((void*)0));
    }
    if (FUNC_5(VAR_4, VAR_2, ((void*)0), 0, VAR_5) != VAR_0) {
        FUNC_2(VAR_1, "Failed to post event WIFI_PROV_DEINIT");
    }
}
