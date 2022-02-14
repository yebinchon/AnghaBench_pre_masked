
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
struct TYPE_7__ {scalar_t__ index; int short_name; int * name; } ;
typedef TYPE_2__ hb_filter_param_t ;
typedef size_t gint ;
typedef int gchar ;
typedef int GtkTreeIter ;
typedef int GtkListStore ;
typedef int GtkComboBox ;


 int FUNC_0 (int ,int const*) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int ,int *,int,int ,int,int ,int,double,int) ;
 TYPE_2__* FUNC_10 (int) ;
 TYPE_2__* FUNC_11 (int) ;

__attribute__((used)) static void
FUNC_12(signal_user_data_t *VAR_1, const gchar *VAR_2,
                 int VAR_3, int VAR_4)
{
    GtkTreeIter VAR_5;
    GtkListStore *VAR_6;
    gint VAR_7;
    gchar *VAR_8;

    if (VAR_2 == ((void*)0)) return;
    GtkComboBox *VAR_9 = FUNC_1(FUNC_0(VAR_1->builder, VAR_2));
    VAR_6 = FUNC_2(FUNC_6 (VAR_9));
    FUNC_8(VAR_6);
    hb_filter_param_t * VAR_10;
    if (VAR_4)
    {
        VAR_10 = FUNC_10(VAR_3);
    }
    else
    {
        VAR_10 = FUNC_11(VAR_3);
    }
    for (VAR_7 = 0; VAR_10 != ((void*)0) && VAR_10[VAR_7].name != ((void*)0); VAR_7++)
    {
        FUNC_7(VAR_6, &VAR_5);
        VAR_8 = FUNC_4("<small>%s</small>",
                              FUNC_5(VAR_10[VAR_7].name));
        FUNC_9(VAR_6, &VAR_5,
                           0, VAR_8,
                           1, VAR_0,
                           2, VAR_10[VAR_7].short_name,
                           3, (double)VAR_10[VAR_7].index,
                           -1);
        FUNC_3(VAR_8);
    }
}
