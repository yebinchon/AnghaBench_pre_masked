
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int builder; int settings; } ;
typedef TYPE_1__ signal_user_data_t ;
struct TYPE_6__ {int list_subtitle; } ;
typedef TYPE_2__ hb_title_t ;
typedef int gboolean ;
typedef int GtkWidget ;


 int * FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 TYPE_2__* FUNC_2 (int,int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ) ;

void
FUNC_5(signal_user_data_t *VAR_0, gboolean VAR_1)
{
    GtkWidget *VAR_2 = FUNC_0(VAR_0->builder, "subtitle_add");
    FUNC_3(VAR_2, VAR_1);
    VAR_2 = FUNC_0(VAR_0->builder, "subtitle_add_all");
    FUNC_3(VAR_2, VAR_1);
    VAR_2 = FUNC_0(VAR_0->builder, "subtitle_reset");
    FUNC_3(VAR_2, VAR_1);

    int VAR_3;
    VAR_3 = FUNC_1(VAR_0->settings, "title");
    const hb_title_t *VAR_4 = FUNC_2(VAR_3, ((void*)0));
    if (VAR_4 != ((void*)0))
    {
        VAR_2 = FUNC_0(VAR_0->builder, "SubtitleImportDisable");
        FUNC_3(VAR_2, !!FUNC_4(VAR_4->list_subtitle));
    }
}
