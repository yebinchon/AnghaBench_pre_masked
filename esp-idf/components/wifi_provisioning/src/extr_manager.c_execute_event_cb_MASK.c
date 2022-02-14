
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int (* wifi_prov_cb_func_t ) (void*,int ,void*) ;
typedef int wifi_prov_cb_event_t ;
struct TYPE_5__ {void* user_data; int (* event_cb ) (void*,int ,void*) ;} ;
struct TYPE_7__ {void* user_data; int (* event_cb ) (void*,int ,void*) ;} ;
struct TYPE_6__ {TYPE_1__ scheme_event_handler; TYPE_3__ app_event_handler; } ;
struct TYPE_8__ {TYPE_2__ mgr_config; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,char*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ,int ,void*,size_t,int ) ;
 int VAR_3 ;
 TYPE_4__* VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_5(wifi_prov_cb_event_t VAR_6, void *VAR_7, size_t VAR_8)
{
    FUNC_1(VAR_1, "execute_event_cb : %d", VAR_6);

    if (VAR_4) {
        wifi_prov_cb_func_t VAR_9 = VAR_4->mgr_config.app_event_handler.event_cb;
        void *VAR_10 = VAR_4->mgr_config.app_event_handler.user_data;

        wifi_prov_cb_func_t VAR_11 = VAR_4->mgr_config.scheme_event_handler.event_cb;
        void *VAR_12 = VAR_4->mgr_config.scheme_event_handler.user_data;



        FUNC_3(VAR_5);

        if (VAR_11) {

            VAR_11(VAR_12, VAR_6, VAR_7);
        }

        if (VAR_9) {

            VAR_9(VAR_10, VAR_6, VAR_7);
        }

        if (FUNC_4(VAR_2, VAR_6,
                           VAR_7, VAR_8,
                           VAR_3) != VAR_0) {
            FUNC_2(VAR_1, "Failed to post event %d to default event loop", VAR_6);
        }

        FUNC_0(VAR_5);
    }
}
