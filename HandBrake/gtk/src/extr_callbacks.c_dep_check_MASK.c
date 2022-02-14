
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int settings; int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef scalar_t__ gint ;
typedef scalar_t__ gdouble ;
typedef char gchar ;
typedef int gboolean ;
typedef int GtkWidget ;
typedef int GhbValue ;
typedef int GObject ;


 int VAR_0 ;
 int * FUNC_0 (int ,char const*) ;
 int VAR_1 ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char**) ;
 char** FUNC_5 (char const*,char*,int) ;
 scalar_t__ FUNC_6 (char*,int *) ;
 int * FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (int *) ;
 int * FUNC_9 (int *,char const*) ;
 char* FUNC_10 (int ,char const*) ;
 int FUNC_11 (int *) ;
 char* FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 char* FUNC_14 (int *) ;
 int * FUNC_15 (int ,char const*) ;
 int FUNC_16 (int *) ;
 int * VAR_2 ;
 scalar_t__ FUNC_17 (char*,char*) ;

__attribute__((used)) static gboolean
FUNC_18(signal_user_data_t *VAR_3, const gchar *VAR_4, gboolean *VAR_5)
{
    GtkWidget *VAR_6;
    GObject *VAR_7;
    gint VAR_8;
    gint VAR_9;
    gboolean VAR_10 = VAR_1;
    GhbValue *VAR_11, *VAR_12;
    const gchar *VAR_13;

    FUNC_1("dep_check () %s", VAR_4);

    if (VAR_2 == ((void*)0)) return VAR_1;
    VAR_11 = FUNC_9(VAR_2, VAR_4);
    VAR_9 = FUNC_8(VAR_11);
    *VAR_5 = VAR_0;
    for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
    {
        VAR_12 = FUNC_7(VAR_11, VAR_8);
        VAR_13 = FUNC_12(FUNC_7(VAR_12, 0));
        VAR_6 = FUNC_0(VAR_3->builder, VAR_13);
        VAR_7 = FUNC_15(VAR_3->builder, VAR_4);
        if (VAR_6 != ((void*)0) && !FUNC_16(VAR_6))
        {
            continue;
        }
        if (VAR_7 == ((void*)0))
        {
            FUNC_3("Failed to find widget");
        }
        else
        {
            gchar *VAR_14;
            gint VAR_15 = 0;
            gchar **VAR_16;
            gboolean VAR_17 = VAR_0;
            gboolean VAR_18, VAR_19;

            VAR_18 = FUNC_11(FUNC_7(VAR_12, 2));
            VAR_19 = FUNC_11(FUNC_7(VAR_12, 3));
            const char *VAR_20 = FUNC_12(FUNC_7(VAR_12, 1));
            VAR_16 = FUNC_5(VAR_20, "|", 10);

            if (VAR_6)
                VAR_14 = FUNC_14(VAR_6);
            else
                VAR_14 = FUNC_10(VAR_3->settings, VAR_13);
            while (VAR_16 && VAR_16[VAR_15])
            {
                if (VAR_16[VAR_15][0] == '>')
                {
                    gdouble VAR_21 = FUNC_6 (&VAR_16[VAR_15][1], ((void*)0));
                    gdouble VAR_22 = FUNC_13(VAR_6);
                    if (VAR_22 > VAR_21)
                    {
                        VAR_17 = VAR_1;
                        break;
                    }
                }
                else if (VAR_16[VAR_15][0] == '<')
                {
                    gdouble VAR_23 = FUNC_6 (&VAR_16[VAR_15][1], ((void*)0));
                    gdouble VAR_24 = FUNC_13(VAR_6);
                    if (VAR_24 < VAR_23)
                    {
                        VAR_17 = VAR_1;
                        break;
                    }
                }
                if (FUNC_17(VAR_16[VAR_15], VAR_14) == 0)
                {
                    VAR_17 = VAR_1;
                    break;
                }
                VAR_15++;
            }
            VAR_17 = VAR_18 ^ VAR_17;
            if (!VAR_17)
            {
                VAR_10 = VAR_0;
                *VAR_5 |= VAR_19;
            }
            FUNC_4 (VAR_16);
            FUNC_2(VAR_14);
        }
    }
    return VAR_10;
}
