
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gchar ;
typedef int gboolean ;
typedef int GtkWindow ;
typedef int GtkWidget ;
typedef scalar_t__ GtkResponseType ;
typedef int GtkMessageType ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int const*,scalar_t__,int const*,int ,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (int *,int ,int ,int ,char*,int const*) ;
 int FUNC_4 (int *) ;

gboolean
FUNC_5(GtkWindow *VAR_6, GtkMessageType VAR_7, const gchar *VAR_8, const gchar *VAR_9, const gchar *VAR_10)
{
    GtkWidget *VAR_11;
    GtkResponseType VAR_12;


    VAR_11 = FUNC_3(VAR_6, VAR_2,
                            VAR_7, VAR_1,
                            "%s", VAR_8);
    FUNC_1( FUNC_0(VAR_11),
                           VAR_9, VAR_3,
                           VAR_10, VAR_4, ((void*)0));
    VAR_12 = FUNC_2(FUNC_0(VAR_11));
    FUNC_4 (VAR_11);
    if (VAR_12 == VAR_3)
    {
        return VAR_0;
    }
    return VAR_5;
}
