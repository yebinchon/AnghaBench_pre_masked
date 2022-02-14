
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int settings; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int GtkListBoxRow ;
typedef int GtkEditable ;
typedef int GhbValue ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int const*,int) ;
 int FUNC_2 (int *,char*,char const*) ;
 char* FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(
    GtkEditable * VAR_0,
    signal_user_data_t *VAR_1)
{
    GtkListBoxRow * VAR_2;
    const char * VAR_3;
    int VAR_4;

    VAR_2 = FUNC_6(FUNC_0(VAR_0));
    if (VAR_2 == ((void*)0))
    {
        return;
    }
    VAR_4 = FUNC_5(VAR_2);
    VAR_3 = FUNC_3(VAR_0);
    if (VAR_3 == ((void*)0))
    {
        return;
    }

    const GhbValue * VAR_5;
    GhbValue * VAR_6;

    VAR_5 = FUNC_4(VAR_1->settings);
    VAR_6 = FUNC_1(VAR_5, VAR_4);
    if (VAR_6 == ((void*)0))
    {
        return;
    }
    FUNC_2(VAR_6, "Name", VAR_3);
}
