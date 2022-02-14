
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int gpointer ;
typedef scalar_t__ gint ;
typedef int gchar ;
typedef scalar_t__ gboolean ;
struct TYPE_9__ {int opts; int * name; int (* opts_set ) (TYPE_1__*,int *,int ,void const*) ;} ;
typedef TYPE_2__ combo_name_map_t ;
typedef int GtkComboBox ;


 int FUNC_0 (int ,int const*) ;
 int * FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_2__* FUNC_2 (int const*) ;
 int FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (char*,int ) ;
 int FUNC_7 (TYPE_1__*,int *,int ,void const*) ;
 int FUNC_8 (TYPE_1__*,int *,int ,void const*) ;

void
FUNC_9(
    signal_user_data_t *VAR_3,
    const gchar *VAR_4,
    const void* VAR_5,
    gboolean VAR_6)
{
    GtkComboBox *VAR_7 = ((void*)0);
    gint VAR_8;
    gint VAR_9 = 0;

    if (VAR_4 != ((void*)0))
    {



        VAR_7 = FUNC_1(FUNC_0(VAR_3->builder, VAR_4));
        VAR_8 = FUNC_6("changed", VAR_0);
        if (VAR_8 > 0)
        {

            VAR_9 = FUNC_4 ((gpointer)VAR_7, VAR_1,
                                                VAR_8, 0, 0, 0, 0);
            if (VAR_9 > 0)
            {

                FUNC_3 ((gpointer)VAR_7, VAR_9);
            }
        }
    }
    if (VAR_6)
    {
        int VAR_10;
        for (VAR_10 = 0; VAR_2[VAR_10].name != ((void*)0); VAR_10++)
        {
            combo_name_map_t *VAR_11 = &VAR_2[VAR_10];
            VAR_11->opts_set(VAR_3, VAR_11->name, VAR_11->opts, VAR_5);
        }
    }
    else
    {
        combo_name_map_t *VAR_12 = FUNC_2(VAR_4);
        if (VAR_12 != ((void*)0))
        {
            VAR_12->opts_set(VAR_3, VAR_12->name, VAR_12->opts, VAR_5);
        }
    }
    if (VAR_9 > 0)
    {
        FUNC_5 ((gpointer)VAR_7, VAR_9);
    }
}
