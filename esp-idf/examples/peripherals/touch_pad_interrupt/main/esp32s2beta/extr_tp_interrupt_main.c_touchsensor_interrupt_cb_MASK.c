
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int intr_mask; int pad_val; int pad_num; int pad_status; } ;
typedef TYPE_1__ touch_event_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,TYPE_1__*,int*) ;

__attribute__((used)) static void FUNC_6(void *VAR_4)
{
    int VAR_5 = VAR_1;
    touch_event_t VAR_6;

    VAR_6.intr_mask = FUNC_4();
    VAR_6.pad_status = FUNC_3();
    VAR_6.pad_num = FUNC_2();

    if (VAR_6.intr_mask & VAR_0) {
        FUNC_1(VAR_6.pad_num, &VAR_6.pad_val);
    }
    FUNC_5(VAR_3, &VAR_6, &VAR_5);
    if (VAR_5 == VAR_2) {
        FUNC_0();
    }
}
