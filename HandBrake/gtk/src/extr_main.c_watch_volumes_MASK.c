
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int GtkWidget ;
typedef int GdkWindow ;
typedef int GVolumeMonitor ;
typedef int GCallback ;


 int * FUNC_0 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,char*,int ,TYPE_1__*) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int ,TYPE_1__*) ;
 int * FUNC_4 (int *) ;
 int VAR_1 ;

void
FUNC_5(signal_user_data_t *VAR_2)
{

    GVolumeMonitor *VAR_3;
    VAR_3 = FUNC_2();

    FUNC_1(VAR_3, "drive-changed", (GCallback)VAR_0, VAR_2);
}
