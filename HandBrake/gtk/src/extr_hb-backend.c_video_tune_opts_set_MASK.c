
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int builder; int settings; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef size_t gint ;
typedef scalar_t__ gdouble ;
typedef char gchar ;
typedef int GtkWidget ;
typedef int GtkTreeIter ;
typedef int GtkListStore ;
typedef int GtkComboBox ;
typedef int GhbValue ;


 int * FUNC_0 (int ,char const*) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char const* const FUNC_3 (char*) ;
 int * FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int ,char const* const,int,int ,int,char const* const,int,scalar_t__,int) ;
 int FUNC_10 (int *,int) ;
 char** FUNC_11 (int) ;
 int FUNC_12 (char const* const,char*) ;

__attribute__((used)) static void
FUNC_13(signal_user_data_t *VAR_3, const gchar *VAR_4,
                    void *VAR_5, const void* VAR_6)
{
    (void)VAR_5;
    (void)VAR_6;
    GtkTreeIter VAR_7;
    GtkListStore *VAR_8;
    gint VAR_9, VAR_10 = 0;



    GhbValue *VAR_11 = FUNC_4(VAR_3->settings, "VideoEncoder");
    if (VAR_11 == ((void*)0)) return;

    int VAR_12 = FUNC_5(VAR_3->settings);
    const char * const *VAR_13;
    VAR_13 = FUNC_11(VAR_12);

    while (VAR_13 && VAR_13[VAR_10]) VAR_10++;
    GtkWidget *VAR_14 = FUNC_0(VAR_3->builder, "VideoTune");
    FUNC_10(VAR_14, VAR_10 > 0);
    VAR_14 = FUNC_0(VAR_3->builder, "VideoTuneLabel");
    FUNC_10(VAR_14, VAR_10 > 0);
    if (VAR_10 == 0) return;

    GtkComboBox *VAR_15 = FUNC_1(FUNC_0(VAR_3->builder, VAR_4));
    VAR_8 = FUNC_2(FUNC_6 (VAR_15));
    FUNC_8(VAR_8);

    FUNC_7(VAR_8, &VAR_7);
    FUNC_9(VAR_8, &VAR_7,
                       0, FUNC_3("None"),
                       1, VAR_2,
                       2, "none",
                       3, (gdouble)0,
                       -1);

    for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
    {
        if (((VAR_12 & VAR_0) &&
             !FUNC_12(VAR_13[VAR_9], "fastdecode")) ||
            ((VAR_12 & (VAR_0 | VAR_1)) &&
             !FUNC_12(VAR_13[VAR_9], "zerolatency")))
        {
            continue;
        }
        FUNC_7(VAR_8, &VAR_7);
        FUNC_9(VAR_8, &VAR_7,
                           0, VAR_13[VAR_9],
                           1, VAR_2,
                           2, VAR_13[VAR_9],
                           3, (gdouble)VAR_9 + 1,
                           -1);
    }
}
