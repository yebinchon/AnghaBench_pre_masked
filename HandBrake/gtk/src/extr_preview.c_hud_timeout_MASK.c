
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int gboolean ;
typedef int GtkWidget ;


 int VAR_0 ;
 int * FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static gboolean
FUNC_3(signal_user_data_t *VAR_2)
{
    GtkWidget *VAR_3;

    FUNC_1("hud_timeout()");
    VAR_3 = FUNC_0(VAR_2->builder, "preview_hud");
    FUNC_2(VAR_3);
    VAR_1 = 0;
    return VAR_0;
}
