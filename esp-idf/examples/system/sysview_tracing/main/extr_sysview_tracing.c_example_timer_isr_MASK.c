
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int timer; int group; int count; int * thnd; } ;
typedef TYPE_1__ example_event_data_t ;
typedef scalar_t__ BaseType_t ;


 int FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int *,int ,int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_7(void *VAR_5)
{
    example_event_data_t *VAR_6 = (example_event_data_t *)VAR_5;

    if (VAR_6->thnd != ((void*)0)) {
        if (VAR_6->count++ < 10) {
            BaseType_t VAR_7 = VAR_2;
            FUNC_2();
            if (FUNC_6(VAR_6->thnd, VAR_6->count, VAR_1, &VAR_7) != VAR_3) {
                FUNC_0(VAR_0, "Failed to notify task %p", VAR_6->thnd);
            } else {
                FUNC_1(VAR_6->count);
                if (VAR_7 == VAR_4) {
                    FUNC_3();
                }
            }
        }
    }

    FUNC_5(VAR_6->group, VAR_6->timer);
    FUNC_4(VAR_6->group, VAR_6->timer);
}
