
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * esp_timer_handle_t ;
struct TYPE_3__ {int * timer; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(void * VAR_3)
{
    FUNC_0(VAR_0, "Stopping provisioning");
    FUNC_1();
    FUNC_3(VAR_1);


    esp_timer_handle_t VAR_4 = VAR_2->timer;
    FUNC_2(VAR_4);
    VAR_2->timer = ((void*)0);


    FUNC_4(VAR_2);
    VAR_2 = ((void*)0);
    FUNC_0(VAR_0, "Provisioning stopped");

    FUNC_5(((void*)0));
}
