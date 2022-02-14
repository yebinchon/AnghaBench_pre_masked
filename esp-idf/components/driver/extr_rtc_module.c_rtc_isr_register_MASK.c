
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int mask; void* handler_arg; int handler; } ;
typedef TYPE_1__ rtc_isr_handler_t ;
typedef int intr_handler_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 () ;
 int VAR_3 ;
 int VAR_4 ;

esp_err_t FUNC_5(intr_handler_t VAR_5, void* VAR_6, uint32_t VAR_7)
{
    esp_err_t VAR_8 = FUNC_4();
    if (VAR_8 != VAR_1) {
        return VAR_8;
    }

    rtc_isr_handler_t* VAR_9 = FUNC_1(sizeof(*VAR_9));
    if (VAR_9 == ((void*)0)) {
        return VAR_0;
    }
    VAR_9->handler = VAR_5;
    VAR_9->handler_arg = VAR_6;
    VAR_9->mask = VAR_7;
    FUNC_2(&VAR_4);
    FUNC_0(&VAR_3, VAR_9, VAR_2);
    FUNC_3(&VAR_4);
    return VAR_1;
}
