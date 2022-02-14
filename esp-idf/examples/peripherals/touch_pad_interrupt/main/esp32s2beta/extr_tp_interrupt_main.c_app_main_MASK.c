
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int shield_driver; int guard_ring_pad; } ;
typedef TYPE_1__ touch_pad_waterproof_t ;
struct TYPE_6__ {int cap_level; int grade; } ;
typedef TYPE_2__ touch_pad_denoise_t ;
typedef int touch_event_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int *,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 () ;
 int FUNC_11 (TYPE_1__) ;
 int FUNC_12 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int * FUNC_13 (int,int) ;
 int FUNC_14 (int *,char*,int,int *,int,int *) ;

void FUNC_15(void)
{
    if (VAR_12 == ((void*)0)) {
        VAR_12 = FUNC_13(VAR_1, sizeof(touch_event_t));
    }

    FUNC_0(VAR_0, "Initializing touch pad");

    FUNC_5();
    for (int VAR_15 = 0; VAR_15 < VAR_1; VAR_15++) {
        FUNC_1(VAR_11[VAR_15]);
        FUNC_9(VAR_11[VAR_15], VAR_10);
    }
    FUNC_12(VAR_5);

    FUNC_7(VAR_13, ((void*)0), VAR_7);
    FUNC_6(VAR_6 | VAR_8);



    FUNC_8(VAR_2);
    FUNC_4();


    FUNC_14(&VAR_14, "touch_pad_read_task", 2048, ((void*)0), 5, ((void*)0));
}
