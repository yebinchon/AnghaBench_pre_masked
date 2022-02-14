
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GtkTreeViewColumn ;
typedef int GtkTreeView ;
typedef int GtkTreeStore ;
typedef int GtkCellRenderer ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 () ;
 int * FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int *,char*,int ) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *,int *,int ) ;
 int FUNC_8 (int *,int ) ;

void FUNC_9(GtkTreeView *VAR_3)
{
    GtkTreeViewColumn * VAR_4;
    GtkTreeStore * VAR_5;
    GtkCellRenderer * VAR_6;




    VAR_5 = FUNC_3(2, VAR_2, VAR_1);
    FUNC_8(VAR_3, FUNC_0(VAR_5));

    VAR_6 = FUNC_2();
    VAR_4 = FUNC_6();
    FUNC_7(VAR_4, VAR_6, VAR_0);
    FUNC_5(VAR_4, VAR_6, "markup", 0);
    FUNC_4(VAR_3, FUNC_1(VAR_4));
}
