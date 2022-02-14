
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rate; int name; } ;
typedef TYPE_1__ hb_rate_t ;
typedef int gdouble ;
typedef int gchar ;
typedef int GtkTreeIter ;
typedef int GtkListStore ;
typedef int GtkComboBox ;


 int * FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int ,int *,int,int ,int,int ,int,int ,int) ;
 TYPE_1__* FUNC_7 (TYPE_1__ const*) ;

void
FUNC_8(GtkComboBox *VAR_1)
{
    GtkTreeIter VAR_2;
    GtkListStore *VAR_3;
    gchar *VAR_4;

    VAR_3 = FUNC_0(FUNC_3 (VAR_1));
    FUNC_5(VAR_3);

    const hb_rate_t *VAR_5;
    for (VAR_5 = FUNC_7(((void*)0)); VAR_5 != ((void*)0);
         VAR_5 = FUNC_7(VAR_5))
    {
        FUNC_4(VAR_3, &VAR_2);
        VAR_4 = FUNC_2 ("<small>%s</small>", VAR_5->name);
        FUNC_6(VAR_3, &VAR_2,
                           0, VAR_4,
                           1, VAR_0,
                           2, VAR_5->name,
                           3, (gdouble)VAR_5->rate,
                           -1);
        FUNC_1(VAR_4);
    }
}
