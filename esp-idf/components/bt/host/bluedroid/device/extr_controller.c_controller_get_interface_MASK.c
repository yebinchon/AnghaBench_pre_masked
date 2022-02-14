
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int controller_t ;
typedef int controller_local_param_t ;
struct TYPE_2__ {int packet_parser; int packet_factory; int hci; } ;


 int FUNC_0 (int *) ;
 TYPE_1__ VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int const VAR_2 ;
 scalar_t__ FUNC_4 (int) ;

const controller_t *FUNC_5(void)
{
    static bool VAR_3 = 0;
    if (!VAR_3) {
        VAR_3 = 1;

        VAR_1 = (controller_local_param_t *)FUNC_4(sizeof(controller_local_param_t));
        FUNC_0(VAR_1);

        VAR_0.hci = FUNC_1();
        VAR_0.packet_factory = FUNC_2();
        VAR_0.packet_parser = FUNC_3();
    }

    return &VAR_2;
}
