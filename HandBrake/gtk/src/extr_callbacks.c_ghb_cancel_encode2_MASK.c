
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cancel_encode; int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef char gchar ;
typedef int gboolean ;
typedef int GtkWindow ;
typedef int GtkWidget ;
typedef scalar_t__ GtkResponseType ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ,int,int ,int,int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int * FUNC_7 (int *,int ,int ,int ,int ,char const*) ;
 int FUNC_8 (int *) ;

gboolean
FUNC_9(signal_user_data_t *VAR_6, const gchar *VAR_7)
{
    GtkWindow *VAR_8;
    GtkWidget *VAR_9;
    GtkResponseType VAR_10;

    if (VAR_7 == ((void*)0)) VAR_7 = "";

    VAR_8 = FUNC_2(FUNC_0(VAR_6->builder, "hb_window"));
    VAR_9 = FUNC_7(VAR_8, VAR_3,
                VAR_4, VAR_2,
                FUNC_3("%sYour movie will be lost if you don't continue encoding."),
                VAR_7);
    FUNC_5( FUNC_1(VAR_9),
                           FUNC_3("Cancel Current and Stop"), 1,
                           FUNC_3("Continue Encoding"), 4,
                           ((void*)0));
    VAR_10 = FUNC_6(FUNC_1(VAR_9));
    FUNC_8 (VAR_9);
    switch ((int)VAR_10)
    {
        case 1:
            FUNC_4();
            VAR_6->cancel_encode = VAR_1;
            return VAR_5;
        case 4:
        default:
            break;
    }
    return VAR_0;
}
