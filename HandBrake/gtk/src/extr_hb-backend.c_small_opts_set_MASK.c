
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int builder; } ;
typedef TYPE_2__ signal_user_data_t ;
typedef size_t gint ;
typedef int gchar ;
struct TYPE_7__ {size_t count; TYPE_1__* map; } ;
typedef TYPE_3__ combo_opts_t ;
struct TYPE_5__ {int ivalue; int shortOpt; int option; } ;
typedef int GtkTreeIter ;
typedef int GtkListStore ;
typedef int GtkComboBox ;


 int FUNC_0 (int ,int const*) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int ,int *,int,int ,int,int ,int,int ,int) ;

__attribute__((used)) static void
FUNC_10(signal_user_data_t *VAR_1, const gchar *VAR_2,
               void *VAR_3, const void* VAR_4)
{
    (void)VAR_4;
    combo_opts_t *VAR_5 = (combo_opts_t*)VAR_3;
    GtkTreeIter VAR_6;
    GtkListStore *VAR_7;
    gint VAR_8;
    gchar *VAR_9;

    if (VAR_2 == ((void*)0) || VAR_5 == ((void*)0)) return;
    GtkComboBox *VAR_10 = FUNC_1(FUNC_0(VAR_1->builder, VAR_2));
    VAR_7 = FUNC_2(FUNC_6 (VAR_10));
    FUNC_8(VAR_7);
    for (VAR_8 = 0; VAR_8 < VAR_5->count; VAR_8++)
    {
        FUNC_7(VAR_7, &VAR_6);
        VAR_9 = FUNC_4("<small>%s</small>",
                              FUNC_5(VAR_5->map[VAR_8].option));
        FUNC_9(VAR_7, &VAR_6,
                           0, VAR_9,
                           1, VAR_0,
                           2, VAR_5->map[VAR_8].shortOpt,
                           3, VAR_5->map[VAR_8].ivalue,
                           -1);
        FUNC_3(VAR_9);
    }
}
