
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int builder; TYPE_1__* preview; } ;
typedef TYPE_2__ signal_user_data_t ;
struct TYPE_4__ {int state; int pause; int play; int live_enabled; } ;
typedef int GtkRange ;
typedef int GtkImage ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int ) ;

void
FUNC_6(signal_user_data_t *VAR_5)
{
    GtkImage *VAR_6;
    GtkRange *VAR_7;

    if (!VAR_5->preview->live_enabled)
        return;

    VAR_6 = FUNC_1(FUNC_0(VAR_5->builder, "live_preview_play_image"));
    FUNC_3(VAR_6, VAR_1, VAR_0);



    VAR_5->preview->pause = VAR_4;
    VAR_5->preview->state = VAR_3;

    VAR_7 = FUNC_2(FUNC_0(VAR_5->builder, "live_preview_progress"));
    FUNC_5(VAR_7, 0);
}
