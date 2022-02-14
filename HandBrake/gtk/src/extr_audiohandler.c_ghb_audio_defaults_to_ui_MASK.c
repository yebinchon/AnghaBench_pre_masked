
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int builder; int settings; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int GtkWidget ;
typedef int GtkListBox ;
typedef int GhbValue ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int *) ;
 int * FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 () ;
 int FUNC_9 (int ) ;
 int * FUNC_10 (TYPE_1__*) ;
 int * FUNC_11 (int ,char*) ;
 int FUNC_12 (int ,char*,int *) ;
 int FUNC_13 (int *,int *,int) ;

void FUNC_14(signal_user_data_t *VAR_1)
{
    GtkListBox *VAR_2;
    GhbValue *VAR_3;
    int VAR_4, VAR_5;

    FUNC_3(VAR_1);


    VAR_3 = FUNC_11(VAR_1->settings, "AudioList");
    if (VAR_3 == ((void*)0))
    {
        VAR_3 = FUNC_8();
        FUNC_12(VAR_1->settings, "AudioList", VAR_3);
    }


    VAR_2 = FUNC_2(FUNC_0(VAR_1->builder, "audio_list_default"));
    FUNC_9(FUNC_1(VAR_2));

    GtkWidget *VAR_6;

    VAR_4 = FUNC_7(VAR_3);
    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
    {
        GhbValue *VAR_7;

        VAR_7 = FUNC_6(VAR_3, VAR_5);
        VAR_6 = FUNC_10(VAR_1);
        FUNC_13(VAR_2, VAR_6, -1);
        FUNC_5(VAR_6, VAR_7);
    }

    VAR_6 = FUNC_10(VAR_1);
    FUNC_4(VAR_6, VAR_0);
    FUNC_13(VAR_2, VAR_6, -1);
}
