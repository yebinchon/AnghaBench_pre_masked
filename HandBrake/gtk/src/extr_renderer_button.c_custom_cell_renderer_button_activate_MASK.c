
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gchar ;
typedef int gboolean ;
typedef int MyGdkRectangle ;
typedef int GtkWidget ;
typedef int GtkCellRendererState ;
typedef int GtkCellRenderer ;
typedef int GdkEvent ;


 size_t VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,int ,int const*) ;

__attribute__((used)) static gboolean
FUNC_2 (
        GtkCellRenderer *VAR_3,
        GdkEvent *VAR_4,
        GtkWidget *VAR_5,
        const gchar *VAR_6,
        MyGdkRectangle *VAR_7,
        MyGdkRectangle *VAR_8,
        GtkCellRendererState VAR_9)
{
    FUNC_0("custom_cell_renderer_button_activate ()\n");
    FUNC_1 (VAR_3, VAR_2[VAR_0], 0, VAR_6);
    return VAR_1;
}
