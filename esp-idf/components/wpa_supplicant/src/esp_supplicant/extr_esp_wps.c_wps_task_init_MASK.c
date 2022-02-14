
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 () ;
 int VAR_14 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int) ;
 void* FUNC_6 (int,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int ,char*,int ,int *,int,int *) ;

int FUNC_10(void)
{
    int VAR_15 = 0;



    FUNC_4();

    VAR_9 = FUNC_7();
    if (!VAR_9) {
        FUNC_2(VAR_3, "wps task init: failed to alloc data lock");
        goto _wps_no_mem;
    }

    VAR_8 = FUNC_6(1, 0);
    if (!VAR_8) {
        FUNC_2(VAR_3, "wps task init: failed to create api sem");
        goto _wps_no_mem;
    }

    VAR_12 = FUNC_6(1, 0);
    if (!VAR_12) {
        FUNC_2(VAR_3, "wps task init: failed to create task sem");
        goto _wps_no_mem;
    }

    FUNC_0(VAR_11, VAR_4);
    VAR_10 = FUNC_5(VAR_4, sizeof( void * ) );
    if (!VAR_10) {
        FUNC_2(VAR_3, "wps task init: failed to alloc queue");
        goto _wps_no_mem;
    }

    FUNC_3();

    VAR_15 = FUNC_9(VAR_14, "wpsT", VAR_5, ((void*)0), 2, &VAR_13);
    if (VAR_6 != VAR_15) {
        FUNC_2(VAR_3, "wps enable: failed to create task");
        goto _wps_no_mem;
    }

    FUNC_8(VAR_12, VAR_7);
    FUNC_1(VAR_12);
    VAR_12 = ((void*)0);

    FUNC_2(VAR_2, "wifi wps enable: task prio:%d, stack:%d", 2, VAR_5);
    return VAR_1;

_wps_no_mem:
    FUNC_4();
    return VAR_0;
}
