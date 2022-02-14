
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int esp_err_t ;
struct TYPE_4__ {int no_auto_stop; } ;
struct TYPE_5__ {TYPE_1__ capabilities; } ;
struct TYPE_6__ {TYPE_2__ mgr_info; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int VAR_4 ;
 int FUNC_3 () ;

esp_err_t FUNC_4(void)
{
    if (!VAR_4) {
        FUNC_1(VAR_2, "Provisioning manager not initialized");
        return VAR_0;
    }

    bool VAR_5 = 0;
    FUNC_0(VAR_4);
    if (VAR_3 && !VAR_3->mgr_info.capabilities.no_auto_stop) {
        VAR_5 = 1;
    }
    FUNC_2(VAR_4);


    if (VAR_5) {
        FUNC_3();
    }
    return VAR_1;
}
