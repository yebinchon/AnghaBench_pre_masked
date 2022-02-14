
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ state; scalar_t__ in_use; } ;
typedef TYPE_1__ tBTA_AG_SCB ;
struct TYPE_5__ {TYPE_1__* scb; } ;
typedef int BOOLEAN ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;

BOOLEAN FUNC_1(tBTA_AG_SCB *VAR_5)
{
    tBTA_AG_SCB *VAR_6 = &VAR_4.scb[0];

    for (int VAR_7 = 0; VAR_7 < VAR_0; VAR_7++, VAR_6++) {
        if (VAR_6->in_use && VAR_6 != VAR_5 && VAR_6->state == VAR_1) {
            return VAR_3;
        }
    }

    FUNC_0("No other ag scb open");
    return VAR_2;
}
