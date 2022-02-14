
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* srvc_id; scalar_t__ active; scalar_t__ in_use; int * timer; } ;
typedef TYPE_1__ tBTA_PM_TIMER ;
typedef size_t UINT8 ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(tBTA_PM_TIMER *VAR_3,
        UINT8 VAR_4)
{
    if ((VAR_3 == ((void*)0)) || (VAR_4 >= VAR_0)) {
        return;
    }

    if (VAR_3->srvc_id[VAR_4] == VAR_1) {
        return;
    }

    FUNC_0(VAR_3->in_use && (VAR_3->active > 0));

    FUNC_1(&VAR_3->timer[VAR_4]);
    VAR_3->srvc_id[VAR_4] = VAR_1;


    VAR_3->active--;
    if (VAR_3->active == 0) {
        VAR_3->in_use = VAR_2;
    }
}
