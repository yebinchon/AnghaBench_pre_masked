
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GtkListStore ;
typedef int GtkComboBox ;
typedef int GtkCellRenderer ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,char*,int,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *,int ) ;
 int FUNC_8 (int ,int *,char*,int ,char*,int,int *) ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int *,int ) ;
 int * FUNC_13 (int,int ,int ,int ,int ) ;

void
FUNC_14(GtkComboBox *VAR_5)
{
    GtkListStore *VAR_6;
    GtkCellRenderer *VAR_7;

    FUNC_4("ghb_init_combo_box()\n");

    if (VAR_5 == ((void*)0))
        return;





    VAR_6 = FUNC_13(4, VAR_3, VAR_1,
                               VAR_3, VAR_2);
    FUNC_12(VAR_5, FUNC_3(VAR_6));

    if (!FUNC_10(VAR_5))
    {
        FUNC_6(FUNC_0(VAR_5));
        VAR_7 = FUNC_1(FUNC_9());
        FUNC_5(VAR_7, "max-width-chars", 80, ((void*)0));
        FUNC_5(VAR_7, "ellipsize", VAR_4, ((void*)0));
        FUNC_7(FUNC_0(VAR_5), VAR_7, VAR_0);
        FUNC_8(FUNC_0(VAR_5), VAR_7,
            "markup", 0, "sensitive", 1, ((void*)0));
    }
    else
    {
        FUNC_11(FUNC_2(VAR_5), 0);
    }
}
