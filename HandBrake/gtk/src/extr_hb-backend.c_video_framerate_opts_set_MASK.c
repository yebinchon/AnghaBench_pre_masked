
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
struct TYPE_7__ {char* name; scalar_t__ rate; } ;
typedef TYPE_2__ hb_rate_t ;
typedef double gdouble ;
typedef char gchar ;
typedef int GtkTreeIter ;
typedef int GtkListStore ;
typedef int GtkComboBox ;


 int FUNC_0 (int ,char const*) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int VAR_0 ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,char*,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int ,char*,int,int ,int,char*,int,double,int) ;
 TYPE_2__* FUNC_10 (TYPE_2__ const*) ;
 scalar_t__ FUNC_11 (char*,char*) ;

__attribute__((used)) static void
FUNC_12(signal_user_data_t *VAR_1, const gchar *VAR_2,
                         void *VAR_3, const void* VAR_4)
{
    (void)VAR_3;
    (void)VAR_4;
    GtkTreeIter VAR_5;
    GtkListStore *VAR_6;

    GtkComboBox *VAR_7 = FUNC_1(FUNC_0(VAR_1->builder, VAR_2));
    VAR_6 = FUNC_2(FUNC_6 (VAR_7));
    FUNC_8(VAR_6);

    FUNC_7(VAR_6, &VAR_5);
    FUNC_9(VAR_6, &VAR_5,
                       0, FUNC_3("Same as source"),
                       1, VAR_0,
                       2, "auto",
                       3, 0.0,
                       -1);

    const hb_rate_t *VAR_8;
    for (VAR_8 = FUNC_10(((void*)0)); VAR_8 != ((void*)0);
         VAR_8 = FUNC_10(VAR_8))
    {
        gchar *VAR_9 = "";
        gchar *VAR_10;
        if (FUNC_11(VAR_8->name, "23.976") == 0)
        {
            VAR_9 = FUNC_3("(NTSC Film)");
        }
        else if (FUNC_11(VAR_8->name, "25") == 0)
        {
            VAR_9 = FUNC_3("(PAL Film/Video)");
        }
        else if (FUNC_11(VAR_8->name, "29.97") == 0)
        {
            VAR_9 = FUNC_3("(NTSC Video)");
        }
        VAR_10 = FUNC_5 ("%s %s", VAR_8->name, VAR_9);
        FUNC_7(VAR_6, &VAR_5);
        FUNC_9(VAR_6, &VAR_5,
                           0, VAR_10,
                           1, VAR_0,
                           2, VAR_8->name,
                           3, (gdouble)VAR_8->rate,
                           -1);
        FUNC_4(VAR_10);
    }
}
