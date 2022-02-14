
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ gint ;
typedef scalar_t__ gdouble ;
typedef int gboolean ;
typedef int GtkTreeModel ;
typedef int GtkTreeIter ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int,scalar_t__*,int) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;

__attribute__((used)) static gboolean
FUNC_3(GtkTreeModel *VAR_2, gint VAR_3, GtkTreeIter *VAR_4)
{
    gdouble VAR_5;
    gboolean VAR_6 = VAR_0;

    if (FUNC_1 (VAR_2, VAR_4))
    {
        do
        {
            FUNC_0(VAR_2, VAR_4, 3, &VAR_5, -1);
            if (VAR_3 == (gint)VAR_5)
            {
                VAR_6 = VAR_1;
                break;
            }
        } while (FUNC_2 (VAR_2, VAR_4));
    }
    return VAR_6;
}
