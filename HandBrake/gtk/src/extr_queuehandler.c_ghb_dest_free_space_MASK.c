
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int guint64 ;
typedef int gint64 ;
typedef int gchar ;
typedef int GhbValue ;
typedef int GFileInfo ;
typedef int GFile ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *,int ,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int const*) ;
 int * FUNC_7 (int *,char*) ;
 int * FUNC_8 (int *) ;

gint64
FUNC_9(GhbValue *VAR_1)
{
    GFile *VAR_2;
    GFileInfo *VAR_3;
    guint64 VAR_4 = -1;
    const gchar *VAR_5 = FUNC_7(VAR_1, "destination");
    gchar *VAR_6 = FUNC_6(VAR_5);
    gchar *VAR_7 = FUNC_8(VAR_6);

    VAR_2 = FUNC_2(VAR_7);
    VAR_3 = FUNC_3(VAR_2,
                                VAR_0, ((void*)0), ((void*)0));
    if (VAR_3 != ((void*)0))
    {
        if (FUNC_1(VAR_3, VAR_0))
        {
            VAR_4 = FUNC_0(VAR_3,
                                    VAR_0);
        }
        FUNC_5(VAR_3);
    }
    FUNC_5(VAR_2);
    FUNC_4(VAR_7);
    FUNC_4(VAR_6);

    return VAR_4;
}
