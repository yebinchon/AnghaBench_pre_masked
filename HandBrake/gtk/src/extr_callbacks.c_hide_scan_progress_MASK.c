
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int GtkWidget ;
typedef int GtkProgressBar ;


 int * FUNC_0 (int ,char*) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,double) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(signal_user_data_t *VAR_0)
{
    GtkWidget * VAR_1;
    GtkProgressBar * VAR_2;

    VAR_2 = FUNC_1(FUNC_0(VAR_0->builder, "scan_prog"));
    FUNC_2(VAR_2, 1.0);

    VAR_1 = FUNC_0(VAR_0->builder, "SourceScanBox");
    FUNC_3(VAR_1);

    VAR_1 = FUNC_0(VAR_0->builder, "SourceInfoBox");
    FUNC_4(VAR_1);
}
