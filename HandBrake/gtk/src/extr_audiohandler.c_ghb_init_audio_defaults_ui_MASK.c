
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int GtkTreeView ;


 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *) ;

void FUNC_4(signal_user_data_t *VAR_0)
{
    GtkTreeView * VAR_1;

    VAR_1 = FUNC_1(FUNC_0(VAR_0->builder, "audio_avail_lang"));
    FUNC_2(VAR_1, VAR_0);
    VAR_1 = FUNC_1(FUNC_0(VAR_0->builder, "audio_selected_lang"));
    FUNC_3(VAR_1);
}
