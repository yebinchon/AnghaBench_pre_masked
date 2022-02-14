
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int settings_array; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef scalar_t__ gint ;
typedef int GhbValue ;


 int * FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *,int) ;

__attribute__((used)) static void
FUNC_5(signal_user_data_t *VAR_0)
{
    gint VAR_1, VAR_2;

    VAR_1 = FUNC_1(VAR_0->settings_array);
    for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
    {
        GhbValue *VAR_3;

        VAR_3 = FUNC_0(VAR_0->settings_array, VAR_2);
        if (FUNC_2(VAR_3, "title_selected"))
        {
            FUNC_4(VAR_0, VAR_3, 1);
        }
    }
    FUNC_3(VAR_0);
}
