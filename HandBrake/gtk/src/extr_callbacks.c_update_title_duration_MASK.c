
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int settings; int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int hb_title_t ;
typedef int gint64 ;
typedef int gint ;
typedef int gchar ;
typedef int GtkWidget ;


 int * FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,int ,int ,int ) ;
 int FUNC_4 (int ,int *,int *,int *) ;
 int FUNC_5 (int ,char*) ;
 int * FUNC_6 (int,int*) ;
 int FUNC_7 (int ,int const*) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static void
FUNC_9(signal_user_data_t *VAR_0)
{
    gint VAR_1, VAR_2, VAR_3;
    gint64 VAR_4;
    gchar *VAR_5;
    GtkWidget *VAR_6;
    int VAR_7, VAR_8;
    const hb_title_t *VAR_9;

    VAR_7 = FUNC_5(VAR_0->settings, "title");
    VAR_9 = FUNC_6(VAR_7, &VAR_8);
    VAR_6 = FUNC_0 (VAR_0->builder, "title_duration");

    VAR_4 = FUNC_7(VAR_0->settings, VAR_9);
    FUNC_4(VAR_4, &VAR_1, &VAR_2, &VAR_3);

    VAR_5 = FUNC_3("%02d:%02d:%02d", VAR_1, VAR_2, VAR_3);
    FUNC_8(FUNC_1(VAR_6), VAR_5);
    FUNC_2(VAR_5);
}
