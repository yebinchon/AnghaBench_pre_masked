
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int signal_user_data_t ;
struct TYPE_7__ {scalar_t__ depth; } ;
typedef TYPE_1__ hb_preset_index_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int*,int) ;
 TYPE_1__* FUNC_2 (char*,int,int ) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (int *,TYPE_1__*) ;

void
FUNC_5(signal_user_data_t *VAR_1)
{
    hb_preset_index_t *VAR_2;

    VAR_2 = FUNC_3();
    if (VAR_2 == ((void*)0) || VAR_2->depth == 0)
    {

        FUNC_0(VAR_2);
        VAR_2 = FUNC_2("Fast 1080p30", 1, VAR_0);
    }
    if (VAR_2 == ((void*)0) || VAR_2->depth == 0)
    {
        int VAR_3[2] = {0, 0};


        FUNC_0(VAR_2);
        VAR_2 = FUNC_1(VAR_3, 2);
    }
    if (VAR_2 != ((void*)0))
    {
        FUNC_4(VAR_1, VAR_2);
        FUNC_0(VAR_2);
    }
}
