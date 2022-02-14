
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int gboolean ;
typedef int GtkWidget ;


 int * FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(signal_user_data_t *VAR_0, gboolean VAR_1)
{
    GtkWidget *VAR_2 = FUNC_0(VAR_0->builder, "audio_add");
    FUNC_1(VAR_2, VAR_1);
    VAR_2 = FUNC_0(VAR_0->builder, "audio_add_all");
    FUNC_1(VAR_2, VAR_1);
    VAR_2 = FUNC_0(VAR_0->builder, "audio_reset");
    FUNC_1(VAR_2, VAR_1);
}
