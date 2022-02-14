
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* name; scalar_t__ rate; } ;
typedef TYPE_1__ hb_rate_t ;
typedef double gdouble ;
typedef int gchar ;
typedef int GtkTreeIter ;
typedef int GtkListStore ;
typedef int GtkComboBox ;


 int * FUNC_0 (int ) ;
 int VAR_0 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int ,int *,int,int ,int,char*,int,double,int) ;
 TYPE_1__* FUNC_8 (TYPE_1__ const*) ;

void
FUNC_9(GtkComboBox *VAR_1)
{
    GtkTreeIter VAR_2;
    GtkListStore *VAR_3;
    gchar *VAR_4;

    VAR_3 = FUNC_0(FUNC_4 (VAR_1));
    FUNC_6(VAR_3);

    FUNC_5(VAR_3, &VAR_2);
    VAR_4 = FUNC_3("<small>%s</small>", FUNC_1("Same as source"));
    FUNC_7(VAR_3, &VAR_2,
                       0, VAR_4,
                       1, VAR_0,
                       2, "auto",
                       3, 0.0,
                       -1);
    FUNC_2(VAR_4);

    const hb_rate_t *VAR_5;
    for (VAR_5 = FUNC_8(((void*)0)); VAR_5 != ((void*)0);
         VAR_5 = FUNC_8(VAR_5))
    {
        FUNC_5(VAR_3, &VAR_2);
        VAR_4 = FUNC_3("<small>%s</small>", VAR_5->name);
        FUNC_7(VAR_3, &VAR_2,
                           0, VAR_4,
                           1, VAR_0,
                           2, VAR_5->name,
                           3, (gdouble)VAR_5->rate,
                           -1);
        FUNC_2(VAR_4);
    }
}
