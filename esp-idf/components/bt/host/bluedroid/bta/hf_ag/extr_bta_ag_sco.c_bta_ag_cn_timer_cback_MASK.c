
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTA_AG_SCB ;
struct TYPE_3__ {scalar_t__ param; } ;
typedef TYPE_1__ TIMER_LIST_ENT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2 (TIMER_LIST_ENT *VAR_2)
{
    tBTA_AG_SCB *VAR_3;

    if (VAR_2)
    {
        VAR_3 = (tBTA_AG_SCB *)VAR_2->param;

        if (VAR_3)
        {

            FUNC_1(VAR_3, VAR_1);


            FUNC_0(VAR_3, VAR_0);
        }
    }
}
