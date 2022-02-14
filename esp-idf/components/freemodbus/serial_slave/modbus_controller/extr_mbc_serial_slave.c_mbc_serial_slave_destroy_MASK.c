
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int mbs_event_group; int mbs_notification_queue_handle; int mbs_task_handle; } ;
typedef TYPE_1__ mb_slave_options_t ;
typedef int esp_err_t ;
typedef scalar_t__ eMBErrorCode ;
struct TYPE_5__ {TYPE_1__ opts; } ;
typedef int EventBits_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,char*,...) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static esp_err_t FUNC_8(void)
{
    FUNC_0((VAR_4 != ((void*)0)),
                    VAR_0,
                    "Slave interface is not correctly initialized.");
    mb_slave_options_t* VAR_5 = &VAR_4->opts;
    eMBErrorCode VAR_6 = VAR_2;

    EventBits_t VAR_7 = FUNC_7(VAR_5->mbs_event_group,
                                    (EventBits_t)VAR_3);
    FUNC_0((VAR_7 & VAR_3),
                VAR_0, "mb stack stop event failure.");

    VAR_6 = FUNC_2();
    FUNC_0((VAR_6 == VAR_2), VAR_0, "mb stack disable failure.");
    (void)FUNC_6(VAR_5->mbs_task_handle);
    (void)FUNC_5(VAR_5->mbs_notification_queue_handle);
    (void)FUNC_4(VAR_5->mbs_event_group);
    VAR_6 = FUNC_1();
    FUNC_0((VAR_6 == VAR_2), VAR_0,
            "mb stack close failure returned (0x%x).", (uint32_t)VAR_6);
    FUNC_3(VAR_4);
    VAR_4 = ((void*)0);
    return VAR_1;
}
