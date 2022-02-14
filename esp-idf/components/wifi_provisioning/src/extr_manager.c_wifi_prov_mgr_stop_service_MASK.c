
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {int * data; } ;
struct TYPE_4__ {scalar_t__ prov_state; void** ap_list; int scanning; int ** ap_list_sorted; TYPE_1__ pop; int * timer; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (void*) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 TYPE_2__* VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (void*) ;
 int VAR_13 ;
 int FUNC_9 (int) ;
 int VAR_14 ;
 scalar_t__ FUNC_10 (int (*) (void*),char*,int,void*,int ,int *) ;

__attribute__((used)) static bool FUNC_11(bool VAR_15)
{
    if (VAR_15) {


        while (VAR_11 && (
            VAR_11->prov_state == VAR_7 ||
            VAR_11->prov_state == VAR_8)) {
            FUNC_2(VAR_12);
            FUNC_9(100 / VAR_10);
            FUNC_0(VAR_12);
        }
    } else {


        while (VAR_11 &&
            VAR_11->prov_state == VAR_7) {
            FUNC_2(VAR_12);
            FUNC_9(100 / VAR_10);
            FUNC_0(VAR_12);
        }

        if (VAR_11 && VAR_11->prov_state == VAR_8) {
            FUNC_1(VAR_4, "Provisioning is already stopping");
            return 0;
        }
    }

    if (!VAR_11 || VAR_11->prov_state == VAR_6) {
        FUNC_1(VAR_4, "Provisioning not running");
        return 0;
    }


    if (VAR_11->timer) {
        FUNC_6(VAR_11->timer);
        FUNC_5(VAR_11->timer);
        VAR_11->timer = ((void*)0);
    }

    FUNC_1(VAR_4, "Stopping provisioning");
    VAR_11->prov_state = VAR_8;


    if (VAR_11->pop.data) {
        FUNC_7((void *)VAR_11->pop.data);
        VAR_11->pop.data = ((void*)0);
    }


    for (uint16_t VAR_16 = 0; VAR_16 < 14; VAR_16++) {
        FUNC_7(VAR_11->ap_list[VAR_16]);
        VAR_11->ap_list[VAR_16] = ((void*)0);
    }
    VAR_11->scanning = 0;
    for (uint8_t VAR_17 = 0; VAR_17 < VAR_3; VAR_17++) {
        VAR_11->ap_list_sorted[VAR_17] = ((void*)0);
    }


    FUNC_4(VAR_5, VAR_0,
                                 VAR_14);
    FUNC_4(VAR_1, VAR_2,
                                 VAR_14);

    if (VAR_15) {


        FUNC_2(VAR_12);
        FUNC_8((void *)0);
        FUNC_0(VAR_12);
        VAR_11->prov_state = VAR_6;
    } else {






        FUNC_3(FUNC_10(FUNC_8, "prov_stop_task", 4096, (void *)1,
                           VAR_13, ((void*)0)) == VAR_9);
        FUNC_1(VAR_4, "Provisioning scheduled for stopping");
    }
    return 1;
}
