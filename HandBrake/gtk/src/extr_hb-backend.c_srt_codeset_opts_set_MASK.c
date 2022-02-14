
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef size_t gint ;
typedef int gdouble ;
typedef int gchar ;
typedef int GtkTreeIter ;
typedef int GtkListStore ;
typedef int GtkComboBox ;


 int FUNC_0 (int ,int const*) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int ,int ,int,int ,int,int ,int,int ,int) ;
 int * VAR_2 ;

__attribute__((used)) static void
FUNC_7(signal_user_data_t *VAR_3, const gchar *VAR_4,
                     void *VAR_5, const void* VAR_6)
{
    (void)VAR_5;
    (void)VAR_6;
    GtkTreeIter VAR_7;
    GtkListStore *VAR_8;
    gint VAR_9;

    GtkComboBox *VAR_10 = FUNC_1(FUNC_0(VAR_3->builder, VAR_4));
    VAR_8 = FUNC_2(FUNC_3 (VAR_10));
    FUNC_5(VAR_8);
    for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
    {
        FUNC_4(VAR_8, &VAR_7);
        FUNC_6(VAR_8, &VAR_7,
                           0, VAR_2[VAR_9],
                           1, VAR_1,
                           2, VAR_2[VAR_9],
                           3, (gdouble)VAR_9,
                           -1);
    }
}
