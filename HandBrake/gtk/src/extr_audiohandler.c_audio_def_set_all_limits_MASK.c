
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int gpointer ;
typedef int GtkListBox ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ,int ) ;

void FUNC_4(signal_user_data_t *VAR_1)
{
    GtkListBox *VAR_2;

    VAR_2 = FUNC_2(FUNC_0(VAR_1->builder, "audio_list_default"));
    FUNC_3(FUNC_1(VAR_2),
                          VAR_0, (gpointer)VAR_1);
}
