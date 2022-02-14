
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t gint ;
typedef char const gchar ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 () ;
 char* FUNC_3 () ;
 int FUNC_4 (char const*,int) ;
 char* FUNC_5 (char*,char const*,char const*) ;
 int FUNC_6 (char const**) ;
 char** FUNC_7 (char const*,int ,int) ;
 char* VAR_2 ;

gchar *
FUNC_8(gchar *VAR_3)
{
    const gchar * VAR_4, * VAR_5 = "ghb";
    gchar * VAR_6;

    if (VAR_2 != ((void*)0))
    {
        VAR_4 = VAR_2;
    }
    else
    {
        VAR_4 = FUNC_3();
    }
    if (VAR_4 == ((void*)0) || !FUNC_0(VAR_4, VAR_1))
    {
        VAR_4 = FUNC_2();
        VAR_5 = ".ghb";
    }
    if (VAR_4 == ((void*)0) || !FUNC_0(VAR_4, VAR_1))
    {

        VAR_4 = "./";
        VAR_5 = ".ghb";
    }
    VAR_6 = FUNC_5("%s/%s", VAR_4, VAR_5);
    if (!FUNC_0(VAR_6, VAR_1))
        FUNC_4 (VAR_6, 0755);
    if (VAR_3)
    {
        gchar **VAR_7;
        gint VAR_8;

        VAR_7 = FUNC_7(VAR_3, VAR_0, -1);
        for (VAR_8 = 0; VAR_7[VAR_8] != ((void*)0); VAR_8++)
        {
            gchar *VAR_9;

            VAR_9 = FUNC_5 ("%s/%s", VAR_6, VAR_7[VAR_8]);
            FUNC_1(VAR_6);
            VAR_6 = VAR_9;
            if (!FUNC_0(VAR_6, VAR_1))
                FUNC_4 (VAR_6, 0755);
        }
        FUNC_6(VAR_7);
    }
    return VAR_6;
}
