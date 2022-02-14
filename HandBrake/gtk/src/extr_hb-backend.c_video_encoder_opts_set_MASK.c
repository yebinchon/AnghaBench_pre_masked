
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
struct TYPE_7__ {scalar_t__ codec; int short_name; int name; } ;
typedef TYPE_2__ hb_encoder_t ;
typedef int gdouble ;
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
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int ,int *,int,int ,int,int ,int,int ,int) ;
 TYPE_2__* FUNC_9 (TYPE_2__ const*) ;

__attribute__((used)) static void
FUNC_10(signal_user_data_t *VAR_1, const gchar *VAR_2,
                       void *VAR_3, const void* VAR_4)
{
    (void)VAR_3;
    (void)VAR_4;
    GtkTreeIter VAR_5;
    GtkListStore *VAR_6;
    gchar *VAR_7;

    GtkComboBox *VAR_8 = FUNC_1(FUNC_0(VAR_1->builder, VAR_2));
    VAR_6 = FUNC_2(FUNC_5 (VAR_8));
    FUNC_7(VAR_6);

    const hb_encoder_t *VAR_9;
    for (VAR_9 = FUNC_9(((void*)0)); VAR_9 != ((void*)0);
         VAR_9 = FUNC_9(VAR_9))
    {
        FUNC_6(VAR_6, &VAR_5);
        VAR_7 = FUNC_4("<small>%s</small>", VAR_9->name);
        FUNC_8(VAR_6, &VAR_5,
                           0, VAR_7,
                           1, VAR_0,
                           2, VAR_9->short_name,
                           3, (gdouble)VAR_9->codec,
                           -1);
        FUNC_3(VAR_7);
    }
}
