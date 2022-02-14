
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* indicator_lookup; int current_cmd; } ;
struct TYPE_5__ {TYPE_1__ at_cb; } ;
struct TYPE_6__ {TYPE_2__ scb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_3__ VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;

void FUNC_4(void)
{
    int VAR_3;

    FUNC_3();
    FUNC_2();

    FUNC_1();

    FUNC_0();

    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        VAR_2.scb.at_cb.indicator_lookup[VAR_3] = -1;
    }

    VAR_2.scb.at_cb.current_cmd = VAR_1;
}
