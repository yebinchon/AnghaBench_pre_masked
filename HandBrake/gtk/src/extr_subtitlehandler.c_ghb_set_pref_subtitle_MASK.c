
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int settings; int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
struct TYPE_7__ {int list_subtitle; } ;
typedef TYPE_2__ hb_title_t ;
typedef int GtkWidget ;
typedef int GhbValue ;


 int * FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,char*) ;
 int * FUNC_5 (int ) ;
 TYPE_2__* FUNC_6 (int,int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int,int ,int *) ;
 int FUNC_11 (TYPE_1__*) ;

void
FUNC_12(signal_user_data_t *VAR_1)
{
    int VAR_2, VAR_3;
    GtkWidget *VAR_4;
    const hb_title_t *VAR_5;

    VAR_3 = FUNC_3(VAR_1->settings, "title");
    VAR_5 = FUNC_6(VAR_3, ((void*)0));

    FUNC_2(VAR_1->builder);
    if (VAR_5 == ((void*)0))
    {

        FUNC_1(VAR_1->settings);
        return;
    }
    VAR_2 = FUNC_9(VAR_5->list_subtitle);
    if (VAR_2 == 0)
    {

        VAR_4 = FUNC_0(VAR_1->builder, "SubtitleSrtEnable");
        FUNC_8(VAR_4, VAR_0);
    }
    else
    {
        VAR_4 = FUNC_0(VAR_1->builder, "SubtitleImportDisable");
        FUNC_8(VAR_4, VAR_0);
    }
    GhbValue *VAR_6 = FUNC_5(VAR_1->settings);
    FUNC_4(VAR_6, "Subtitle");
    FUNC_10(FUNC_7(), VAR_3, VAR_1->settings, VAR_6);
    FUNC_11(VAR_1);
}
