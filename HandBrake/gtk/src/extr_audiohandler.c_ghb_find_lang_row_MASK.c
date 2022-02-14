
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gint ;
typedef int gboolean ;
typedef int GtkTreeModel ;
typedef int GtkTreeIter ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int,int*,int) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;

gboolean FUNC_3(GtkTreeModel *VAR_2, GtkTreeIter *VAR_3, int VAR_4)
{
    if (FUNC_1(VAR_2, VAR_3))
    {
        do
        {
            gint VAR_5;

            FUNC_0(VAR_2, VAR_3, 1, &VAR_5, -1);
            if (VAR_5 >= VAR_4)
            {
                return VAR_1;
            }
        } while (FUNC_2(VAR_2, VAR_3));
    }
    return VAR_0;
}
