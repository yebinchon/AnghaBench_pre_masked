
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int builder; int settings; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int gboolean ;
typedef int GtkWidget ;
typedef int GtkEntry ;


 int * FUNC_0 (int ,char*) ;
 int * FUNC_1 (int *) ;
 char* FUNC_2 (int ,char*) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static void
FUNC_6(signal_user_data_t *VAR_0)
{
    GtkEntry * VAR_1;
    GtkWidget * VAR_2;
    const char * VAR_3;
    const char * VAR_4;
    const char * VAR_5;
    gboolean VAR_6;

    VAR_2 = FUNC_0(VAR_0->builder, "preset_ok");

    VAR_4 = FUNC_2(VAR_0->settings, "PresetCategory");
    VAR_1 = FUNC_1(FUNC_0(VAR_0->builder, "PresetName"));
    VAR_3 = FUNC_3(VAR_1);
    VAR_1 = FUNC_1(FUNC_0(VAR_0->builder, "PresetCategoryName"));
    VAR_5 = FUNC_3(VAR_1);

    VAR_6 = VAR_3[0] && (FUNC_5(VAR_4, "new") || VAR_5[0]);
    FUNC_4(VAR_2, VAR_6);
}
