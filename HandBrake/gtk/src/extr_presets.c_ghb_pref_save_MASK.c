
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char gchar ;
typedef int GhbValue ;


 int VAR_0 ;
 void* FUNC_0 (int *,char const*) ;
 int * FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,char const*,int ) ;
 scalar_t__ FUNC_3 (int const*,int const*) ;
 int FUNC_4 (int const*) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_5 () ;

void
FUNC_6(GhbValue *VAR_3, const gchar *VAR_4)
{
    const GhbValue *VAR_5, *VAR_6;

    VAR_5 = FUNC_1(VAR_3, VAR_4);
    if (VAR_5 != ((void*)0))
    {
        GhbValue *VAR_7;
        VAR_7 = FUNC_0(VAR_1, "Preferences");
        if (VAR_7 == ((void*)0)) return;
        VAR_6 = FUNC_0(VAR_7, VAR_4);
        if (FUNC_3(VAR_5, VAR_6) != 0)
        {
            FUNC_2(VAR_7, VAR_4, FUNC_4(VAR_5));
            FUNC_5();
            VAR_2 = VAR_0;
        }
    }
}
