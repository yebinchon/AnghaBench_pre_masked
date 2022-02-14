
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ (* PFNGLGETSTRINGIPROC ) (int ,int) ;
typedef char GLubyte ;
typedef int GLint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int ,int*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char const) ;
 int FUNC_8 (char const*) ;

__attribute__((used)) static void FUNC_9(int VAR_4, int VAR_5, int VAR_6)
{
    int VAR_7;
    GLint VAR_8;
    const GLubyte* VAR_9;

    FUNC_6("%s context supported extensions:\n", FUNC_1(VAR_4));

    if (VAR_4 == VAR_1 && VAR_5 > 2)
    {
        PFNGLGETSTRINGIPROC VAR_10 =
            (PFNGLGETSTRINGIPROC) FUNC_4("glGetStringi");
        if (!VAR_10)
        {
            FUNC_5();
            FUNC_0(VAR_0);
        }

        FUNC_2(VAR_3, &VAR_8);

        for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
            FUNC_8((const char*) VAR_10(VAR_2, VAR_7));
    }
    else
    {
        VAR_9 = FUNC_3(VAR_2);
        while (*VAR_9 != '\0')
        {
            if (*VAR_9 == ' ')
                FUNC_7('\n');
            else
                FUNC_7(*VAR_9);

            VAR_9++;
        }
    }

    FUNC_7('\n');
}
