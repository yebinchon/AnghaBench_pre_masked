
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int settings; int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int int64_t ;
typedef scalar_t__ gint ;
typedef int GtkWidget ;
typedef int GtkListBox ;
typedef int GhbValue ;


 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (scalar_t__,int,int,char const*,TYPE_1__*) ;
 int * FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 char* FUNC_7 (int *,char*) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int *,int *,int) ;

__attribute__((used)) static void
FUNC_10(signal_user_data_t *VAR_0)
{
    GhbValue * VAR_1;
    GtkListBox * VAR_2;
    GtkWidget * VAR_3;
    gint VAR_4, VAR_5;

    VAR_2 = FUNC_1(FUNC_0(VAR_0->builder, "chapters_list"));

    VAR_1 = FUNC_8(VAR_0->settings);
    VAR_5 = FUNC_4(VAR_1);
    for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
    {
        GhbValue * VAR_6;
        GhbValue * VAR_7;
        const char * VAR_8;
        int64_t VAR_9 = 0, VAR_10;

        VAR_6 = FUNC_3(VAR_1, VAR_4);
        VAR_8 = FUNC_7(VAR_6, "Name");
        VAR_7 = FUNC_5(VAR_6, "Duration");
        VAR_10 = FUNC_6(VAR_7, "Ticks") / 90000;
        VAR_3 = FUNC_2(VAR_4 + 1, VAR_9, VAR_10, VAR_8, VAR_0);
        VAR_9 += VAR_10;

        FUNC_9(VAR_2, VAR_3, -1);
    }
}
