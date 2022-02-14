
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int queue; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int GhbValue ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (TYPE_1__*,int) ;

void
FUNC_7(signal_user_data_t *VAR_3, int VAR_4, int VAR_5)
{
    int VAR_6 = FUNC_1(VAR_3->queue);
    if (VAR_4 < 0 || VAR_4 >= VAR_6)
    {

        return;
    }

    GhbValue * VAR_7, * VAR_8;
    VAR_7 = FUNC_0(VAR_3->queue, VAR_4);
    if (VAR_7 == ((void*)0))
    {
        return;
    }
    VAR_8 = FUNC_2(VAR_7, "uiSettings");
    if (VAR_8 == ((void*)0))
    {
        return;
    }

    if (FUNC_3(VAR_8, "job_status") == VAR_2)
    {
        return;
    }

    if (VAR_5 == VAR_1)
    {
        FUNC_5(VAR_3, VAR_4, VAR_0);
    }
    FUNC_4(VAR_8, "job_status", VAR_5);
    FUNC_6(VAR_3, VAR_4);
}
