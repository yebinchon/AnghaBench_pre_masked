
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int codec; int short_name; int name; } ;
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
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int ,int *,int,int ,int,int ,int,int ,int) ;
 TYPE_1__* FUNC_7 (TYPE_1__ const*) ;

void
FUNC_8(
    GtkComboBox *VAR_2,
    int VAR_3,
    int VAR_4)
{
    GtkTreeIter VAR_5;
    GtkListStore *VAR_6;
    gchar *VAR_7;

    VAR_6 = FUNC_0(FUNC_3 (VAR_2));
    FUNC_5(VAR_6);

    const hb_encoder_t *VAR_8;
    for (VAR_8 = FUNC_7(((void*)0)); VAR_8 != ((void*)0);
         VAR_8 = FUNC_7(VAR_8))
    {
        if ((VAR_3 & VAR_8->codec) && !(VAR_4 & VAR_8->codec) &&
            VAR_8->codec != VAR_0)
        {
            FUNC_4(VAR_6, &VAR_5);
            VAR_7 = FUNC_2("<small>%s</small>", VAR_8->name);
            FUNC_6(VAR_6, &VAR_5,
                               0, VAR_7,
                               1, VAR_1,
                               2, VAR_8->short_name,
                               3, (gdouble)VAR_8->codec,
                               -1);
            FUNC_1(VAR_7);
        }
    }
}
