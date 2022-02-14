
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cancel_encode; int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef char gchar ;
typedef int GtkWindow ;
typedef int GtkWidget ;
typedef scalar_t__ GtkResponseType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ,int,int ,int,int ,int,int ,int,int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int * FUNC_7 (int *,int ,int ,int ,int ,char const*) ;
 int FUNC_8 (int *) ;

void
FUNC_9(signal_user_data_t *VAR_7, const gchar *VAR_8)
{
    GtkWindow *VAR_9;
    GtkWidget *VAR_10;
    GtkResponseType VAR_11;

    if (VAR_8 == ((void*)0)) VAR_8 = "";

    VAR_9 = FUNC_2(FUNC_0(VAR_7->builder, "hb_window"));
    VAR_10 = FUNC_7(VAR_9, VAR_5,
                VAR_6, VAR_4,
                FUNC_3("%sYour movie will be lost if you don't continue encoding."),
                VAR_8);
    FUNC_5( FUNC_1(VAR_10),
                           FUNC_3("Cancel Current and Stop"), 1,
                           FUNC_3("Cancel Current, Start Next"), 2,
                           FUNC_3("Finish Current, then Stop"), 3,
                           FUNC_3("Continue Encoding"), 4,
                           ((void*)0));
    VAR_11 = FUNC_6(FUNC_1(VAR_10));
    FUNC_8 (VAR_10);
    switch ((int)VAR_11)
    {
        case 1:
            FUNC_4();
            VAR_7->cancel_encode = VAR_0;
            break;
        case 2:
            FUNC_4();
            VAR_7->cancel_encode = VAR_1;
            break;
        case 3:
            VAR_7->cancel_encode = VAR_2;
            break;
        case 4:
        default:
            VAR_7->cancel_encode = VAR_3;
            break;
    }
}
