
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int hb_preset_index_t ;
typedef int GtkWidget ;
typedef int GtkLabel ;
typedef int GhbValue ;


 int * FUNC_0 (int ,char*) ;
 int * FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char*,char*) ;
 int FUNC_4 (int *,char*) ;
 char* FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char const*) ;
 int * FUNC_8 (int *) ;
 char* FUNC_9 (int *,char*,int ) ;

__attribute__((used)) static void
FUNC_10(signal_user_data_t *VAR_2, hb_preset_index_t *VAR_3)
{
    char * VAR_4, * VAR_5;
    const char * VAR_6;
    GtkLabel * VAR_7;
    GtkWidget * VAR_8;
    GhbValue * VAR_9;
    int VAR_10;

    VAR_9 = FUNC_8(VAR_3);
    VAR_10 = FUNC_4(VAR_9, "Type");
    VAR_4 = FUNC_9(VAR_3, " <span alpha=\"70%\">></span> ", VAR_1);
    VAR_7 = FUNC_1(FUNC_0(VAR_2->builder, "presets_menu_button_label"));
    VAR_5 = FUNC_3("%s%s", VAR_10 == VAR_0 ?
                                   "Custom" : "Official", VAR_4);
    FUNC_6(VAR_7, VAR_5);
    FUNC_2(VAR_4);
    FUNC_2(VAR_5);

    VAR_6 = FUNC_5(VAR_9, "PresetDescription");
    VAR_8 = FUNC_0(VAR_2->builder, "presets_menu_button");
    FUNC_7(VAR_8, VAR_6);
}
