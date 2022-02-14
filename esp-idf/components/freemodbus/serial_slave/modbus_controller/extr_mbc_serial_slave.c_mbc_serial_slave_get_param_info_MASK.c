
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int * mbs_notification_queue_handle; } ;
typedef TYPE_1__ mb_slave_options_t ;
typedef int mb_param_info_t ;
typedef int esp_err_t ;
struct TYPE_4__ {TYPE_1__ opts; } ;
typedef scalar_t__ BaseType_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,char*) ;
 TYPE_2__* VAR_4 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static esp_err_t FUNC_3(mb_param_info_t* VAR_6, uint32_t VAR_7)
{
    FUNC_0((VAR_4 != ((void*)0)),
                    VAR_1,
                    "Slave interface is not correctly initialized.");
    mb_slave_options_t* VAR_8 = &VAR_4->opts;
    esp_err_t VAR_9 = VAR_2;
    FUNC_0((VAR_8->mbs_notification_queue_handle != ((void*)0)),
                VAR_0, "mb queue handle is invalid.");
    FUNC_0((VAR_6 != ((void*)0)), VAR_0, "mb register information is invalid.");
    BaseType_t VAR_10 = FUNC_2(VAR_8->mbs_notification_queue_handle,
                                        VAR_6, FUNC_1(VAR_7));
    if (VAR_10 == VAR_5) {
        VAR_9 = VAR_3;
    }
    return VAR_9;
}
