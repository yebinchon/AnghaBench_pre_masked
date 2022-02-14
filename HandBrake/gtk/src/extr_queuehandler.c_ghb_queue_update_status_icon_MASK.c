
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int builder; int queue; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int GtkListBoxRow ;
typedef int GtkListBox ;
typedef int GtkImage ;
typedef int GhbValue ;


 int VAR_0 ;





 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*) ;
 int * FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,char const*,int ) ;
 int * FUNC_10 (int *,int) ;

void
FUNC_11(signal_user_data_t *VAR_1, int VAR_2)
{
    int VAR_3 = FUNC_6(VAR_1->queue);
    if (VAR_2 < 0 || VAR_2 >= VAR_3)
    {

        return;
    }

    GhbValue * VAR_4, * VAR_5;
    VAR_4 = FUNC_5(VAR_1->queue, VAR_2);
    if (VAR_4 == ((void*)0))
    {
        return;
    }
    VAR_5 = FUNC_7(VAR_4, "uiSettings");
    if (VAR_5 == ((void*)0))
    {
        return;
    }

    int VAR_6 = FUNC_8(VAR_5, "job_status");


    const char * VAR_7;
    switch (VAR_6)
    {
        case 128:
             VAR_7 = "hb-start";
            break;
        case 129:
             VAR_7 = "hb-source";
            break;
        case 130:
        case 132:
             VAR_7 = "hb-stop";
            break;
        case 131:
             VAR_7 = "hb-complete";
            break;
        default:
             VAR_7 = "hb-source";
            break;
    }
    GtkListBox * VAR_8;
    GtkListBoxRow * VAR_9;
    GtkImage * VAR_10;

    VAR_8 = FUNC_2(FUNC_0(VAR_1->builder, "queue_list"));
    VAR_9 = FUNC_10(VAR_8, VAR_2);
    if (VAR_9 == ((void*)0))
    {
        return;
    }
    VAR_10 = FUNC_1(FUNC_4(FUNC_3(VAR_9), "queue_item_status"));
    if (VAR_10 == ((void*)0))
    {
        return;
    }
    FUNC_9(VAR_10, VAR_7,
                                 VAR_0);
}
