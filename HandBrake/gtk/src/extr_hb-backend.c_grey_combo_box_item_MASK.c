
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gint ;
typedef int gboolean ;
typedef int GtkTreeIter ;
typedef int GtkListStore ;
typedef int GtkComboBox ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int,int,int) ;

__attribute__((used)) static void
FUNC_5(GtkComboBox *VAR_0, gint VAR_1, gboolean VAR_2)
{
    GtkListStore *VAR_3;
    GtkTreeIter VAR_4;

    VAR_3 = FUNC_0(FUNC_3 (VAR_0));
    if (FUNC_2(FUNC_1(VAR_3), VAR_1, &VAR_4))
    {
        FUNC_4(VAR_3, &VAR_4,
                           1, !VAR_2,
                           -1);
    }
}
