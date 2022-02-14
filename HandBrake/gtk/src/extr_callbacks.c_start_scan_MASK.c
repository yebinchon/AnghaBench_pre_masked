
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int prefs; int builder; } ;
typedef TYPE_2__ signal_user_data_t ;
typedef int gint ;
struct TYPE_6__ {scalar_t__ state; } ;
struct TYPE_8__ {TYPE_1__ scan; } ;
typedef TYPE_3__ ghb_status_t ;
typedef int gchar ;
typedef int GtkWidget ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int const*,int ,int ,long) ;
 long FUNC_5 (int ,char*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static void
FUNC_11(
    signal_user_data_t *VAR_2,
    const gchar *VAR_3,
    gint VAR_4,
    gint VAR_5)
{
    GtkWidget *VAR_6;
    ghb_status_t VAR_7;

    FUNC_6(&VAR_7);
    if (VAR_7.scan.state != VAR_1)
        return;

    VAR_6 = FUNC_0(VAR_2->builder, "sourcetoolbutton");
    FUNC_7(FUNC_1(VAR_6), "hb-stop");
    FUNC_8(FUNC_1(VAR_6), FUNC_3("Stop Scan"));
    FUNC_9(FUNC_2(VAR_6), FUNC_3("Stop Scan"));

    VAR_6 = FUNC_0(VAR_2->builder, "source_open");
    FUNC_10(VAR_6, VAR_0);
    VAR_6 = FUNC_0(VAR_2->builder, "source_title_open");
    FUNC_10(VAR_6, VAR_0);
    FUNC_4(VAR_3, VAR_4, VAR_5,
            90000L * FUNC_5(VAR_2->prefs, "MinTitleDuration"));
}
