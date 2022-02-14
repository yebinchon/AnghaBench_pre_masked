
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int hb_value_t ;
typedef scalar_t__ gint ;
typedef double gdouble ;
typedef int gchar ;
typedef int GtkTreeIter ;
typedef int GtkListStore ;
typedef int GtkComboBox ;


 int FUNC_0 (int ,int const*) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int VAR_0 ;
 char** FUNC_3 (scalar_t__,int) ;
 char* FUNC_4 (char const*) ;
 int FUNC_5 (char**) ;
 scalar_t__ FUNC_6 (char const**,char const*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,int ,char const*,int,int ,int,char const*,int,double,int) ;
 int FUNC_11 (int *,char*) ;
 int * FUNC_12 () ;
 int * FUNC_13 (int *,scalar_t__) ;
 scalar_t__ FUNC_14 (int *) ;
 int FUNC_15 (int ) ;
 char* FUNC_16 (int ) ;

__attribute__((used)) static void
FUNC_17(signal_user_data_t *VAR_1, const gchar *VAR_2,
                         void *VAR_3, const void* VAR_4)
{
    (void)VAR_3;
    (void)VAR_4;
    GtkTreeIter VAR_5;
    GtkListStore * VAR_6;
    gint VAR_7, VAR_8, VAR_9;
    hb_value_t * VAR_10;
    GtkComboBox * VAR_11;
    char ** VAR_12;

    VAR_10 = FUNC_12();
    VAR_9 = FUNC_14(VAR_10);

    VAR_11 = FUNC_1(FUNC_0(VAR_1->builder, VAR_2));
    VAR_6 = FUNC_2(FUNC_7 (VAR_11));
    FUNC_9(VAR_6);

    VAR_12 = FUNC_3(VAR_9 + 1, sizeof(char*));
    for (VAR_7 = 0, VAR_8 = 0; VAR_7 < VAR_9; VAR_7++)
    {
        const char * VAR_13;
        hb_value_t * VAR_14 = FUNC_13(VAR_10, VAR_7);

        if (!FUNC_15(FUNC_11(VAR_14, "Folder")))
        {

            continue;
        }

        VAR_13 = FUNC_16(FUNC_11(VAR_14, "PresetName"));
        if (VAR_13 == ((void*)0) || VAR_13[0] == 0)
        {
            continue;
        }

        if (FUNC_6((const char**)VAR_12, VAR_13))
        {

            continue;
        }

        VAR_12[VAR_8++] = FUNC_4(VAR_13);
        FUNC_8(VAR_6, &VAR_5);
        FUNC_10(VAR_6, &VAR_5,
                           0, VAR_13,
                           1, VAR_0,
                           2, VAR_13,
                           3, (gdouble)VAR_7,
                           -1);
    }
    FUNC_5(VAR_12);

    FUNC_8(VAR_6, &VAR_5);
    FUNC_10(VAR_6, &VAR_5,
                       0, "Add New Category",
                       1, VAR_0,
                       2, "new",
                       3, -1.0,
                       -1);
}
