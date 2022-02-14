
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gboolean ;
typedef int GhbValue ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,char*) ;
 char* FUNC_4 (int *) ;

void
FUNC_5(GhbValue *VAR_2)
{
    GhbValue *VAR_3;
    gboolean VAR_4 = VAR_0;
    VAR_3 = FUNC_2(VAR_2, "SubtitleLanguageList");
    if (FUNC_1(VAR_3) > 0)
    {
        GhbValue *VAR_5 = FUNC_0(VAR_3, 0);
        if (VAR_5 != ((void*)0))
        {
            FUNC_3(VAR_2, "PreferredLanguage",
                                    FUNC_4(VAR_5));
            VAR_4 = VAR_1;
        }
    }
    if (!VAR_4)
    {
        FUNC_3(VAR_2, "PreferredLanguage", "und");
    }
}
