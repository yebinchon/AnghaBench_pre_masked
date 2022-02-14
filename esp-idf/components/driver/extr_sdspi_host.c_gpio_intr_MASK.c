
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gpio_int; int semphr_int; } ;
typedef TYPE_1__ slot_info_t ;
typedef scalar_t__ BaseType_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_3(void* VAR_1)
{
    BaseType_t VAR_2 = VAR_0;
    slot_info_t* VAR_3 = (slot_info_t*)VAR_1;
    FUNC_2(VAR_3->semphr_int, &VAR_2);
    FUNC_0(VAR_3->gpio_int);
    if (VAR_2) {
        FUNC_1();
    }
}
