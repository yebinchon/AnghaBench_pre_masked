
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int time_t ;
struct stat {int st_mtime; } ;
struct TYPE_4__ {int prefs; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int gint ;
typedef int gchar ;
typedef int GDir ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ,int *) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct stat*) ;
 int * FUNC_6 (char*,int *,int const*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void
FUNC_12(signal_user_data_t *VAR_1)
{
    gchar *VAR_2;
    gint VAR_3;


    VAR_3 = FUNC_10(VAR_1->prefs, "LogLongevity");
    if (VAR_3 > 365)
        return;

    VAR_2 = FUNC_8("EncodeLogs");
    if (FUNC_3(VAR_2, VAR_0))
    {
        const gchar *VAR_4;
        gint VAR_5 = VAR_3 * 24 * 60 * 60;

        GDir *VAR_6 = FUNC_1(VAR_2, 0, ((void*)0));
        time_t VAR_7;

        VAR_7 = FUNC_11(((void*)0));
        VAR_4 = FUNC_2(VAR_6);
        while (VAR_4)
        {
            gchar *VAR_8;
            struct stat VAR_9;

            VAR_8 = FUNC_6("%s/%s", VAR_2, VAR_4);
            FUNC_5(VAR_8, &VAR_9);
            if (VAR_7 - VAR_9.st_mtime > VAR_5)
            {
                FUNC_7(VAR_8);
            }
            FUNC_4(VAR_8);
            VAR_4 = FUNC_2(VAR_6);
        }
        FUNC_0(VAR_6);
    }
    FUNC_4(VAR_2);
    FUNC_9(VAR_1);
}
