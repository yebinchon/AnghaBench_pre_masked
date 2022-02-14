
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gint ;
typedef double gdouble ;
typedef int GtkTreeIter ;
typedef int GtkListStore ;
typedef int GtkComboBox ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int,int ,int) ;
 int FUNC_4 (int ,int *,int,double*,int) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (double,int ) ;

void
FUNC_8(GtkComboBox *VAR_1, gint VAR_2)
{
    GtkTreeIter VAR_3;
    GtkListStore *VAR_4;
    gdouble VAR_5;

    VAR_4 = FUNC_0(FUNC_2(VAR_1));
    if (!FUNC_5( FUNC_1(VAR_4), &VAR_3))
        return;

    do
    {
        FUNC_4(FUNC_1(VAR_4), &VAR_3, 3, &VAR_5, -1);


        FUNC_3(VAR_4, &VAR_3, 1, VAR_5 == 0.0 ? VAR_0 :
                FUNC_7(VAR_5, VAR_2), -1);
    } while (FUNC_6(FUNC_1(VAR_4), &VAR_3));
}
