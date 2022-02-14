
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int builder; int settings; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef size_t gint ;
typedef int gdouble ;
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
 int * FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int ,char const* const,int,int ,int,char const* const,int,int ,int) ;
 int FUNC_9 (int *,int) ;
 char** FUNC_10 (int) ;

__attribute__((used)) static void
FUNC_11(signal_user_data_t *VAR_1, const gchar *VAR_2,
                     void *VAR_3, const void* VAR_4)
{
    (void)VAR_3;
    (void)VAR_4;
    GtkTreeIter VAR_5;
    GtkListStore *VAR_6;
    gint VAR_7, VAR_8 = 0;



    GhbValue *VAR_9 = FUNC_3(VAR_1->settings, "VideoEncoder");
    if (VAR_9 == ((void*)0)) return;

    int VAR_10 = FUNC_4(VAR_1->settings);
    const char * const *VAR_11;
    VAR_11 = FUNC_10(VAR_10);

    while (VAR_11 && VAR_11[VAR_8]) VAR_8++;
    GtkWidget *VAR_12 = FUNC_0(VAR_1->builder, "VideoLevel");
    FUNC_9(VAR_12, VAR_8 > 0);
    VAR_12 = FUNC_0(VAR_1->builder, "VideoLevelLabel");
    FUNC_9(VAR_12, VAR_8 > 0);
    if (VAR_8 <= 0) return;

    GtkComboBox *VAR_13 = FUNC_1(FUNC_0(VAR_1->builder, VAR_2));
    VAR_6 = FUNC_2(FUNC_5 (VAR_13));
    FUNC_7(VAR_6);

    for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
    {
        FUNC_6(VAR_6, &VAR_5);
        FUNC_8(VAR_6, &VAR_5,
                           0, VAR_11[VAR_7],
                           1, VAR_0,
                           2, VAR_11[VAR_7],
                           3, (gdouble)VAR_7,
                           -1);
    }
}
