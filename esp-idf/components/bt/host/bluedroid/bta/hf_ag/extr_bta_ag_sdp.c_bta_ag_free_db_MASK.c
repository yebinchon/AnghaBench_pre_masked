
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * p_disc_db; } ;
typedef TYPE_1__ tBTA_AG_SCB ;
typedef int tBTA_AG_DATA ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(tBTA_AG_SCB *VAR_0, tBTA_AG_DATA *VAR_1)
{
    FUNC_0(VAR_1);
    if (VAR_0->p_disc_db != ((void*)0)) {
        FUNC_1(VAR_0->p_disc_db);
        VAR_0->p_disc_db = ((void*)0);
    }
}
