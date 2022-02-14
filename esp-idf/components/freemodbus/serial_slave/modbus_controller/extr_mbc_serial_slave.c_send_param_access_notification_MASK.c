
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int mbs_event_group; } ;
typedef TYPE_1__ mb_slave_options_t ;
typedef int mb_event_group_t ;
typedef int esp_err_t ;
struct TYPE_4__ {TYPE_1__ opts; } ;
typedef int EventBits_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static esp_err_t FUNC_3(mb_event_group_t VAR_5)
{
    FUNC_1((VAR_4 != ((void*)0)),
                    VAR_0,
                    "Slave interface is not correctly initialized.");
    mb_slave_options_t* VAR_6 = &VAR_4->opts;
    esp_err_t VAR_7 = VAR_1;
    mb_event_group_t VAR_8 = (mb_event_group_t)FUNC_2(VAR_6->mbs_event_group,
                                                                    (EventBits_t)VAR_5);
    if (VAR_8 & VAR_5) {
        FUNC_0(VAR_3, "The MB_REG_CHANGE_EVENT = 0x%.2x is set.", (uint8_t)VAR_5);
        VAR_7 = VAR_2;
    }
    return VAR_7;
}
