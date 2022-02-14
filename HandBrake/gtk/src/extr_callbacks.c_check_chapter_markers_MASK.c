
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int builder; int settings; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef scalar_t__ gint ;
typedef int GtkWidget ;


 int * FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void
FUNC_4(signal_user_data_t *VAR_0)
{
    GtkWidget *VAR_1;
    gint VAR_2, VAR_3;

    if (FUNC_2(VAR_0->settings, "PtoPType") == 0)
    {
        VAR_2 = FUNC_1(VAR_0->settings, "start_point");
        VAR_3 = FUNC_1(VAR_0->settings, "end_point");
        VAR_1 = FUNC_0 (VAR_0->builder, "ChapterMarkers");
        FUNC_3(VAR_1, VAR_3 > VAR_2);
    }
}
