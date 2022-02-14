
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* preview; int builder; } ;
typedef TYPE_2__ signal_user_data_t ;
typedef scalar_t__ gboolean ;
struct TYPE_5__ {int live_id; size_t encode_frame; size_t frame; int * encoded; } ;
typedef int GtkWidget ;


 int VAR_0 ;
 int * FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;

void
FUNC_7(signal_user_data_t *VAR_2, gboolean VAR_3)
{
    GtkWidget *VAR_4;
    GtkWidget *VAR_5;

    VAR_2->preview->live_id = -1;
    VAR_5 = FUNC_0(VAR_2->builder, "live_encode_progress");
    if (VAR_3 &&
        VAR_2->preview->encode_frame == VAR_2->preview->frame)
    {
        FUNC_3(FUNC_1(VAR_5), "Done");
        FUNC_2 (FUNC_1(VAR_5), 1);
        VAR_2->preview->encoded[VAR_2->preview->encode_frame] = VAR_1;



        VAR_4 = FUNC_0(VAR_2->builder, "live_progress_box");
        FUNC_4 (VAR_4);
        VAR_4 = FUNC_0(VAR_2->builder, "live_preview_progress");
        FUNC_5 (VAR_4);
    }
    else
    {
        FUNC_3(FUNC_1(VAR_5), "");
        FUNC_2 (FUNC_1(VAR_5), 0);
        VAR_2->preview->encoded[VAR_2->preview->encode_frame] = VAR_0;
    }
}
