
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ codec; int short_name; int name; } ;
typedef TYPE_1__ hb_encoder_t ;
typedef int gdouble ;
typedef int gchar ;
typedef int GtkTreeIter ;
typedef int GtkListStore ;
typedef int GtkComboBox ;


 int * FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *,int ,int *,int,int ,int,int ,int,int ,int) ;
 TYPE_1__* FUNC_6 (int ) ;

void
FUNC_7(GtkComboBox *VAR_2)
{
    GtkTreeIter VAR_3;
    GtkListStore *VAR_4;
    gchar *VAR_5;
    const hb_encoder_t *VAR_6;

    VAR_6 = FUNC_6(VAR_0);
    if (VAR_6 != ((void*)0))
    {
        VAR_4 = FUNC_0(FUNC_3 (VAR_2));
        FUNC_4(VAR_4, &VAR_3);
        VAR_5 = FUNC_2("<small>%s</small>", VAR_6->name);
        FUNC_5(VAR_4, &VAR_3,
                           0, VAR_5,
                           1, VAR_1,
                           2, VAR_6->short_name,
                           3, (gdouble)VAR_6->codec,
                           -1);
        FUNC_1(VAR_5);
    }
}
