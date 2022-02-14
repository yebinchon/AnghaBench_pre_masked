
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gchar ;
typedef int GtkWindow ;
typedef int GtkWidget ;
typedef int GtkMessageType ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int const*,int ,int *) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int *,int ,int ,int ,char*,int const*) ;
 int FUNC_4 (int *) ;

void
FUNC_5(GtkWindow *VAR_3, GtkMessageType VAR_4, const gchar *VAR_5, const gchar *VAR_6)
{
    GtkWidget *VAR_7;


    VAR_7 = FUNC_3(VAR_3, VAR_1,
                            VAR_4, VAR_0,
                            "%s", VAR_5);
    FUNC_1( FUNC_0(VAR_7),
                           VAR_6, VAR_2, ((void*)0));
    FUNC_2(FUNC_0(VAR_7));
    FUNC_4 (VAR_7);
}
