
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gboolean ;
typedef int PangoAttribute ;
typedef int PangoAttrList ;
typedef int GtkWidget ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int * VAR_2 ;
 int * FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int * FUNC_5 (int,int,int) ;
 int FUNC_6 (int *,int *) ;
 int * FUNC_7 () ;

__attribute__((used)) static void
FUNC_8(GtkWidget *VAR_3, gboolean VAR_4)
{
    GtkWidget *VAR_5;
    VAR_5 = FUNC_1(VAR_3, "title_selected");
    FUNC_4(VAR_5, VAR_4);

    VAR_5 = FUNC_1(VAR_3, "title_label");
    if (!VAR_4)
    {
        PangoAttrList *VAR_6;
        PangoAttribute *VAR_7;
        VAR_7 = FUNC_5(0xFFFF, 0xFFFF, 0xA000);
        VAR_6 = FUNC_7();
        FUNC_6(VAR_6, VAR_7);
        FUNC_2(FUNC_0(VAR_5), VAR_6);
        FUNC_3(VAR_5, VAR_1);
    }
    else
    {
        FUNC_2(FUNC_0(VAR_5), VAR_2);
        FUNC_3(VAR_5, VAR_0);
    }
}
