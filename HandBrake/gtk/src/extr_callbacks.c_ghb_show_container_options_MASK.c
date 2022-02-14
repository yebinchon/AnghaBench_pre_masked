
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int settings; int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
struct TYPE_6__ {int format; } ;
typedef TYPE_2__ hb_container_t ;
typedef scalar_t__ gint ;
typedef int GtkWidget ;


 int * FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_1 (int ,char*) ;
 TYPE_2__* FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,int) ;

void FUNC_5(signal_user_data_t *VAR_2)
{
    GtkWidget *VAR_3, *VAR_4, *VAR_5;
    VAR_3 = FUNC_0(VAR_2->builder, "AlignAVStart");
    VAR_4 = FUNC_0(VAR_2->builder, "Mp4HttpOptimize");
    VAR_5 = FUNC_0(VAR_2->builder, "Mp4iPodCompatible");

    const char *VAR_6;
    const hb_container_t *VAR_7;

    VAR_6 = FUNC_1(VAR_2->settings, "FileFormat");
    VAR_7 = FUNC_2(VAR_6);

    gint VAR_8 = FUNC_3(VAR_2->settings, "VideoEncoder");

    FUNC_4(VAR_3, (VAR_7->format & VAR_0));
    FUNC_4(VAR_4, (VAR_7->format & VAR_0));
    FUNC_4(VAR_5, (VAR_7->format & VAR_0) &&
                               (VAR_8 == VAR_1));
}
